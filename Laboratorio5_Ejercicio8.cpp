#include <iostream>
using namespace std;
/*Crear un programa que reciba desde teclado un nombre de usuario y una
contraseña. Estos deben ser pasados como parámetros a una función llamada Login,
que retorna verdadero si el nombre de usuario es “user1” y la contraseña es “1234”. Si
al menos uno de los dos no corresponde, entonces retorna falso.*/

bool login(string Usuario, string Contraseña)
{
    if (Usuario == "user1" && Contraseña == "1234")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    string Usuario;
    string Contraseña;

    cout << "Ingrese su usuario" << endl;
    cin >> Usuario;
    cout << "Ingrese su contraseña" << endl;
    cin >> Contraseña;
    if (login(Usuario, Contraseña))
    {
        cout << "Inicio de sesion exitoso" << endl;
    }
    else
    {
        cout << "Inicio de sesion fallido. Usuario o contraseña no validos" << endl;
    }


    return 0;
}