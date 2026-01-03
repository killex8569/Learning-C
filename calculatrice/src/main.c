#include <stdio.h>

#define nb 10

int main(){
    float notes[nb] = {12, 5, 6, 18, 15, 6, 2, 4, 16, 14};
    float sum = 0; 
    float result;

    for (int i = 0; i < nb; i++){
        sum += notes[i];
    }
    result = sum / nb;
    printf("resultat : %f", result);

    return 0;
}
