#include <stdio.h>
#include <locale.h>
#include <wchar.h>

/*how to handle text from different languages with unicode*/
int main(void)
{
    wchar_t bro[400];
    setlocale(LC_ALL, "");
    printf("enter your name\n");
    wscanf(L"%ls", bro);
    printf("%ls %ld\n", bro, wcslen(bro));

    return 0;
}