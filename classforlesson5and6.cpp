#include "classforlesson5and6.h"

ClassForLesson5and6::ClassForLesson5and6()
{

}

void ClassForLesson5and6::swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;

}

void ClassForLesson5and6::reverse(int*a){
    for(int i = 0;i<10;i++){
        int tmp = a[i];
        a[i] = a[9 - i];
        a[9 - i] = tmp;
    }
}
bool ClassForLesson5and6::isSubstr(const char* str, const char* subStr) {
    size_t n = strlen(subStr);
    if (n == 0) {
        return true;
    }

    const char* p = str;
    while (*p) {
        const char* q = p;
        while ((q = strchr(q + 1, *subStr)) && *(q + 1) == *(subStr + 1));
        if (q && !memcmp(q, subStr, n)) {
            return true;
        }
        p++;
    }
    return false;
}
void ClassForLesson5and6::task1(){
    int a = 10;
    int b = 20;
    swap(&a, &b);
    std::cout << a << " " << b;

}

void ClassForLesson5and6::task2(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* address = arr;

    reverse(address);
}

void ClassForLesson5and6::task3()
{
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";
    std::cout << isSubstr(a,b) << " " << isSubstr(a,c);
}
