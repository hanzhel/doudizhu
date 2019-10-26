//
// Created by ali-64142 on 2019-09-30.
//
#include <vector>
#ifndef DOUDIZHU_RULE_H
#define DOUDIZHU_RULE_H

/*
 * define all rules here
 * 单
 * 顺子（5， 6， 7 ...)
 * 对
 * 连对（3， 4，5， 6 ...)
 * 三个
 * 三代一
 * 三带一对
 * 飞机（两个单，两个对)
 * 3*3 （三个单，三个对）
 * 炸弹
 * 四带二个
 * 火箭（四连带4张） 暂不考虑
 */

class Rule {
public:
    static Rule& getInstance();
    std::vector<std::string> getAllPossible(const std::string &input);
    std::vector<std::string> getAllPossible(const std::string &input, const std::string& last);
private:
    static Rule sInstance;
    Rule();
    virtual ~Rule();
};


#endif //DOUDIZHU_RULE_H
