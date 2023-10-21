#include <iostream>
using namespace std;

int main()
{
    string Nombre;
    int Numero1;
    int Numero2;
    int Suma;
    int Resta;
    float Division;
    int Multiplicacion;
    float Promedio;


    cout << "Como te llamas?" << endl;
    cin >> Nombre;
    cout << "Hola " << Nombre <<", por favor ingresa dos numeros" << endl;
    cin >> Numero1;
    cin >> Numero2;

    //Operaciones aritmeticas con los numeros ingresados
    Suma = Numero1 + Numero2;
    Resta = Numero1 - Numero2;
    Multiplicacion = Numero1 * Numero2;
    Division = Numero1 / Numero2;
    Promedio = (Suma + Resta + Multiplicacion + Division)/ 4;

    cout << "La suma de " << Numero1 << " y " << Numero2 << " es: "<< Suma << endl;
    cout << "La resta de " << Numero1 << " y " << Numero2 << " es: "<< Resta << endl;
    cout << "La multiplicacion de " << Numero1 << " y " << Numero2 << " es: "<< Multiplicacion << endl;
    cout << "La division de " << Numero1 << " y " << Numero2 << " es: " << Division << endl;
    cout << "El promedio de los valores anteriores es: "<< Promedio << endl;

    return 0;
}