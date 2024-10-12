#include "classforlesson3.h"

void ClassForLesson3::task2()
{
    char array_XO[3][3];
    int x,y;

    for(int i = 0; i < 9; i++){
        if(i % 2 == 0)std::cout<<"Ходит игрок Х. Введите пару числел через пробел(от 1 до 3):";
        if(i % 2 == 1)std::cout<<"Ходит игрок O. Введите пару числел через пробел(от 1 до 3):";
        std::cin >> x >> y;
        if(i % 2 == 0)array_XO[x-1][y-1]='X';
        if(i % 2 == 1)array_XO[x-1][y-1]='O';

        if( (array_XO[0][0] == array_XO[0][1] == array_XO[0][2])||
            (array_XO[1][0] == array_XO[1][1] == array_XO[2][2])||
            (array_XO[2][0] == array_XO[1][1] == array_XO[2][2])||
            (array_XO[0][0] == array_XO[1][0] == array_XO[2][0])||
            (array_XO[0][1] == array_XO[1][1] == array_XO[2][1])||
            (array_XO[0][2] == array_XO[1][2] == array_XO[2][2])){
            if(i % 2 == 0)std::cout<<"Победил игрок Х.";
            if(i % 2 == 1)std::cout<<"Победил игрок О.";
            break;
        }
        if(i == 8)std::cout<<"Ничья";
    }
}

void ClassForLesson3::task3(){
    float matrix1[4][4],matrix2[4][4];
    bool flag = true;

    for(int i = 0; i < 4 ;i++){
        for(int j = 0; j < 4; j++){
            if(matrix1[i][j] != matrix2[i][j]){
                std::cout<<"\nМатрицы не равны\n";
                flag = false;
            }
        }
    }

    for(int i = 0; i < 4 ;i++){
        for(int j = 0; j < 4; j++){
            if(i != j){
                matrix1[i][j] = 0;
            }
            std::cout<<" "<<matrix1[i][j];
        }
    }
}

void ClassForLesson3::task4(){
    float matrix1[4][4],vector[4][1], summary_vector[4][1];

    for(int i = 0 ; i < 4 ; i++){
        summary_vector[i][0] = matrix1[i][0]*vector[i][0] + matrix1[i][1]*vector[i][0] + matrix1[i][2]*vector[i][0] + matrix1[i][3]*vector[i][0];
        std::cout<<"\n"<<summary_vector[i][0];
    }
}

void ClassForLesson3::task5(){
    bool matrix[12][12];
    int x,y;
    for(int i = 0; i < 12 ;i++){
        for(int j = 0; j < 12; j++){
            matrix[i][j] = true;
        }
    }

    for(int i = 0; i < 12*12;i++){
        std::cout<<"Введите через пробел номер ячейки( два числа): ";
        std::cin>> x >> y;

        if(matrix[x-1][y-1] == true){
            std::cout<<"ПЫРК\n";
            matrix[x-1][y-1] = false;
        }
        else{
            std::cout<<"Уже лопнули(\n";
        }
    }
}

ClassForLesson3::ClassForLesson3()
{

}
