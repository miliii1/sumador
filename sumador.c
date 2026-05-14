#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int num1, num2, suma;
    p("Bienvenidos! \n");
    p("Vamos a hacer una suma de dos numeros :)\n"); 
    

    p("Ingrese un valor: ");
    s("%d" , &num1);
    p("Ingrese un valor: ");
    s("%d" , &num2);

    suma = num1 + num2;

    p("%d + %d = %d", num1, num2, suma);

    return 0;


}

Esta mal?
#include<stdio.h>
#include<stdlib.h>
#include <strings.h>

int main()
{
    char letra[3];
    printf("Ingrese tres caracteres: ");
    gets(letra);
    return 0;
}

/* 10. Desarrollar un algoritmo que ingrese dos números y luego un carácter que indique una
operación (S-Suma, R-Resta, M-Multiplicación, D-División) y luego realice la operación
correspondiente, teniendo en cuenta que no se pueden realizar divisiones por cero.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, num2, total;
    char letra;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese la operación: (S=suma, R=Resta, M=multiplicacion, D=Division): ");
    scanf("%s", letra);
    
    switch(letra) {
          case 'S' || 's':
              total = num + num2;
          break;
          case 'R' || 'r':
              total = num - num2;
          break;
          case 'M' || 'm':
              total = num*num2;
          break;
          case 'D' || 'd':
          if(num2 == 0) printf("No se puede realizar la division por 0.");
          else total = num/num2;
          break;
          default:
              printf("\nIngrese una operación válida.");
    }
          
    printf("\nEl resultado de la operaciónes: %d", total);
    return 0;
}

/*12. Desarrollar un algoritmo que ingrese nombre y fecha de nacimiento como tres enteros
(DD, MM, AAAA), de una persona y mostrar por pantalla su nombre y su fecha de
nacimiento , de la siguiente forma "Carlos nació el 5 de marzo de 1973".*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nombre[20];
    long fecha;
    int dia, mes, anio;
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su fecha de nacimiento (DD/MM/AAAA): ");
    scanf("%ld", &fecha);
    
    dia = fecha % 10000;
    mes = (fecha / 10000) % 100;
    anio = fecha / 1000000;
    
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Error: La fecha %08ld no es valida.\n", fecha);
        return 1;
    }
    
    printf("%s nació el dia %d ", nombre, dia);
    
    switch (mes) {
        case 1:  printf("enero"); break;
        case 2:  printf("febrero"); break;
        case 3:  printf("marzo"); break;
        case 4:  printf("abril"); break;
        case 5:  printf("mayo"); break;
        case 6:  printf("junio"); break;
        case 7:  printf("julio"); break;
        case 8:  printf("agosto"); break;
        case 9:  printf("septiembre"); break;
        case 10: printf("octubre"); break;
        case 11: printf("noviembre"); break;
        case 12: printf("diciembre"); break;
    }
    
    printf("del año %d", anio);
    return 0;
}

