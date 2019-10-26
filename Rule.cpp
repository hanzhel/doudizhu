//
// Created by ali-64142 on 2019-09-30.
//

#include "Rule.h"
Rule Rule::sInstance;
Rule& Rule::getInstance() {
    return sInstance;
}

Rule::Rule() {

}
Rule::~Rule() {

}

std::vector<std::string> Rule::getAllPossible(const std::string &input) {

}

std::vector<std::string> Rule::getAllPossible(const std::string &input, const std::string& last) {

}