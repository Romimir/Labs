#include <iostream>
#include <queue>
#include <string>
using namespace std;

void Operaciones(queue<double>Numeros, double *Suma, double *Multiplicacion, double * Promedio)
{
    int TamañoLista;
    TamañoLista = Numeros.size();
    //mientreas aun allan numeros en la lista
    while (!Numeros.empty())
    {
        double NumeroActual = Numeros.front();
        Numeros.pop();

        *Suma += NumeroActual;
        *Multiplicacion *= NumeroActual;
    }
    *Promedio = *Suma/TamañoLista;
    cout << "La suma de los numeros ingresados es: " << *Suma << endl;
    cout << "La multiplicacion de los numeros ingresados es: " << *Multiplicacion << endl;
    cout << "El promedio de los numeros ingresados es: " << *Promedio << endl;
}


int Factorial(int NumeroFactorial)
{
    if(NumeroFactorial==0)
    {
        return 1;
    }
    else
    {
        return NumeroFactorial*Factorial(NumeroFactorial-1);
    }
}


int CalculoFibonacci(int NumeroFibonacci)
{
    if (NumeroFibonacci == 0)
    {
        return 0;
    }
    else if (NumeroFibonacci == 1)
    {
        return 1;
    }
    else
    {
        return CalculoFibonacci(NumeroFibonacci-1) + CalculoFibonacci(NumeroFibonacci-2);
    }
}

bool EsPalindrome( string Palabra)
{   
    if (Palabra.length() <=1)
    {
        return true;
    }
    else if (Palabra[0] == Palabra[Palabra.length() - 1])
    {
        return EsPalindrome(Palabra.substr(1, Palabra.length()-2));
    }
    return false;
}


int main()
{   
    //variable menu
    int Eleccion;
    //Variables para ejercicio 1
    //crear lista
    queue<double>Numeros;
    double NumeroIngresado;
    double Suma;
    double Multiplicacion;
    double Promedio;
    int TamañoLista;

    //Variable para ejercicio 2
    int NumeroFactorial;

    //Variable para ejercicio 3
    int NumeroFibonacci;

    //Variable para ejercicio 4
    string Palabra;

    do 
    {
        if(Eleccion <=5 && Eleccion > 0)
        {
            cout << "A que ejercicio quiere ingresar?" << endl;
            cout << "1) Operaciones de suma, multiplicacion y promedio" << endl;
            cout << "2) Calculo factorial" << endl;
            cout << "3) Calculo de la secuencia de fibonacci" << endl;
            cout << "4) Palabra palindrome o no" << endl;
            cout << "5) Para salir del programa" << endl;
            cin >> Eleccion;

            switch (Eleccion)
            {
                case 1:
                    do
                    {
                        cout << "Cuantos numeros desea ingresar?" << endl;
                        cin >> TamañoLista;

                        if (TamañoLista > 0)
                        {
                            while (Numeros.size() < TamañoLista)
                            {
                                cout << "Ingrese un numero" << endl;
                                cin >> NumeroIngresado;
                                Numeros.push(NumeroIngresado);
                            }
        
                            Operaciones(Numeros, &Suma, &Multiplicacion, &Promedio);
                        }
                        else
                        {
                            cout << "Ingrese un tamaño de lista mayor a cero" << endl;
                        }
                    }
                    while(TamañoLista==0)

                    break;
    
                case 2:
                    do
                    {
                        cout << "Ingrese un numero entero positivo" << endl;
                        cin >> NumeroFactorial;
                        cout << "La factorial de " << NumeroFactorial << "es " << Factorial(NumeroFactorial) << endl;

                        break;
                    }
                    while(NumeroFactorial<0)

                    break;
                case 3:
                    do
                    {
                        cout << "Ingrese un numero para hacer el calculo de la secuencia de fibonacci" << endl;
                        cin >> NumeroFibonacci;
                        cout << "El calculo fibonacci del numero ingresado es: " << CalculoFibonacci(NumeroFibonacci) << endl;
                    }
                    while(NumeroFibonacci<0)

                case 4:
                        cout << "Ingrese una palabra para saber si es palindrome o no" << endl;
                        getline(cin, Palabra);
                        if (EsPalindrome(Palabra))
                        {
                            cout << Palabra << " es palindrome" << endl;
                        }
                        else
                        {
                            cout << Palabra << " no es palindrome" << endl;
                        }
                        break;
            }
        }
        else
        {
            cout << "Porfavor ingrese una opcion valida" << endl;
        }
    }
    while (Eleccion != 5)

    



    return 0;
}