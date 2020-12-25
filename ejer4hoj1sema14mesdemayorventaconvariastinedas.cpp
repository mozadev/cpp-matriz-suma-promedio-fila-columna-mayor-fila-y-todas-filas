#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;
using namespace System;


int ingresapos()
{
	int n; cout << "ingrese positivo"; cin >> n;
	while (n <= 0 || n > 10)
	{
		int n; cout << "ingrese positivo"; cin >> n;
	}return n;

}

void ingresadatos(int **ventas)
{
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 5; j++)
		{
			cout << "ingrese venta [" << i + 1 << "][" << j + 1 << "]:";
			cin >> ventas[i][j];
		}
}


void salidadatos(int **ventas)
{
	cout << "age 1" << "\t" << "age 2" << "\t" << "age 3" << "\t" << "age 4" << "\t" << "age 5" << "\t" << endl;

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << ventas[i][j] << "\t";

		cout << endl;
	}
}

void ventasxagencia(int **ventas)
{
	int suma; int i;
	cout << "ventas x agencia" << endl;
	for (int j = 0; j < 5; j++)
	{
		suma = 0;
		for (int i = 0; i < 12; i++)
		{
			suma = suma + ventas[i][j];

		}
		cout << "ventas de la agencia: " << j + 1 << " es: " << suma << endl;
	
	}
}

void ventasañosagencia3(int **ventas)
{
	int suma; int i;
	for (int j = 0; j < 5; j++)
	{
		suma = 0;
		for (int i = 0; i < 12; i++)
		{
			suma = suma + ventas[i][2];
		}
	}cout << endl;
	cout << "ventas de la agencia:3 " << " es: " << suma << endl << endl;
}


void ventaspromdicien(int **ventas)
{
	float suma; int i; float prom;
	for (int i = 0; i < 12; i++)
	{
		suma = 0;
		for (int j = 0; j < 5; j++)
		{
			suma = suma + ventas[11][j];
			prom = suma / 5;
		}
	}cout << "ventas promedio de diciembre de todas las agencias:  " << prom << endl << endl;
}

void queagenciamayorventamayo(int **ventas)
{
	int mayor; int agencia;
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 5; j++)
			if (mayor < ventas[4][j])
			{
				mayor = ventas[4][j];
				agencia = j + 1;
			}
	cout << "la agencia de mayor venta en mayo es: " << agencia << endl << endl;
}


void mesmenoresventaaño(int **ventas)
{
	int menor = 10000; int mes; float suma; int i, j; int contador1 = 0; int contador2 = 0; int p;
	for (int i = 0; i < 12; i++)
	{
		suma = 0; 
		for (int j = 0; j < 5; j++)
			suma = suma + ventas[i][j];
	//	cout << "la suma ventas todas agencias del mes " << i + 1 << "es:" << suma << endl;
		
		if (menor > suma)
		{
			menor = suma;
			mes = i + 1;
		}
	}
	cout << "el mes de menore venta del año es: " << mes << endl;
}


int main()
{
	int **ventas;
	ventas = new int *[12];
	for (int i = 0; i < 12; i++)
		ventas[i] = new int[5];
	ingresadatos(ventas);
	salidadatos(ventas);
	ventasxagencia(ventas);
	ventasañosagencia3(ventas);
	ventaspromdicien(ventas);
	queagenciamayorventamayo(ventas);
	mesmenoresventaaño(ventas);
	_getch();
}