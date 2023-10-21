#include <iostream>
using namespace std;

enum Categoria { Juvenil, Senior, Veterano};

struct Ciclista
{
    string Nombre;
    int Edad;
    string Club;
    Categoria Categoria;
};

//funcion para asignar la categoria
Ciclista CrearCiclista (string Nombre, int Edad, string Club)
{
    Ciclista ciclista;
    ciclista.Nombre = Nombre;
    ciclista.Edad = Edad;
    ciclista.Club = Club;
    if( Edad <= 18)
    {
        ciclista.Categoria = Categoria::Senior;
    }
    else if (Edad <= 40)
    {
        ciclista.Categoria = Categoria::Juvenil;
    }
    else
    {
        ciclista.Categoria = Categoria::Veterano;
    }
    
}

int main()
{
    string Nombre;
    int Edad;
    string Club;
    cout << "Ingrese el nombre del ciclista:" << endl;
    cin >> Nombre;
    cout << "Ingrese la edad del ciclista: " << endl;
    cin >> Edad;
    cout << "Ingrese el club dal que pertenece el ciclista" << endl;

//instancia donde se llama la estructura
    Ciclista ciclista = CrearCiclista(Nombre, Edad, Club);

    cout << "El ciclista " << ciclista.Nombre << " de " << ciclista.Edad << " años de edad pertenece al club " << ciclista.Club << " y participa en la categoria " << (ciclista.Categoria == Categoria :: Juvenil ? "Juvenil" :
                               ciclista.Categoria == Categoria::Senior ? "Senior" : // condicion ? valor si es verdadero
                               ciclista.Categoria == Categoria::Veterano ? "Veterano" :
                               "Desconocido") << endl;


    return 0;
}