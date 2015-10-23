#include <stdio.h>//libreria de E/S
/* programa que sume dos numeros
*/
int resultado;
int N1;
int N2;
int main()
{// inicio
printf("dame un número:");
scanf("%d",&N1);
printf("dame un número:");
scanf("%d",&N2);
resultado=N1+N2;
printf("el resultado es: %d", resultado);
}// fin
