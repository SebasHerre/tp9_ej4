/*****************************************************************************
  @file     interface.c
  @brief    Definición de las funciones que se involucran en la interfaz del 
	    usuario.
  @author   grupo-4.
 ******************************************************************************/

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

#include<stdio.h>
#include"interface.h"

/*******************************************************************************
 *******************************************************************************
                        GLOBAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/

void rules (void)
{
    printf("El programa analiza si el mensaje introducido es un palindromo");
    printf(", ignorando signos de puntuación.(MODIFICABLE)\n");
    printf("No debe introducir la letra ñ, letras acentuadas o con dieresis,");
    printf("para el correcto funcionamiento del programa.\n");     
    printf("El programa evaluara solo letras o solo numeros, segun usted");
    printf(" decida, pero no ambas a la vez.\n");
    printf("El mensaje no debe superar los 100 caracteres.\n");
}

char* teclado(char text[])
{
    static char c; 
    int cont=0;

    while ((c=getchar())!='\n') //Hasta que no haya introducido un enter , sigo leyendo el teclado.
    {
        if(cont<LARGO)      //Chequeo que el usuario no introduzca una palabra mas larga que nuestro arreglo
        {
            text[cont++]=c;     //Voy guardando en el arreglo, lo que el usuario está introduciendo.
        }
        else
        {
            printf("Excedio el limite de caracteres, intente de nuevo por favor.\n");
            return 0;
        }
    }
    return &text[--cont];
}

char choose(char opt1, char opt2)
{
    static char choice, c;
    do
    {
	while((c=getchar())!='\n')
	{        
	    choice=c;
	}
    }
    while (choice!=opt1 && choice!=opt2);
    return choice;
}
