#include <stdio.h>


int main(void)
{
    float speed; // скорость загрузки в мегабитах
    float weight; // размер файла в мегабайтах
    printf("Введите скорость загрузки в мегабитах в секунду.\n");
    scanf("%f", &speed);
    printf("Введите размер файла в мегабайтах.\n");
    scanf("%f", &weight);
    printf("При скорости загрузки %.2f мегабит в секунду файл размером %.2f мегабайт загружается за %.2f секунды\n", 
    speed,weight,8*weight/speed);


    return 0;
}