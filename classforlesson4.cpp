#include "classforlesson4.h"

ClassForLesson4::ClassForLesson4()
{

}

void ClassForLesson4::task1(){
    float a[6] = {-2,1,-3,4,-1,2,1,-5,4};
    float max = 0,max2 = 1;
    for(int i = 2;i < 6;i++){
        if(a[i] > a[max]){
            max2 = max;
            max = 2;
        }
        else if(a[i] > max2){
            max2 = i;
        }

    }
}

void ClassForLesson4::task2(){
    int dreamed_num = 9, array_num[4] = {2, 7, 11, 15};
    for(int i = 0; i < 4;i++){
        for(int j = 0; j < 4;j++){
            if((array_num[i] + array_num[j] == dreamed_num)&&(i != j)){
                std::cout << i << j;
                break;
            }
        }
    }
}

void ClassForLesson4::task3(){
    std::vector<int> vec;
    int command = 0, num;
    while(command != -2){
        std::cout<<"";
        std::cin>>num;
        if(command == -1){
            std::sort(vec.rbegin(),vec.rend());
            std::cout<<" "<<vec[4];
        }
        else{
            vec.push_back(command);
        }
    }
}

void ClassForLesson4::task4(){
    int array_num[6] = {-100,-50, -5, 1, 10, 15};
    for(int i = 0; i < 6;i++){
        for(int j = 0; j < 6;j++){
            if(abs(array_num[j])>abs(array_num[j+1])){
                int tmp = array_num[j];
                array_num[j] = array_num[j + 1];
                array_num[j + 1] = tmp;
            }
        }
    }
}
