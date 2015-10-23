#include <stdio.h>//libreria de e/s
int cal;
int main ()
{//inicio
	printf ("ingresa tu calificacion\n");
	scanf ("%d",&cal);
	if (cal>=7)
		{
			printf ("Pasaste la materia");
		}
	else 
		{
			printf ("no pasate la materia");
		}

}//fin
