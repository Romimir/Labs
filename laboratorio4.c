#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Nombre[50];
    int Empleados[5]; // Empleados del 2018-2022
} Company;

void add_employee_data(Company *company, int year, int employees)
{
    if (year >= 2018 && year <= 2022)
    {
        company->Empleados[year - 2018] = employees;
        printf("Datos de los empleados del año %d añadidos.\n", year);
    }
    else
{
        printf("Por favor, ingrese un año entre 2018 y 2022.\n");
    }
}

void delete_employee_data(Company *company, int year)
{
    if (year >= 2018 && year <= 2022)
    {
        company->Empleados[year - 2018] = 0;
        printf("Datos de los empleados del año %d eliminados.\n", year);
    }
    else
    {
        printf("Por favor, ingrese un año entre 2018 y 2022.\n");
    }
}

int find_total_employees(Company *company, int year)
{
    if (year >= 2018 && year <= 2022)
    {
        return company->Empleados[year - 2018];
    }
    else
    {
        printf("Por favor, ingrese un año entre 2018 y 2022.\n");
        return -1; // Valor que indica error
    }
}

float calculate_average_employees(Company *company)
{
    int total_empleados = 0;
    int numero_del_año = 5;

    for (int i = 0; i < numero_del_año; i++)
    {
        total_empleados += company->Empleados[i];
    }

    return (float)total_empleados / numero_del_año;
}

float general_average_employees(Company *companies, int year, int companyCount)
{
    int total_empleados = 0;

    for (int i = 0; i < companyCount; i++)
    {
        total_empleados += companies[i].Empleados[year - 2018];
    }

    return (float)total_empleados / companyCount;
}

Company* create_company(char name[], int emp[])
{
    printf("Creando nueva compañía con nombre: %s\n", name);

    Company *newCompany = (Company*)malloc(sizeof(Company));
    if (newCompany == NULL) {
        perror("ERROR al asignar memoria para la nueva compañía\n");
        return NULL;
    }

    strcpy(newCompany->Nombre, name);
    for (int i = 0; i < 5; i++)
    {
        newCompany->Empleados[i] = emp[i];
    }
    
    printf("Compañía creada exitosamente.\n");
    return newCompany;
}


int select_company(Company* companies[], int companyCount)
{
    int selection;
    printf("Seleccione una compañía:\n");
    for (int i = 0; i < companyCount; i++)
    {
        printf("[%d] %s\n", i + 1, companies[i]->Nombre);
    }
    printf("Selección: ");
    scanf("%d", &selection);
    
    return selection;
}

int main()
{
    FILE *file = fopen("Company.txt", "r");

    if (file == NULL)
    {
        perror("ERROR no se pudo abrir el archivo\n'");
        return 1;
    }

   Company *companies[100];
    int companyCount = 0;

    char lineas[100];
    int i;

    while (fgets(lineas, 100, file) != NULL)
    {
        char *token;
        token = strtok(lineas, ",");

        char newName[50];
        strcpy(newName, token);

        int newEmployees[5];
        for (i = 0; i < 5; i++)
        {
            newEmployees[i] = atoi(strtok(NULL, ","));
        }

        companies[companyCount] = create_company(newName, newEmployees);  // Necesitas implementar esta función
        companyCount++;
    }

    fclose(file);

    
    Company company1;
    strcpy(company1.Nombre, "NayaFacil INC");

    // Inicializa el arreglo de empleados en 0
    for (int i = 0; i < 5; i++)
    {
        company1.Empleados[i] = 0;
    }

    // Agregar datos de empleados para algunos años
    add_employee_data(&company1, 2018, 50);
    add_employee_data(&company1, 2019, 50);
    add_employee_data(&company1, 2020, 50);
    add_employee_data(&company1, 2021, 50);
    add_employee_data(&company1, 2022, 50);

    // Eliminar datos de empleados para un año
    delete_employee_data(&company1, 2020);

    // Mostrar la cantidad de empleados después de eliminar
    printf("Los empleados en 2020 después de eliminar: %d\n", find_total_employees(&company1, 2020));


    // Encontrar la cantidad de empleados para un año
    int empleados_2020 = find_total_employees(&company1, 2020);
    if (empleados_2020 != -1)
    {
        printf("La cantidad de empleados en 2020 fue: %d\n", empleados_2020);
    }

    // Calcular y mostrar el promedio de empleados
    float avg_employees = calculate_average_employees(&company1);
    printf("El promedio de empleados es: %.2f\n", avg_employees);

    // Calcular y mostrar el promedio de empleados para el año 2021
    int empleados_2021 = find_total_employees(&company1, 2021);
    float avg_employees_2021 = general_average_employees(&company1, 2021, empleados_2021);
    printf("El promedio de empleados en 2021 es: %.2f\n", avg_employees_2021);


    return 0;
}