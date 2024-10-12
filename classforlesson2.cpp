#include "classforlesson2.h"


ClassForLesson2::ClassForLesson2()
{

}

void ClassForLesson2::task1()
{
    std::vector<float> num;
    int count, delete_count = 0;
    float tmp;
    std::cout<<"Введите количество элементов в векторе: ";
    std::cin>>count;
    std::cout<<"Вводите элементы вектора через ENTER: ";
    for(int i = 0; i < count; i++){
        std::cin>>tmp;
        num.push_back(tmp);
    }

    std::cout<<"Введите число которое хотите удалить: ";
    std::cin>>count;

    for(int i = 0; i < num.size(); i++){
        if(tmp == num[i]){
            num.erase(num.begin() + i);
            delete_count++;
        }
    }

    std::cout<<"Числа в векторе: ";
    for(int i = 0; i < num.size(); i++){
        std::cout<<"\t"<<num[i];
    }
}

void ClassForLesson2::task2(){
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {1, 1, 0, 3};
    float sum = 0;
    if(prices.size() == items.size()){
        for(int i = 0; i < prices.size();i++){
            sum += prices[i]*items[i];
        }
        std::cout<<"Суммарная стоимость будет равна " << sum <<".";
    }
    else{
        std::cout<<"Список не полный";
    }
}

void ClassForLesson2::task3(){
    int num;
    std::vector<int>numbers;
    while (true) {
       std::cout<<"\ninput number ";
       std::cin >> num;

       if(num == -2)break;

       if(num == -1){
           std::cout<<"\noutput:";
           for(int i = 0; i < numbers.size();i++){
               std::cout<<" "<<numbers[i];
           }
       }
       else{
           if(numbers.size() == 20){
               numbers.erase(numbers.begin());
               numbers.push_back(num);
           }
           else if(numbers.size() < 20){
               numbers.push_back(num);
           }
       }
    }
}
