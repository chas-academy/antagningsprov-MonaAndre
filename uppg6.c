/* 
    Uppg6:
    1) Läs in fem heltal från tangentbordet
    2) Hitta det NÄST största av de fem talen (förutsätt att de är unika). 
    3) Skriv ut talet (bara siffror, ingen övrig text).
    OBS: Du får inte använda math.h i den här uppgiften.
*/

#include <stdio.h>


int main(){
    int numbers[5];
    int i, biggest, nextBiggest;

    // Läsar in 5 tal med hjälp av loop
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Hittar störst och näst störst
    // Initiera
    if (numbers[0] > numbers[1]) {
        biggest = numbers[0];
        nextBiggest = numbers[1];
    } else {
        biggest = numbers[1];
        nextBiggest = numbers[0];
    }

    // Loopar igenom resterande
    for (i = 2; i < 5; i++) {
        if (numbers[i] > biggest) {
            nextBiggest = biggest;
            biggest = numbers[i];
        } else if (numbers[i] > nextBiggest) {
            nextBiggest = numbers[i];
        }
    }
    printf("%d", nextBiggest);

    return 0;
}