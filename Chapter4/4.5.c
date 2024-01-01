#include <stdio.h>


int main(void)
{
    float speed; // скорость загрузки в мегабитах
    float weight; // размер файла в мегабайтах
    printf("Enter speed  of download in Mbit in second.\n");
    scanf("%f", &speed);
    printf("Enter weight of the file in Mbait.\n");
    scanf("%f", &weight);
    printf("With speed of download %.2f мBit in second file with weight of %.2f мBait will download in %.2f seconds\n", 
    speed,weight,8*weight/speed);


    return 0;
}
