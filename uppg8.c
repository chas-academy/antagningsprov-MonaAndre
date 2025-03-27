/* 
    Uppg8:
    1) Läs in en sträng (inga mellanslag, ej åäö eller specialtecken)
    2) Strängen kan innehålla stora och små bokstäver (ta hänsyn till det)
    3) Strängen är inte längre än 20 tecken
    4) Räkna hur många vokaler (a, e, i, o, u, y) strängen innehåller
    5) Skriv ut totala antalet vokaler
    Du får lägga till funktioner i koden utöver det som skrivs i main
*/

#include <stdio.h>
#include <string.h>

int isVocal(char c) {
 
    if (c >= 'A' && c <= 'Z') {
        c = c + 32; 
    }

    // För att kolla om det är en vokal
    return (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u' || c == 'y');
}
int main(){   char str[21];
    int count = 0;
    scanf("%20s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVocal(str[i])) {
            count++;
        }
    }
    printf("%d", count);

    return 0; 
}
