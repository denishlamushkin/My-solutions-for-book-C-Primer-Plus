#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

// updated for different languages
int main(void)
{
    
    wchar_t name[20], surname[20];
    setlocale(LC_ALL, "");
    wprintf(L"Enter your name:\n");
    wscanf(L"%ls", name);
    wprintf(L"Enter your surname:\n");
    wscanf(L"%ls", surname);
    wprintf(L"%ls %ls\n", name, surname);
    wprintf(L"%*ld %*ld\n", wcslen(name), wcslen(name), wcslen(surname), wcslen(surname));
    wprintf(L"%-*ld %-*ld\n", wcslen(name), wcslen(name), wcslen(surname), wcslen(surname));
}