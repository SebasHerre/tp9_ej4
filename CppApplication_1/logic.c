#include<stdio.h>
#include"logic.h"


#define TRANSFORM ('a'-'A')
#define LETRAmin (x>='a'&&x<='z')
#define LETRAMAY (x>='A' && x<='Z')

/*@Brief    Funcion que convierte las mayusculas en minusculas.
  @param    char ha analizar , y si es necesario transformarlo a minuscula.
  @return   Devuelve el char que recibio , en miniscula.
 */
static char toLower (char); 
/*@Brief    Funcion que analiza si es un caracter es una letra o un número.
  @param    char ha analizar-
  @return   Devuelve un 1 si el caracter es un número , si es una letra devuelve un 0.
 */
static int isLetter (char);                    
/*@Brief    Funcion que analiza si es un signo de puntuacipon (a criterio del grupo).
  @param    char ha analizar-
  @return   Devuelve un 1 si el caracter es un signo de puntuacion y un 0 si no.
 */
static int isPunt (char);                     

//Configuracion de signos de puntuacion.
 static char sig_punt[9]={'"','.',',',':',';','?','!',' ','-'};

/***********************Funciones Globales*********************/



int palind(char* inicio, char* fin)
{
    while(isPunt(*inicio)&&(inicio<fin))	//saltea signos de puntuacion.
    {
        inicio++;
    }
    if((isLetter(*inicio)||isPunt(*inicio))==0)	//detecta error.
    {
        printf("Introdujo un caracter invalido\n");
        return 0;
    }
    
    while(isPunt(*fin)&&(fin>inicio))		//saltea signos de puntuacion.
    {
        fin--;
    }
    if((isLetter(*fin)||isPunt(*fin))==0)	//detecta error.
    {
        printf("Introdujo un caracter invalido\n");
        return 0;
    }
    
    if(inicio==fin)     //caso base (cantidad impar de letras).
    {
        printf("Es palindromo\n");
        return 0;       
    }
    else if(toLower(*inicio)==toLower(*fin))
    {
	if((inicio+1)==fin)	//caso base (cantidad par de letras).
	{
            printf("Es palindromo\n");
            return 0; 
	}
	else
	{
	    return( palind(inicio+1,fin-1) );	//caso recursivo.
	}
    }
    else
    {
       	printf("No es palindromo\n");
        return 0; 		    
    }
    printf("Error\n");		//no deberia llegar a ejecutarse esta parte del codigo.
    return 0;
}

int capicua(char* inicio, char* fin)
{
    if( ((*inicio)>='0'&&(*inicio)<='9')==0 )		//detecta error.
    {
        printf("Introdujo un caracter invalido\n");
        return 0;
    }
    
    if( ((*fin)>='0'&&(*fin)<='9')==0 )			//detecta error.
    {
        printf("Introdujo un caracter invalido\n");
        return 0;
    }
    
    if(inicio==fin)     //caso base (cantidad impar de numeros).
    {
        printf("Es capicua\n");
        return 0;       
    }
    else if(*inicio==*fin)
    {
	if((inicio+1)==fin)	//caso base (cantidad par de numeros).
	{
            printf("Es capicua\n");
            return 0; 
	}
	else
	{
	    return( capicua(inicio+1,fin-1) ); //Caso recursivo.
	}
    }
    else
    {
       	printf("No es capicua\n");
        return 0; 		    
    }
    printf("Error\n");  //no debria llegar a ejecutarse esta parte del codigo.
    return 0;
}




/*****************************Funciones Locales********************/
static char toLower (char x)
{
    static char y;
    y=x;               
    if (LETRAMAY)   //Analizo si es una letra mayúscula.
    {
        y = x+TRANSFORM;      //Transformo la mayúscula en minúscula.
    }
    return y;
}

static int isPunt (char x)
{
    int j;
    for(j=0;j<(sizeof(sig_punt)/sizeof(char));j++)
    {
        if (x==sig_punt[j]) //Analizo si el signo , está en el criterio elegido.
        {
            return 1;
        }
    }
    return 0;
}

static int isLetter (char x)
{
    if (LETRAmin ||LETRAMAY )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}