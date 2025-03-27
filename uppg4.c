/* 
    Uppg4:
    1) Läs in en sträng från tangentbordet (max 20 tecken)
    2) Ta fram det tredje tecknet i strängen (ex: "hejsan" -> 'j')
    3) Om strängen är kortare än tre tecken, skriv ut "Too short"
    4) Om strängen är minst tre tecken lång, skriv ut det tredje tecknet
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[21];
    int len;
    scanf("%20s", str);
    len = strlen(str);

    // Om för kort
    if (len < 3) {
        printf("Too short");
    } else {
        printf("%c", str[2]);
    }

    return 0;
}