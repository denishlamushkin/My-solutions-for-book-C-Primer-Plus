#include <stdio.h>
void jolly(void); // объявление функции
void deny(void);
int main(void){
    jolly(); /*выводим сообщения*/
    jolly();
    jolly();
    deny();
    return 0;
}


void jolly(){
    printf("Он веселый молодец!\n");
}


void deny(){
    printf("Никто не может это отрицать!");
}