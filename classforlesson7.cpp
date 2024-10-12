#include "classforlesson7.h"

ClassForLesson7::ClassForLesson7()
{

}

void ClassForLesson7::swapvec(std::vector<int>& v1, int* arr2, int len) {
    if (v1.size() != len) {
        throw std::runtime_error("Размеры вектора и массива не совпадают");
    }
    std::swap_ranges(v1.begin(), v1.end(), arr2);
}

void ClassForLesson7::task1(){
    std::vector<int> a = {1, 2, 3, 4};
       int b[] = {2, 4, 6, 8};

       try {
           swapvec(a, b, sizeof(b)/sizeof(b[0]));
       } catch (const std::exception& e) {
           std::cerr << e.what();
           return 1;
       }

       for (int i = 0; i < 4; ++i) {
           std::cout << a[i] << ' ';
       }
       std::cout << '\n';

       for (int i = 0; i < 4; ++i) {
           std::cout << b[i] << ' ';
       }
       std::cout << '\n';
}

int ClassForLesson7::countWays(int currentStep, int targetStep, int maxJumpLength){
    if (currentStep > targetStep) {
            return 0;
        } else if (currentStep == targetStep) {
            return 1;
        }

        int ways = 0;
        for (int jumpLength = 1; jumpLength <= maxJumpLength; jumpLength++) {
            ways += countWays(currentStep + jumpLength, targetStep, maxJumpLength);
        }
        return ways;
}

void ClassForLesson7::task2(){
    int n = 3;
    int k = 2;

    std::cout << countWays(0, n, k) << std::endl;
}

void ClassForLesson7::evendigits(long long n, int &ans){
    if (n == 0) {
            return;
        }

        if (n % 10 % 2 == 0) {
            ans++;
        }

        evendigits(n / 10, ans);
}

void ClassForLesson7::task3(){
    long long number = 9223372036854775806;
    int answer = 0;

    evendigits(number, answer);
    std::cout << "Количество четных цифр в числе " << number << ": " << answer << std::endl;
}
