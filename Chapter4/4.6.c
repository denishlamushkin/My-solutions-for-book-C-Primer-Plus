#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

// updated for different languages
int main(void)
{
    
    wchar_t name[20], surname[20];
    setlocale(LC_ALL, "");
    printf("Enter your name:\n");
    wscanf(L"%ls", name);
    printf("Enter your surname:\n");
    wscanf(L"%ls", surname);
    printf("%ls %ls\n", name, surname);
    printf("%*ld %*ld\n", wcslen(name), wcslen(name), wcslen(surname), wcslen(surname));
    printf("%-*ld %-*ld\n", wcslen(name), wcslen(name), wcslen(surname), wcslen(surname));
}