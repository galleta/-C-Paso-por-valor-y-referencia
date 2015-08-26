/**
 * \file paso_valor_referencia.cpp
 * \author Francis
 * \copyright Copyright 2015 Francisco Jesús Delgado Almirón. All rights reserved. Archivo protegido bajo licencia pública GPU.
 * 
 * \brief Ejemplo de paso por valor y por referencia mediante el intercambio de dos números
*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

/**
 * \brief Devuelve un número aleatorio correspondiente a un intervalo
 * \param minimo Mínimo del intervalo
 * \param maximo Máximo del intervalo
 * \return Aleatorio entre mínimo y máximo
*/
int aleatorio(int minimo, int maximo)
{
	return minimo+rand()%((maximo+1)-minimo);
}

/**
 * \brief Intercambia dos números
 * \param a Número 1, parámetro pasado por valor
 * \param b Número 2, parámetro pasado por valor
*/
void intercambiarValor(int a, int b)
{
	int aux = a;
	a = b;
	b = aux;
}

/**
 * \brief Intercambia dos números
 * \param a Número 1, parámetro pasado por referencia
 * \param b Número 2, parámetro pasado por referencia
*/
void intercambiarReferencia(int &a, int &b)
{
	int aux = a;
	a = b;
	b = aux;
}

int main()
{
	// Necesario para generar números aleatorios
	srand(time(NULL));
	// Me declaro dos números
	int numero1, numero2;
	
	// Los genero de forma aleatoria
	numero1 = aleatorio(0, 100);
	numero2 = aleatorio(0, 100);
	
	// Los intercambio con la función intercambiar que tiene los parámetros pasados por valor
	cout << "Funcion intercambiar con los parametros pasados por valor" << endl;
	cout << "Los numeros son: " << numero1 << " y " << numero2 << endl;
	intercambiarValor(numero1, numero2);
	cout << "Los numeros son: " << numero1 << " y " << numero2 << endl << endl;
	
	// Los intercambio con la función intercambiar que tiene los parámetros pasados por referencia
	cout << "Funcion intercambiar con los parametros pasados por referencia" << endl;
	cout << "Los numeros son: " << numero1 << " y " << numero2 << endl;
	intercambiarReferencia(numero1, numero2);
	cout << "Los numeros son: " << numero1 << " y " << numero2 << endl;
}
