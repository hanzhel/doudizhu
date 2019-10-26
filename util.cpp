//
// Created by ali-64142 on 2019-09-30.
//
#include "util.h"
#include <iostream>
#include <sstream>
#include <map>
static const std::map<std::string, enum CARDVALUE> cardEnumMap = {
        {"3",THREE},
        {"4",FOUR},
        {"5",FIVE},
        {"6",SIX},
        {"7",SEVEN},
        {"8",EIGHT},
        {"9",NINE},
        {"10",TEN},
        {"J",J},
        {"Q",Q},
        {"K",K},
        {"A",A},
        {"2",TWO},
        {"BJ",BJ},
        {"RJ",RJ}
};
static const std::map<enum CARDVALUE, std::string> cardStringMap = {
        {THREE, "3"},
        {FOUR, "4"},
        {FIVE,"5"},
        {SIX,"6"},
        {SEVEN,"7"},
        {EIGHT,"8"},
        {NINE,"9"},
        {TEN,"10"},
        {J,"J"},
        {Q,"Q"},
        {K,"K"},
        {A,"A"},
        {TWO,"2"},
        {BJ,"BJ"},
        {RJ,"RJ"}
};
std::string cardValueToString(enum CARDVALUE c) {
    std::string ret;
    try {
        ret = cardStringMap.at(c);
    } catch (std::out_of_range e) {
        std::cout << c << " is invalid cardValue" << std::endl;
    }
    return ret;
}
enum CARDVALUE stringToCardValue(const std::string& input) {
    enum CARDVALUE ret;
    try {
        ret = cardEnumMap.at(input);
    } catch (std::out_of_range e) {
        std::cout << "input " << "is invalid card string value" << std::endl;
    }

}

std::vector<enum CARDVALUE> parseInput(const std::string input) {
    std::vector<enum CARDVALUE> ret;
    if(input.size() < 0 ) return ret;
    std::istringstream f(input);
    std::string s;
    while (std::getline(f, s, ' ')) {
        try {
            enum CARDVALUE v = cardEnumMap.at(s);
            ret.push_back(v);
        } catch (std::out_of_range e) {
            std::cout << s << " is invalid input value" << std::endl;
        }
    }
    return ret;
}
std::string getOutput(const std::vector<enum CARDVALUE>& cardSet) {
    std:: string ret;
    for (enum CARDVALUE v:cardSet) {
        try {
            ret += cardStringMap.at(v);
            ret += " ";
        } catch (std::out_of_range e) {
            std::cout << v << " is invalid key value" << std::endl;
        }
    }
    return ret;
}
