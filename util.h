//
// Created by ali-64142 on 2019-09-30.
//
#include <string>
#include <vector>
#ifndef DOUDIZHU_UTIL_H
#define DOUDIZHU_UTIL_H
enum CARDVALUE {
    THREE = 1,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    J,
    Q,
    K,
    A,
    TWO,
    BJ,  // XIAO WANG
    RJ   // DA WANG
};
std::string cardValueToString(enum CARDVALUE c);
enum CARDVALUE stringToCardValue(const std::string& input);
std::vector<enum CARDVALUE> parseInput(const std::string input);
std::string getOutput(const std::vector<enum CARDVALUE>& cardSet);
#endif //DOUDIZHU_UTIL_H
