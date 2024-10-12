#include "classforlesson1.h"

ClassForLesson1::ClassForLesson1()
{

}

float ClassForLesson1::travelTime(float distance, float speed)
{
    assert(speed >= 0);
    float time = distance / speed;
    return time;
}

void ClassForLesson1::task1(){
    std::string Surname;
    std::string array_surname[10];
    for(int i = 0; i < 10; i++){
        std::cin>>Surname;
        array_surname[i] = Surname;
    }
    for(int i = 0; i < 3; i++){
        std::cin>>Surname;
        for(int i = 0; i < 10; i++){
            if(array_surname[i] == Surname){
                std::cout << i + 1 << std::endl;
                break;
            }
        }
    }
}

void ClassForLesson1::task2(){
    float num;
    float array_num[15];
    for(int i = 0; i < 15; i++){
        std::cin>>num;
        array_num[i] = num;
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 14;j++){
            if(array_num[j] > array_num[j + 1]){
                int tmp = array_num[j];
                array_num[j] = array_num[j+1];
                array_num[j+1] = tmp;
            }
        }
    }
    std::cout<< "Вывод: ";
    for(int i = 0; i < 15;i++){
        std::cout<< '\t' << array_num[i];
    }
}

void ClassForLesson1::task3(){
    float distance, speed;
    std::cout<<"Введите проденный путь: ";
    std::cin>>distance;
    std::cout<<"Введите среднюю скорость: ";
    std::cin>>speed;
    std::cout<<"Затраченное время: " << travelTime(distance,speed);
}


