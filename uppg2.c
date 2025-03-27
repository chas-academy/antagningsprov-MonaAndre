/* 
    Uppg2:
    1) Läs in tre heltal från tangentbordet
    2) ta fram det största av dem
    3) Skriv ut det största av dem (bara siffror, ingen övrig text)
*/

#include <stdio.h>

int main(){
    int a, b, c, biggest;
    scanf("%d %d %d", &a, &b, &c);
    biggest = a;
    if (b > biggest) {
        biggest = b;
    }
    if (c > biggest) {
        biggest = c;
    }

    printf("%d", biggest);

    return 0;
}