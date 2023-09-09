#include <stdio.h>
#include <string.h>

struct Estudiante //Creacion de estructura de estudiantes
{
    char Nombre[60];
    int NumeroLista;
    int Promedio;
};

struct Libros //Creacion de estructura de libros
{
    char Titulo[60];
    char Autor[60];
    int ISBN;
    int Precio;

};

struct Producto //Creacion de estructura de productos
{
    char Nombre[60];
    int ID;
    int Precio;
    int Cantidad;
};

int main()
{
    //Nombre, numero de lista y promedio estudiantes
    struct Estudiante estudiante[5];

    strcpy(estudiante[0].Nombre, "Mario Hugo");
    estudiante[0].NumeroLista = 01;
    estudiante[0].Promedio = 6;

    strcpy(estudiante[1].Nombre, "Crispin");
    estudiante[1].NumeroLista = 02;
    estudiante[1].Promedio = 7;

    strcpy(estudiante[2].Nombre, "Jose Miguel");
    estudiante[2].NumeroLista = 03;
    estudiante[2].Promedio = 5;

    strcpy(estudiante[3].Nombre, "Maria Luisa");
    estudiante[3].NumeroLista = 04;
    estudiante[3].Promedio = 4;

    strcpy(estudiante[4].Nombre, "Roberto");
    estudiante[4].NumeroLista = 05;
    estudiante[4].Promedio = 5;

    //Variables a usar para saber que estudiante tiene mejor promedio
    int i;
    int Orden_Promedios[5];
    int Promedio_Mas_Alto = 0;
    int indice = 0;

    //Promedio mas alto a mas bajo estudiantes
    printf("************************************************************************\n");    

    for (i = 0; i < 5; i++)
    {
        Orden_Promedios[i]=-1; //el orden en que van los promedios
    }
    for (i = 0; i < 5; i++)
    {
        if (Promedio_Mas_Alto < estudiante[i].Promedio) //va leyendo los promedios y guarda el mas alto
        {
            Promedio_Mas_Alto = estudiante[i].Promedio;
            indice = i;
        }
                printf("El promedio del estudiante %s es %d\n", estudiante[i].Nombre, estudiante[i].Promedio); //imprime los promedios de cada estudiante

    }

    printf("El promedio mas alto es del estudiante %s con un promedio de %d\n", estudiante[indice].Nombre, estudiante[indice].Promedio);

    printf("************************************************************************\n");    

    
    //Libros
    struct Libros libro[5];

    strcpy(libro[0].Titulo, "Wadanohara and the great blue sea");
    strcpy(libro[0].Autor, "Funamusea");
    libro[0].ISBN = 94639663;
    libro[0].Precio = 20000;

    strcpy(libro[1].Titulo, "Como ser una estrella");
    strcpy(libro[1].Autor, "Michilin");
    libro[1].ISBN = 9284651;
    libro[1].Precio = 14000;

    strcpy(libro[2].Titulo, "Michi El Gato");
    strcpy(libro[2].Autor, "Michin");
    libro[2].ISBN = 90620562;
    libro[2].Precio = 12000;

    strcpy(libro[3].Titulo, "La vida de un perro abandonado");
    strcpy(libro[3].Autor, "Dybala");
    libro[3].ISBN = 97512942;
    libro[3].Precio = 8000;

    strcpy(libro[4].Titulo, "Como sobrevivir a 4 desparacitaciones en 7 meses");
    strcpy(libro[4].Autor, "Lord Valentino Aitel Pastin");
    libro[4].ISBN = 95194245;
    libro[4].Precio = 9000;

     //Variables a usar para saber que libro es mas caro y ordenar
    int j;
    int Orden_Libros[5];
    int Libro_Mas_Caro = 0;
    int Orden_Libros_Mas_Caros = 0;
    int orden = 0;
    
    //Precio mas alto a mas bajo libros

     for (j = 0; j < 5; j++)
    {
        Orden_Libros[j]=-1; //orden en el que van los libros
    }
    
    for (j = 0; j < 5; j++)
    {
        if (Libro_Mas_Caro < libro[j].Precio) //busca el valor de cada libro para compararlos y guardar el de mayor valor
        {
            Libro_Mas_Caro = libro[j].Precio;
            orden = j;
        }
        printf("%s del autor %s tiene un valor de %d\n", libro[j].Titulo, libro[j].Autor, libro[j].Precio);

    }
    
    printf("El libro de valor mas elevado es %s\n del autor %s con un valor de %d\n", libro[orden].Titulo, libro[orden].Autor, libro[orden].Precio);

    printf("************************************************************************\n");    

    
    struct Producto productos[10];

    //nombre, id, precio y cantidad de productos

    strcpy(productos[0].Nombre, "Maruchan Picante");
    productos[0].ID = 1;
    productos[0].Precio = 2000;
    productos[0].Cantidad = 10;
    
    strcpy(productos[1].Nombre, "Papas Ketchup");
    productos[1].ID = 2;
    productos[1].Precio = 2200;
    productos[1].Cantidad = 6;

    strcpy(productos[2].Nombre, "Tomate");
    productos[2].ID = 3;
    productos[2].Precio = 300;
    productos[2].Cantidad = 9;

    strcpy(productos[3].Nombre, "Bilz");
    productos[3].ID = 4;
    productos[3].Precio = 1500;
    productos[3].Cantidad = 3;

    strcpy(productos[4].Nombre, "Pap");
    productos[4].ID = 5;
    productos[4].Precio = 1500;
    productos[4].Cantidad = 3;

    strcpy(productos[5].Nombre, "Chocolate");
    productos[5].ID = 6;
    productos[5].Precio = 1000;
    productos[5].Cantidad = 4;

    strcpy(productos[6].Nombre, "Lechuga");
    productos[6].ID = 00007;
    productos[6].Precio = 500;
    productos[6].Cantidad = 10;

    strcpy(productos[7].Nombre, "Pan");
    productos[7].ID = 8;
    productos[7].Precio = 150;
    productos[7].Cantidad = 30;

    strcpy(productos[8].Nombre, "Helado de litro frutilla");
    productos[8].ID = 9;
    productos[8].Precio = 1300;
    productos[8].Cantidad = 2;

    strcpy(productos[9].Nombre, "Shampoo");
    productos[9].ID = 10;
    productos[9].Precio = 1700;
    productos[9].Cantidad = 9;

    int Opcion=1;
    int k;
    int Orden_Productos;
    int Producto_Mas_Caro = 0;
    int ID_Producto;
    int Carrito = 0;

    printf("Hola! Tenemos los siguientes productos\n");
    for ( k = 0; k < 10; k++) //imprime los productos con su nombre, id, stock, precio
    {
        printf("%s a %d con un stock de %d y su id es %d\n", productos[k].Nombre, productos[k].Precio, productos[k].Cantidad, productos[k].ID);
    }
        
    for (k = 0; k < 10; k++)
    {
        if (Producto_Mas_Caro < productos[k].Precio) //busca el valor de producto para compararlos y guardar el de mayor valor
        {
            Producto_Mas_Caro = productos[k].Precio;
            Orden_Productos = k;
        }
    }
    printf("El producto mas caro es %s con el valor de %d\n", productos[Orden_Productos].Nombre, productos[Orden_Productos].Precio);


    while (Opcion==1)
    {
         printf("Para agregar productos a su carrito, ingrese la ID del producto: ");
        int ID_Producto;
        scanf("%d", &ID_Producto);

        if (ID_Producto < 1 || ID_Producto > 10) //valida que el producto ingresado sea valido
        {
            printf("ID de producto no válida. Intente nuevamente.\n");
            continue;
        }

        printf("Ingrese la cantidad que desea agregar: ");
        int Cantidad_Agregar;
        scanf("%d", &Cantidad_Agregar);

        if (Cantidad_Agregar <= 0)
        {
            printf("La cantidad debe ser mayor que 0. Intente nuevamente.\n");
            continue;
        }

        // Verificar si hay suficiente stock del producto
        if (productos[ID_Producto - 1].Cantidad >= Cantidad_Agregar)
        {
            // Actualizar el carrito y el stock del producto
            Carrito += productos[ID_Producto - 1].Precio * Cantidad_Agregar;
            productos[ID_Producto - 1].Cantidad -= Cantidad_Agregar;
            printf("Producto agregado al carrito. Su carrito actual es de %d\n", Carrito);
        }
        else
        {
            printf("No hay suficiente stock de este producto.\n");
        }
        printf("¿Desea agregar más productos? (1 para sí, 2 para finalizar): ");
        scanf("%d", &Opcion);
    }

       if (Carrito == 0) //mensaje de despedida por si compro o no compro nada
    {
        printf("Vuelva pronto");
    }
    else
    {
        printf("Su compra total fue de %d, gracias por su compra ¡vuelva pronto!\n", Carrito);
    }


    printf("************************************************************************\n");    


    return 0;
}