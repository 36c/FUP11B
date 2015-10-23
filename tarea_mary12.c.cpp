#include<stdio.h>//libreria de E/S
/*convertidor de MB a unidades de almacenamiento*/
int main()
{//inicio
float N1,resultado3,resultado5,resultado4;
   int resultado2; 
   printf("escribe el número de megabytes a convertir:");
   scanf("%f", &N1);
   resultado2=N1*1024*1024;
   resultado3=N1*1024;
   resultado4=N1/1024;
   resultado5=N1/1024/1024;
   printf("\nLa convertir a bytes es de: %d", resultado2);
   printf("\nLa convertir a kilobytes es de: %f", resultado3);
   printf("\nLa convertir a gigabytes es de: %f", resultado4);
   printf("\nLa convertir a terabytes es de: %f", resultado5);
}//fin
