#pragma once
#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int buscarPosicionMayor(float *v, int tam)
{
    int posMax = 0;
    for (int i = 1; i < tam; i++)
    {
        if (v[i] > v[posMax])
        {
            posMax = i;
        }
    }
    return posMax;
}

void cargarCadena(char *pal, int tam)
{
    int i;
    fflush(stdin);
    for (i = 0; i < tam; i++)
    {
        pal[i] = cin.get();
        if (pal[i] == '\n')
            break;
    }
    pal[i] = '\0';
    fflush(stdin);
}

void barajarNaipes(int *mazo, int tam)
{
    int n, pos;
    srand(time(NULL));

    for (n = 0; n < tam; n++) {                         //inicializar el mazo en 0
        mazo[n] = 0;
    }

    for ( n = 1; n <= tam; n++) {                       // recorre cantidad total de naipes
        do {
            pos = rand() % tam + 1;                     // elige posicion random para el vector mazo
        } while (mazo[pos] != 0);                       // mientras la posicion del vector tenga asignado un valor distinto a cero, que siga buscando posiciones
        mazo[pos] = n;                                  // asigna n de naipe en posicion
    }
}

void pausarPantalla()
{
    do {
        fflush(stdin);
        cout << '\n'
             << "Presionar Enter para continuar...";
    } while (cin.get() != '\n');
}

int menu()
{
    int opc;
    while (true)
    {
        system("clear");
        cout << "MENU PRINCIPAL" << endl;
        cout << "------------------------" << endl;
        cout << "1 - " << endl;
        cout << "2 - " << endl;
        cout << "3 - " << endl;
        cout << "4 - " << endl;
        cout << "5 - " << endl;
        cout << "6 - " << endl;
        cout << "0 - SALIR DEL PROGRAMA" << endl;
        cout << "------------------------" << endl;
        cout << "INGRESE UNA OPCION: ";
        cin >> opc;

        system("clear");

        switch (opc)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 0:
            return 0;
            break;
        }
    }
}

bool esBisiesto(int anio){                                                     //devuelve true si es anio bisciesto
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0){
      return true;
    }
    return false;
}

bool Fecha(int dia, int mes, int anio)                                          //validador de fechas
{
    if (dia <= 0 || mes <= 0 || anio <= 0 || mes > 12) {                        //valores ridiculos
        return false;
    } 
    else {
        int dias[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };      //dias del anio
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {           //anio bisciesto
            dias[1]++;                                                          //29 de febrero
        }
        if (dia > dias[mes - 1]) {
            return false;
        }
    }
    return true;
}