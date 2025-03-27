/* 
    Uppg9:
    Ibland när tal ska läsas in så får man dem som en sträng istället
    för som ett tal. 
    1) Läs in två strängar 
    2) Båda strängarna kommer att vara tre tecken långa och bara
    innehålla siffror, t ex: "123" och "456"
    3) Omvandla strängarna till heltal
    4) Addera talen
    5) Skriv ut resultatet
    Ex: 
    In: "123" "456"
    Ut: 579 (Bara detta tal skrivs ut)
    Du får lägga till funktioner i koden utöver det som skrivs i main
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 


int main(){
    char s1[4], s2[4];
    int num1, num2;
    scanf("%3s %3s", s1, s2);
    num1 = atoi(s1);
    num2 = atoi(s2);

    printf("%d", num1 + num2);

    return 0;
}
