#include <stdio.h>
#include <math.h>

main(){
    //raiz quadrada
    int n=9,result;

    result = sqrt(n);

    printf("result: %d", result);

    float result2;

    result2 = sqrt(5);

    printf("\nResult 2: %f", result2);

    //potencia
    //pow(var, expo)
    //2 elevado a 5
    int base=2,expo=5,result3;

    result3 = pow(base, expo);
    printf("\nResult 3: %d", result3);

    //
    float pi=3.1415;

    printf("\n%.2f",sin(pi/2));
    
}