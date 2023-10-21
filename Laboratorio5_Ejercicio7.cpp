#include <iostream>
using namespace std;

void Comparar(int A, int B)
{
    if(A > B)
    {
        cout << "El primer numero ingresado " << A << ", es mayor" << endl;
    }
    else if (A < B)
    {
        cout << "El segundo numero ingresado " << B << ", es mayor" << endl;
    }
    else
    {
        cout << "Ambos numeros ingresados " << A << " y " << B << " son iguales" << endl;
    }
    

}

int main()
{
    int A = -1;
    int B = -1;

    do
    {
        cout << "Por favor ingrese un numero mayor a cero" << endl;
        cin >> A;
        cout << "Por favor ingrese otro numero mayor a cero" << endl;
        cin >>B;
    } while (A <= 0 && B <= 0);
    
    Comparar(A, B);

    return 0;
}