#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>
int main() {
    int input;
    int count = 0;
    srand(time(0)); int a = rand()%100;
    do {
        count++;
        scanf("%d", &input);
        if (input < a)
        {
            printf("小了");
        }
        else if (input > a) { printf("bigger"); }
        else
        {
            printf("you are right\n");
            printf("you have gess %d time", count);
        }

    } while (a != input);
    
    return 0;
}


