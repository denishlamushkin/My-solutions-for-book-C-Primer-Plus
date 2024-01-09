#include <stdio.h>
int main(void)
{
    char alphabet[26];
    char letter;
    int n;

    for (n=0, letter = 'a'; n<26; n++)
        {
        alphabet[n] = letter++; // increment works afterwars!
        printf("Index [%d]=%c\n", n, alphabet[n]);
        }

    return 0;
}