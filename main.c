#include <stdio.h>

int main()
{
    char nombre[50];
    printf("Hola bro\n");
    printf("Ingresa tu nombre: ");
    scanf("%s",&nombre);

    size_t i;
    for (i = 0; i < 10; i++)
    {
        printf("Nombre %i: %s \n",i,nombre);
    }
    
    return 0;
}