/**
 * @file  Tarea1
 * @author David Alejandro Ruiz Sanchez
 * @brief Crear un programa que permita al usuario ingresar al menos tres variables y 
 * presentarlarlas por mensaje descriptivo... 
 * @version 0.1
 * @date 2024-05-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
int main(int argc, char const *argv[]){
    //Declarar variables de al menos 3 tipos de datos diferentes
    int entero;//Variable entero
    float numerodecimal;//Variable decimal
    char caracter;//Variable caracter
    //Usar printf para mostrar un mensaje de bienvenida y pedir al usuario que ingrese valores para las variables determiandas
    printf("BIENVENIDO\n");
    printf("Por favor ingrese un numero entero ejemplo (1): ");
    //Usar scanf para leer los valores ingresados por el usuario
    scanf("%d", &entero);
    printf("Por favor ingrese un numero decimal ejemplo (1.5): ");
    //Usar scanf para leer los valores ingresados por el usuario
    scanf("%f", &numerodecimal);
    printf("Por favor ingrese un caracter ejemplo (letra): ");
    //Usar scanf para leer los valores ingresados por el usuario
    scanf(" %c", &caracter);
    //Usar printf para mostrar los valores ingresados por el usuario y un mensaje descriptivo
    printf("El numero entero ingresado es: %d\n", entero);
    printf("El numero decimal ingresado es: %f\n", numerodecimal);
    printf("El caracter ingresado es: %c\n", caracter);
    printf("Gracias por usar el programa!!\n");
    return 0;
}