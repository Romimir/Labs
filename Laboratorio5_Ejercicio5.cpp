#include <iostream>
using namespace std;

int main ()
{
    int Edad;

    cout << "Por favor ingrese su edad" << endl;
    cin >> Edad;

    if (Edad >= 18 && Edad <= 25)
    {
        cout << "La edad ingresada esta en el rango de 18 a 25 años" << endl;    
    }
    else
    cout << "La edad ingresada no esta en el rango de 18 a 25 años" << endl;

    return 0;
}