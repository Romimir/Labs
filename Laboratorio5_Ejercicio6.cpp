#include <iostream>
using namespace std;

int main ()
{   
    srand(time(0));
    int NumeroMinimo =1, NumeroMaximo = 100;
    int NumeroAleatorio = NumeroMinimo + rand()%(NumeroMaximo + 1 - NumeroMinimo);
    int Adivinar;

    do
    {
        cout << "Ingrese un numero entre 1 y 100" << endl;
        cin >> Adivinar;
        if (Adivinar<NumeroAleatorio)
        {
            cout << Adivinar << " es menor al numero que intentas adivinar" << endl;
        }
        else if (Adivinar > NumeroAleatorio)
        {
            cout << Adivinar <<" es mayor al numero que intentas adivinar" << endl;
        }
        else
        {
            cout << "Felicidades, " << Adivinar << " es el numero que buscabas!" << endl;
        }

    } while (Adivinar != NumeroAleatorio);
    

    return 0;
}