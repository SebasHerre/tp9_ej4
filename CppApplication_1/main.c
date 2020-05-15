#include<stdio.h>
#include"interface.h"
#include"logic.h"
                                                
#define LARGO 100
#define NUMEROS 'n'
#define PALABRAS 'p'
#define ELECCION(x) if(x==PALABRAS){printf("Ingrese el mensaje:\n");}else{printf("Ingrese el numero:\n");}
	

int main() 
{
    char tipo;
    int i;
    char check, text[LARGO];     	//defino el string auxiliar del mismo tamaño.
    char* strend;

    rules();
    do
    {
	printf("¿Desea evaluar palabras (p) o numeros (n)?\n");	//consideramos que no tiene sentido analizar ambos casos juntos, 									//pero si valia la pena evaluar numeros capicua.
	tipo=choose(PALABRAS,NUMEROS);
	ELECCION(tipo);
	strend=teclado(text);
        if(strend<text)
        {
            printf("No hay caracteres para evaluar\n");
    	}
    	else
    	{
	    if(tipo==PALABRAS)
	    {        
    		palind(&text[0], strend);
    	    }
	    else if(tipo==NUMEROS)
	    {
		i=0;
		while((text[i]=='0')&&(&text[i]<strend))	//ignora los 0 a la izquierda del numero.
		{
		    i++;
		}
		capicua(&text[i], strend);
	    }
	}
	printf("¿Desea seguir? (y/n)\n");
	check=choose('y', 'n');
    }
    while(check!='n');

    printf("Adios, ¡vuelva pronto!\n");
    return 0;
}