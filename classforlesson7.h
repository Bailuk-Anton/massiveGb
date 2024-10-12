#ifndef CLASSFORLESSON7_H
#define CLASSFORLESSON7_H
#include <iostream>
#include <vector>
#include <algorithm>
class ClassForLesson7
{
    void swapvec(std::vector<int>& v1, int* arr2, int len);
    static void task1();
    int countWays(int currentStep, int targetStep, int maxJumpLength);
    static void task2();
    void evendigits(long long n, int& ans);
    static void task3();
public:
    ClassForLesson7();
};

#endif // CLASSFORLESSON7_H
