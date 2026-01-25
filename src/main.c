#include <stdio.h>

// Función:
int is_even(int numb) 
{
    

// si es par devuelve 1 si es impar devuelve 0: 
        return numb % 2 == 0;
}


// el cerebro de la funcion:
    
int respuesta_numero(int numb)
{

if    (numb == 0)
{
      printf("El numero es par\n");
}
else   
{
        if (numb % 2)
        {
                printf("El numero es impar\n");
        }
        else
        {
                printf("El numero es par\n");
        }

}
}

// llamamos a la funcion para que nos de el resultado:

int main(int is_even){

        int numb;

        printf("Ingresa un numero:\n");
        scanf("%i", &numb);

        respuesta_numero(numb);


    return 0;
}