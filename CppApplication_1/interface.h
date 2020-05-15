/*******************************************************************************
  @file     interface.h
  @brief    Encabezado de las funciones que tienen que ver con la interfaz
	    con el usuario.
  @author   Grupo-4.
 ******************************************************************************/

#define LARGO 100

#ifndef _INTERFACE_H_
#define _INTERFACE_H_

/*Imprime las pautas basicas del programa para facilitar su uso al ususario.*/

void rules (void);

/*Recibe un string por teclado y lo guarda en el string que recibe como parametro.
  Devuelve un puntero al ultimo elemento del string (justo antes de donde deberia ir un terminador).*/

char* teclado (char str[]);      

/*Recibe dos caracteres como parametro.
  Mantiene activo el teclado hasta que el usuario elija una de las dos opciones posibles.
  Devuelve la opcion elegida.*/

char choose(char opt1, char opt2);	


#endif //_INTERFACE_H_