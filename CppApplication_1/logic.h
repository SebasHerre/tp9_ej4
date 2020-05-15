/*******************************************************************************
  @file     interface.h
  @brief    Encabezado de las funciones que tienen que ver con la logica del 
            programa.
  @author   Grupo-4.
 ******************************************************************************/



#ifndef _LOGIC_H_
#define _LOGIC_H_

/*@Brief    Funcion recursiva que analiza si el string se trata de un palindromo.
  @param    Puntero al inicio de la frase/palabra que se quiera analizar.
  @param    Puntero al final de la frase/palabra que se queire analizar
  @return   Despues de la recursividad , devuelve un 1 si fue un palindromoy un 0 si no.
 */
int palind(char* inicio, char* fin);    

/*@Brief    Funcion recursiva que analiza si el string se trata de un número capicua.
  @param    Puntero al inicio de la número que se quiera analizar.
  @param    Puntero al final de la número que se queire analizar.
  @return   Despues de la recursividad , devuelve un 1 si fue capicua y un 0 si no.
 */ 
int capicua(char* inicio, char* fin);


#endif //_LOGIC_H_
