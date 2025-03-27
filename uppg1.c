/* 
    Uppg1:
    1) Läs in två heltal från tangentbordet
    2) Summera heltalen
    3) Skriv ut resultatet (bara siffror, ingen övrig text)
*/

#include <stdio.h>

int main(){
    int num1, num2, summa;
    scanf("%d %d", &num1, &num2);
    summa = num1 + num2;
    printf("%d", summa);
    return 0;
}