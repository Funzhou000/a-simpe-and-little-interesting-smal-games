#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // ��׼���������
#include <vector>   // ��׼ģ����е�����
#include <string>   // C++ �ַ�����
#include <cmath>    // ��ѧ����
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
            printf("С��");
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


