/* 
    Uppg10:
    1) Läs in en sträng (bara små bokstäver a-z, max 20 tecken)
    2) Sortera bokstäverna i alfabetisk ordning
    3) Skriv ut den sorterade strängen
        
    Ex: 
    In: "banana"
    Ut: "aaabnn"
    Du får lägga till funktioner i koden utöver det som skrivs i main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main(){
    char str[21];
    scanf("%20s", str);
    int len = strlen(str);
    qsort(str, len, sizeof(char), compare);

    printf("%s", str);

    return 0;
}
