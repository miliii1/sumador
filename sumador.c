#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int num1, num2, suma;
    p("Bienvenidos \n");
    p("Vamos a hacer una suma de dos numeros :)\n"); 
    

    p("Ingrese un valor: ");
    s("%d" , &num1);
    p("Ingrese un valor: ");
    s("%d" , &num2);

    suma = num1 + num2;

    p("%d + %d = %d", num1, num2, suma);

    return 0;


}