/*Crear un programa que cuente con las siguientes estructuras:
1. Registro, que contiene una nota 1, 2 y 3, además de un promedio.
2. Alumno, que tiene nombre, edad, número de matrícula y un Registro.
El programa debe recibir por teclado todos los datos, y luego imprimirlos, incluyendo
las notas y el promedio. Debe contar con 3 funciones: ingreso de datos, cálculo del
promedio e impresión de datos. Las 3 deben recibir como parámetros a 2 alumnos
distintos.
En el main solo deben crearse 2 instancias de Alumno y realizar el llamado de las 3
funciones.
*/

#include <iostream>
using namespace std;

struct Registro
{
    int Nota1;
    int Nota2;
    int Nota3;
    float Promedio;
};

struct Alumno
{
    string Nombre;
    int Edad;
    int NumeroDeMatricula;
    Registro registro;
};

void Ingreso_Datos(Alumno &Alumno1, Alumno &Alumno2) 
{
  cout << "Ingrese el nombre del primer alumno: " << endl;
  getline(cin, Alumno1.Nombre);
  cin >> Alumno1.Edad;
  cin >> Alumno1.NumeroDeMatricula;

  cout << "Ingrese el nombre del alumno 2: " << endl;
  getline(cin, Alumno2.Nombre);
  cin >> Alumno2.Edad;
  cin >> Alumno2.NumeroDeMatricula;

  cout << "Ingrese la primera nota del primer alumno: " << endl;
  cin >> Alumno1.registro.Nota1;
  cout << "Ingrese la segunnda nota del primer alumno: " << endl;
  cin >> Alumno1.registro.Nota2;
  cout << "Ingrese la tercera nota del primer alumno: " << endl;
  cin >> Alumno1.registro.Nota3;

  cout << "Ingrese la primera nota del segundo alumno: " << endl;
  cin >> Alumno2.registro.Nota1;
  cout << "Ingrese la segunda nota del segundo alumno: " << endl;
  cin >> Alumno2.registro.Nota2;
  cout << "Ingrese la tercera nota del segundo alumno: " << endl;
  cin >> Alumno2.registro.Nota3;
}

void Promedios(Alumno &Alumno1, Alumno &Alumno2) 
{
  Alumno1.registro.Promedio = (float)(Alumno1.registro.Nota1 + Alumno1.registro.Nota2 + Alumno1.registro.Nota3) / 3;

  Alumno2.registro.Promedio = (float)(Alumno2.registro.Nota1 + Alumno2.registro.Nota2 + Alumno2.registro.Nota3) / 3;
}

void Impresion(Alumno &Alumno1, Alumno &Alumno2)
{
    cout << "Primer alumno llamado " << Alumno1.Nombre << " de edad " << Alumno1.Edad << " matricula " << Alumno1.NumeroDeMatricula << endl;
    cout << "Posee las siguientes notas: " << Alumno1.registro.Nota1 << ", " << Alumno1.registro.Nota2 << ", " << Alumno1.registro.Nota3 << " y un promedio de: " Alumno1.registro.Promedio << endl;

    cout << "Primer alumno llamado " << Alumno1.Nombre << " de edad " << Alumno2.Edad << " matricula " << Alumno2.NumeroDeMatricula << endl;
    cout << "Posee las siguientes notas: " << Alumno2.registro.Nota1 << ", " << Alumno2.registro.Nota2 << ", " << Alumno2.registro.Nota3 << " y un promedio de: " Alumno2.registro.Promedio << endl;        
}