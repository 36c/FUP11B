#include<stdio.h>//libreria e/s
 int Edad;
 int main()
 {
	 
 
	 printf("Da  ");
	 scanf("%d", &Edad);
 
	 if (Edad>=0 && Edad<=59)
    	{
    		
    		if(Edad>=0 && Edad<=29)
    		{
    			if(Edad>=0 && Edad<=18)
    		{
    			if(Edad>=0 && Edad<=12)
    			{
    				printf("Ni�o");
    			}
    			else
    			{
    				printf("Adolecente");
    			}
    			
    		}
    		else
    		{
    			printf("Joven");
    		}
    			
    		}
    		else
    		{
    			printf("Adulto");
    		}
    		
    	}
    else
    	{
    		printf("Adulto Mayor");
    	}
		
	 return 0;
}
