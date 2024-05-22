# TareasProgramacion
Tareas desarrolladas en teoria de la programación 
Funciones scanf y printf
¿Que funcion ocupa printf?

La función printf se utiliza para imprimir datos en la salida estándar (generalmente la pantalla). La sintaxis básica es:int printf(const char *format, ...);    
format: Una cadena de control que especifica cómo se deben formatear los datos.
Los datos que se imprimirán, que corresponden a los especificadores de formato en la cadena de control.
Aqui un ejemplo:
int a = 10;
printf("El valor de a es %d\n", a);
 Como se ve en el ejemplo,%d es un especificador de formato que indica que se imprimirá un entero.
 ¿Que funcion ocupa scanf?
 
La función scanf se utiliza para leer datos desde la entrada estándar (generalmente el teclado). La sintaxis básica es:
c
int scanf(const char *format, ...);
format: Una cadena de control que especifica cómo se deben leer los datos.
Los punteros a las variables donde se almacenarán los datos leídos.
Aqui un ejemplo:
c
int a;
scanf("%d", &a);
En este ejemplo, %d es un especificador de formato que indica que se leerá un entero, y &a es la dirección de la variable a donde se almacenará el valor leído.
Tipos de Datos en C

C es un lenguaje de tipado estático y soporta varios tipos de datos primitivos, incluyendo enteros, flotantes, caracteres, y más. A continuación se describen los más comunes:
Entero (int)
    Descripción: Representa números enteros.
    Declaración:
c
int edad;
    Rango: Depende de la implementación, pero generalmente es de -32,768 a 32,767 para un int de 16 bits.
Flotante (float y double)
    Descripción: Representa números de punto flotante (números con decimales).
    Declaración:
c
float altura;
double distancia;
    Precisión: float generalmente tiene precisión simple (32 bits), y double tiene precisión doble (64 bits).
Carácter (char)
    Descripción: Representa un único carácter.
    Declaración:
c
char inicial;
    Rango: Generalmente de -128 a 127 para un char con signo, y de 0 a 255 para un char sin signo.
Variables Booleanas (_Bool)
    Descripción: Representa valores booleanos (verdadero o falso).
    Declaración:
c
_Bool esValido;
    Valores: 0 (falso) y 1 (verdadero).
Tipo void
    Descripción: Indica la ausencia de tipo. No se usa para declarar variables, pero es útil para especificar funciones que no retornan valor.
Declaración de Variables
En C, una variable debe ser declarada antes de ser utilizada. La declaración especifica el tipo de datos de la variable y opcionalmente puede asignar un valor inicial.
Ejemplos de declaración:
c
int contador;           // Declaración de una variable entera
float pi = 3.14;        // Declaración y asignación de una variable flotante
char letra = 'A';       // Declaración y asignación de una variable de carácter
_Bool esActivo = 1;     // Declaración y asignación de una variable booleana

Las variables pueden ser inicializadas en el momento de su declaración o posteriormente en el código.
