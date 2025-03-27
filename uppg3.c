/* 
    Uppg3:
    1) Läs in en sträng från tangentbordet (max 20 tecken)
    2) ta fram hur många tecken strängen innehåller (bortsett från '\0')
    3) Skriv ut antalet tecken (bara siffror, ingen övrig text)
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[21];
    int len;
    scanf("%20s", str);
    len = strlen(str);
    printf("%d", len);

    return 0;
}