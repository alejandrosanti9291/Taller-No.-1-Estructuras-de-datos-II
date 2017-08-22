/*
*Nombre: Trabajo 1 ED ll
*Autor: Richard Ramirez Patiño, Sebastian Urbano, Alejandro Santibañez.
*Fecha: 10/08/2017
*Resumen: Bloque de ejercicios: while, for, switch, matrices, arreglos y estructuras.
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Variablaes Globales
#define l 4
#define lon 3

//Estructuras
struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct estudiante{
	char nombre[30];
	float nota1,nota2,nota3;
	float promedio;
	char sexo;
	int edad;
	struct Promedio prom;
}alum, alumnos[100];

struct Competidor{
	char nombre[20];
	int edad;
	char sexo;
	char club[20];
}competidorCompetencia;

//Prototipos Funciones menus
void Menu();
void MenuWhile();
void MenuFor();
void MenuSwitch();
void MenuArray();
void MenuMatricez();
void MenuEstructuras();
void MenuPunteros();

//Prototipos Funciones While
int suma1_100(int);
int suma_impares(int);
int suma_pares(int);

//Prototipo Funcion For
int multiplicacion(int );
int factorial(int );
int Fibonacci(int );

//Prototipo Funcion Array
void declararArreglo();
void crearArreglo();
void arreglo4x4();

//Prototipo Funcion Registros
void N_alumnos();
void datosCompetidor();
void promedio();
void MejoryMenor();

//Prototipo Funciones Switch
void mesdelSistema();
void codigoVocal();
void numeros();

//Prototipo Funciones Matrices
void matriz3x3();
void matrizAutomatica();
void matrizPrimos();

//Funcion Principal
int main(){

	Menu();
}
//Funcion Menu
void Menu(){
	int opcion;

	do{
		printf("|-----------------------------------|\n");
		printf("|           MENU PRINCIPAL          |\n");
		printf("|-----------------------------------|\n");
		printf("|                  |                |\n");
		printf("|  1. Ciclo While  |  5. Matrices   |\n");
		printf("|  2. Ciclo For    |  6. Estructuras|\n");
		printf("|  3. Switch       |  0. Salir      |\n");
		printf("|  4. Array        |                |\n");
		printf("|                  |                |\n");
		printf("|-----------------------------------|\n\n");
		printf(" Que deseas hacer: ");
		scanf("%d",&opcion);
		system("cls");

		switch(opcion){
		case 1: MenuWhile();
            break;
		case 2: MenuFor();
            break;
		case 3: MenuSwitch();
            break;
		case 4: MenuArray();
            break;
		case 5: MenuMatricez();
            break;
		case 6: MenuEstructuras();
            break;
		case 0: exit(0);
            break;
		default: printf("\t\tNumero Equivocado\n");
            break;
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}
//Funciones While
void MenuWhile(){
	int opcion;
	int i;

	do{
		printf("*************************************\n");
		printf("*                  MENU             *\n");
		printf("*************************************\n");
		printf("*                                   *\n");
		printf("*  1.Sumar Numeros del 1 al 100.    *\n");
		printf("*  2.Sumar Pares del  1 al 50.      *\n");
		printf("*  3.Sumar Impares del  1 al 50.    *\n");
		printf("*  0.Salir                          *\n");
		printf("*                                   *\n");
		printf("*************************************\n\n");
		printf(" Que deseas hacer: ");
		scanf(" %d",&opcion);
		system("cls");

		switch(opcion){
		case 1: suma1_100(i);
            break;
		case 2: suma_pares(i);
            break;
		case 3: suma_impares(i);
            break;
		case 0: Menu();
            break;
		default: printf("Numero Equivocado\n");
            break;
		}
		system("\t\tpause");
		system("cls");
	}while(opcion != 0);

}
//Funciones de sumas
int suma1_100(int i){
	i = 0;
	int max = 100;
	int suma = 0;

	while(i <= max){
		suma = suma+i;
		i+= 1;
	}
	printf("\t\t*** Suma del 1 al 100 ***\n\n");
	printf("\t\tTotal: %d\n\n", suma);
}

int suma_pares(int i){
	i = 0;
	int max = 50;
	int suma = 0;

	while(i <= 50){
		if(i%2 == 0){
            suma = suma + i;
		}i+= 1;
	}
	printf("\t\t*** Suma de los pares del 1-50 ***\n\n");
	printf("\t\tTotal: %d\n\n", suma);
}

int suma_impares(int i){
	i = 0;
	int max = 50;
	int suma = 0;

	while(i <= 50){
		if(i%2 != 0){
            suma = suma + i;
		}i+= 1;
	}
	printf("\t\t*** Suma de Impares del 1-50 ***\n\n");
    printf("\t\tTotal: %d\n\n", suma);
}
//Funciones For
void MenuFor(){
	int opcion;
	int x;

	do{
		printf("\t\t*******************************\n");
		printf("\t\t*              MENU           *\n");
		printf("\t\t*******************************\n");
		printf("\t\t*                             *\n");
		printf("\t\t*   1. Multiplicacion.        *\n");
		printf("\t\t*   2. Factorial.             *\n");
		printf("\t\t*   3. Fibonacci.             *\n");
		printf("\t\t*   0. Salir                  *\n");
		printf("\t\t*                             *\n");
		printf("\t\t*******************************\n\n");
		printf("\t\tQue deseas hacer: ");
		//printf("\n");
		scanf("%d",&opcion);
		system("cls");

		switch(opcion){
		case 1: multiplicacion(x);
            break;
		case 2: factorial(x);
            break;
		case 3: Fibonacci(x);
            break;
		case 0: Menu();
            break;
		default: printf("Numero Equivocado\n\n");
            break;
		}
		system("\t\tpause");
		system("cls");
	}while(opcion != 0);
}
//Funcion de MUltiplicacion
int multiplicacion(int numero){
	int i, multiplicacion;

	printf("\t\t*** Numero a multiplicar ***\n\n");
	printf("\t\tNumero = ");
	scanf("\t\t%d",&numero);
	system("cls");
	printf("\t\t*** Tabla de Multiplicar del %d ***\n\n", numero);

	for(i = 1; i <= 20; i++){
		multiplicacion = numero * i;
		printf("\t\t%d x %d = %d\n", numero, i, multiplicacion);
	}
}
//Funcion Factorial
int factorial(int numero){
	int i,factorial;

	printf("\t\t*** Numero para el factorial ***\n\n");
	printf("\t\tNumero = ");
	scanf("%d", &numero);

	i = 1;
	factorial = 1;

	for (i = 1;i <= numero; i++){
		factorial = factorial * i;
	}
	system("cls");
	printf("\t\t*** Factorial***\n\n");
	printf("\t\tFactorial (%d) = %d\n", numero, factorial);
}
//Funcion Fibonacci
int Fibonacci(int numero){
	int fibonacci, n, x, y, i;

	printf("\t\t*** Fibonacci ***\n\n");
	printf("\t\tNumero = ");
	scanf("%d", &numero);
	system("cls");

	x = 0;
	y = 1;

	printf("\t\t*** Fibonacci ***\n\n");
	for(i = 0;i < numero; i++){
		if(i == 0 || i == 1 ){
			fibonacci = i;
		}else{
			fibonacci = x + y;
			x = y;
			y = fibonacci;
		}
		printf("%d ", fibonacci);
	}//printf("\n");
//printf("\t\t*** Fibonacci ***\n\n");
	printf("\nFibonacci igual a %d\n\n", fibonacci);
}
//Funcion Menu Switch
void MenuSwitch(){
    int opcion;

    do{
        printf("          ---MENU---        ");
		printf("\n1. Consultar el mes del sistema e imprimirlo en espanol");
		printf("\n2. Codigo ascii de una vocal");
		printf("\n3. Codigo ascii de un numero del 0 al 9");
		printf("\n0. Salir\n");
		printf("\nQue deseas hacer: ");
		scanf("%d", &opcion);
		system("cls");

		switch(opcion){
			case 1: mesdelSistema();
				break;
			case 2: codigoVocal();
				break;
			case 3: numeros();
				break;
			case 0: Menu();
				break;
			default: printf("No es una opcion valida\n");
                break;
		}
	system("pause");
	system("cls");
    }while(opcion =! 0);
}
//Funcion Mes del Sistema
void mesdelSistema(){
    tm *tiempo;
    //int dia;
    int mes;
    //int anio;

    time_t fecha_sistema;
    time(&fecha_sistema);
    tiempo = localtime(&fecha_sistema);
    //anio = tiempo -> tm_year + 1900;
    mes = tiempo -> tm_mon + 1;
    //dia = tiempo -> tm_mday;

    switch(mes){
        case 1: printf("Enero\n");
            break;
        case 2: printf("Febrero\n");
            break;
        case 3: printf("Marzo\n");
            break;
        case 4: printf("Abril\n");
            break;
        case 5: printf("Mayo\n");
            break;
        case 6: printf("Junio\n");
            break;
        case 7: printf("Julio\n");
            break;
        case 8: printf("Agosto\n");
            break;
        case 9: printf("Septiembre\n");
            break;
        case 10: printf("Octubre\n");
            break;
        case 11: printf("Noviembre\n");
            break;
        case 12: printf("Diciembre\n");
            break;
        }
}
//Funcion Codigo Ascii Vocal
void codigoVocal(){
    char vocal;

    printf("Ingrese una vocal: ");
    scanf("%c",&vocal);
    vocal = getchar();

    switch(vocal){
        case 'a': printf("El codigo ascii equivalente es: 97\n");
            break;
        case 'e': printf("El codigo ascii equivalente es: 101\n");
            break;
        case 'i': printf("El codigo ascii equivalente es: 105\n");
            break;
        case '0': printf("El codigo ascii equivalente es: 111\n");
            break;
        case 'u': printf("El codigo ascii equivalente es: 117\n");
            break;
        case 'A': printf("El codigo ascii equivalente es: 65\n");
            break;
        case 'E': printf("El codigo ascii equivalente es: 69\n");
            break;
        case 'I': printf("El codigo ascii equivalente es: 73\n");
            break;
        case 'O': printf("El codigo ascii equivalente es: 79\n");
            break;
        case 'U': printf("El codigo ascii equivalente es: 85\n");
            break;
        default: printf("digito no valido\n");
            break;
        }
}
//Funcion Codigo Ascii Numeros
void numeros(){
	char letra;
	int num;

	printf("Ingrese un numero (0-9): ");
	scanf("%d",&num);

	switch(num){
		case 0: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 1: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 2: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 3: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 4: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 5: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 6: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 7: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 8: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		case 9: letra = num;
			printf("Codigo ASCII: %c\n",letra);
			break;
		default: printf("No es una vocal\n");
            break;
	}
}
//Funciones Array
void MenuArray(){
    int opcion;

    do{
        printf("          ---MENU---        ");
		printf("\n1. Declarar un arreglo de 4 valores");
		printf("\n2. Crear arreglo de dos numero");
		printf("\n3. Crear arreglo de dimension 4x4");
		printf("\n0. Salir\n");
		printf("\nQue deseas hacer: ");
		scanf("%d", &opcion);
		system("cls");
		switch(opcion){
			case 1: declararArreglo();
				break;
			case 2: crearArreglo();
				break;
			case 3: arreglo4x4();
				break;
			case 0:Menu();
				break;
			default: printf("No es una opcion valida");
                break;
		}
		system("pause");
		system("cls");
    }while(opcion =! 0);
}

void declararArreglo(){
    float numero[] = {32.583, 11.239, 45.781, 22.237};

    for(int i = 0; i < 4; i++){
        printf(" Los numero son: %0.2f\n", numero[i]);
    }
}

void crearArreglo(){
    int f, c;

    printf("ingrese el numero de filas: ");
    scanf("%d", &f);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &c);

    int numeros[f][c], con = 0, can = 1;
        for(int i = 0; i < f; i++){
            printf("\n");
            for(int j = 0; j < c; j++){
                numeros[i][j] = con;
                numeros[j][i] = can;
                printf("%d ", numeros[i][j]);
            }
            printf("\n");
        }
}

void arreglo4x4(){
    int arreglote[4][4];

	for(int i = 0; i < 4; i++ ){
        printf("Ingrese el numero %d del arreglo: ",i + 1);
        scanf("%d", &arreglote[i][0]);
    }
    for(int i = 0; i < 4; i++){
        printf("\n");
        for(int j = 0; j < 4; j++){
            if(i == 0){
                printf("%d  ", arreglote[j][i]);
            }
            if(i == 1){
                arreglote[j][i]=pow(arreglote[j][0],2);
                printf("%d  ", arreglote[j][i]);
            }
            if(i == 2){
                arreglote[j][i]=pow(arreglote[j][0],3);
                printf("%d  ", arreglote[j][i]);
            }
            if(i == 3){
                arreglote[j][i]=pow(arreglote[j][0],4);
                printf("%d  ", arreglote[j][i]);
            }
        }
    }
}

void MenuMatricez(){
	int opcion, i;

	do{
		printf("*-----------------------------MENU OPCIONES----------------------------*\n");
        printf("*  1. llenar Matriz 3x3                                                *\n");
        printf("*  2. llenar Matriz automaticamente por el sistema                     *\n");
        printf("*  3. llenar Matriz automaticamente por el sistema con numeros primos  *\n");
        printf("*  0.Salir                                                             *\n");
        printf("*----------------------------------------------------------------------*\n");
        printf("\nQue deseas hacer: ");
        scanf("%d",&opcion);
        system("cls");

        switch(opcion){
            case 1: matriz3x3();
                break;
            case 2: matrizAutomatica();
                break;
            case 3: matrizPrimos();
                break;
            case 0: Menu();
                break;
            default: printf("vuelva a intentar Numero equivocado\n");
                break;
        }
    	system("pause");
		system("cls");
	}while(opcion != 0);
}

void matriz3x3(){
	int matriz[lon][lon];
	int suma = 0;
	int c,f;

	for(int f=0 ; f < lon; f++){
		for(int c = 0; c < lon ; c++){
        printf("ingrese valor posicion [%d][%d]:  ", f, c);
        scanf("%d",&matriz[f][c]);
		}
	}
	system("cls");
	for(f = 0; f < lon; f++){
		for(c = 0; c < lon; c++){
			suma = suma + matriz[f][c];
		}
	}
	for(f = 0; f < lon; f++){
		for(c = 0; c < lon; c++){
			printf("%d  ",matriz[f][c]);
		}printf("\n");
	}
	printf("\nLa suma es igual a = %d  \n",suma);
	printf("\n");
}

void matrizAutomatica(){
    int automatica[lon][lon];

	srand(time(0));
	 int f, c;

       for (f = 0; f < lon; f++){
         for (c = 0; c < lon; c++){
           automatica[f][c]= rand()%(20);
            printf("\t%d",automatica[f][c]);
         }
       printf("\n");
    }
}

void matrizPrimos(){
    int Num, filaprima = 0, columnaprima = 0;

    printf("Ingrese un numero inicial: ");
    scanf("%d", &Num);
    system("cls");

    int primos[lon][lon];
    int i = 1, d = 0;

    while(filaprima < lon){
        while(true){
            if( Num % i == 0){
              d += 1;
            }
            if(d > 2){
                break;
            }
            if(i >= Num){
        		break;
        	}
            i += 1;
        }
        if(d == 2){
            primos[filaprima][columnaprima] = Num;
            columnaprima += 1;
            if(columnaprima == l){
                filaprima += 1;
                columnaprima = 0;
            }
        }
        Num += 1;
        i = 1;
        d = 0;
    }
    for(i = 0; i < lon; i++){
	    for(int j = 0; j < lon; j++){
	        printf("%d \t", primos[i][j]);
	    }
	    printf("\n");
    }
}

void MenuEstructuras(){
  	int x;
    int opcion;

    do{
		printf("************************************************\n");
		printf("*                    MENU                      *\n");
        printf("************************************************\n");
		printf("*                                              *\n");
        printf("*   1. promedio por array                      *\n");
        printf("*   2. Datos de un Competidor                  *\n");
        printf("*   3. Promedio de un Alumno                   *\n");
        printf("*   4. Mejor y menor Promedio de N estudiantes *\n");
        printf("*   0. Salir                                   *\n");
        printf("*                                              *\n");
		printf("************************************************\n\n");
        printf(" Que deseas realizar:  ");
        scanf("%d", &opcion);
		system("cls");

        switch(opcion){
            case 1: N_alumnos();
                break;
            case 2: datosCompetidor();
                break;
            case 3: promedio();
                break;
            case 4: MejoryMenor();
                break;
            case 0: Menu();
                break;
            default: printf("\t\tOpcion invalida\n\n");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}

void N_alumnos(){
	int i;
	int N;

	printf("\t");
	printf("\t*** Datos Estudiante ***\n\n");
	printf("\tCuantos alumnos deseas promediar: ");
	scanf("%d",&N);
	fflush(stdin);
	system("cls");

	for(i = 0; i < N; i++){
		printf("\t");
		printf("\t*** Datos Estudiante ***\n\n");
		printf("\tIngrese el nombre del estudiante: ");
		fgets(alumnos[i].nombre,30,stdin);
		fflush(stdin);
		printf("\n\t");
		printf("\t*** Datos Notas ***\n\n");
		printf("\tNota 1: ");
		scanf("%f",&alumnos[i].nota1);
		printf("\tNota 2: ");
		scanf("%f",&alumnos[i].nota2);
		printf("\tNota 3: ");
		scanf("%f",&alumnos[i].nota3);
		fflush(stdin);
		alumnos[i].promedio =(alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3)/3;
		system("cls");
	}printf("\t");
	printf("\t\t*** Datos Estudiante ***\n\n");

	for(i = 0; i < N; i++){
		printf("\t\tNombre: %s",alumnos[i].nombre);
		printf("\t\tPromedio: %.2f\n",alumnos[i].promedio);
		printf("\n");
	}
}

void datosCompetidor(){
	fflush(stdin);
	char categoria[20];

	printf("\t");
	printf("\t\t*** Datos Participante ***\n\n");
	printf("\t\tIngrese Nombre: ");
	fgets(competidorCompetencia.nombre,20,stdin);
	printf("\t\tIngrese Edad: ");
	scanf("%d", &competidorCompetencia.edad);
	fflush(stdin);
	printf("\t\tIngrese m => masculino o f => femenino: ");
	scanf("%c", &competidorCompetencia.sexo);
	fflush(stdin);
	printf("\t\tIngrese Nombre del Club: ");
	fgets(competidorCompetencia.club,20,stdin);
	system("cls");
	fflush(stdin);
	printf("\t");
	printf("\t*** Datos Participante ***\n\n");
	printf("\tNombre: %s",competidorCompetencia.nombre);
	printf("\tEdad: %d\n",competidorCompetencia.edad);
	printf("\tSexo: %c\n",competidorCompetencia.sexo);
	printf("\tClub: %s",competidorCompetencia.club);
	printf("\tCategoria: ");

	if(competidorCompetencia.edad <= 15){
		printf("Infantil");
	}
	else if(competidorCompetencia.edad <= 40){
		printf("Joven");
	}
	else{
		printf("Mayor");
	}printf("\n\n");
}

void promedio(){
	int i;
	int promMayor=0;
	float promedio_alumno,mayor=0;

	printf("\t");
	printf("\t\t*** Datos Estudiante ***\n\n");
	fflush(stdin);
	printf("\t\tIngrese Nombre: ");
	fgets(alum.nombre,30,stdin);
	printf("\t\tIngrese m => masculino o f => femenino: ");
	scanf("%c", &alum.sexo);
	printf("\t\tIngrese edad: ");
	scanf("%d", &alum.edad);
	printf("\n\t");
	printf("\t\t*** Datos Notas ***\n\n");
	printf("\t\tNota1: ");
	scanf("%f", &alum.prom.nota1);
	printf("\t\tNota2: ");
	scanf("%f", &alum.prom.nota2);
	printf("\t\tNota3: ");
	scanf("%f", &alum.prom.nota3);
	promedio_alumno = (alum.prom.nota1+alum.prom.nota2+alum.prom.nota3)/3;
	system("cls");
	printf("\t");
	printf("\t\t***Datos del Estudiante***\n\n");
	printf("\t\tNombre: %s",alum.nombre);
	printf("\t\tSexo: %c\n",alum.sexo);
	printf("\t\tEdad: %d\n",alum.edad);
	printf("\t\tPromedio: %0.2f\n",promedio_alumno);
}

void MejoryMenor(){
	int n_alumnos,promMayor=0;
	float promedio_alumno[100],mayor=0;

	printf("\t");
	printf("\t\t*** Datos Estudiante ***\n\n");
	printf("\t\tIngrese Numero de alumnos: ");
	scanf("%d",&n_alumnos);
	system("cls");

	for(int i=0;i<n_alumnos;i++){
		printf("\t");
		printf("\t\t*** Datos Estudiante ***\n\n");
		fflush(stdin);
		printf("\t\tIngrese Nombre: ");
		fgets(alumnos[i].nombre,30,stdin);
		printf("\t\tIngrese m => masculino o f => femenino: ");
		scanf("%c", &alumnos[i].sexo);
		printf("\t\tIngrese edad: ");
		scanf("%d", &alumnos[i].edad);
		printf("\n\t");
		printf("\t\t*** Datos Notas ***\n\n");
		printf("\t\tNota1: ");
		scanf("%f", &alumnos[i].prom.nota1);
		printf("\t\tNota2: ");
		scanf("%f", &alumnos[i].prom.nota2);
		printf("\t\tNota3: ");
		scanf("%f", &alumnos[i].prom.nota3);

		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;

		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			promMayor = i;
		}
		system("cls");
	}printf("\t");
	printf("\t\t*** El Alumno con Mejor Promedio es ***\n\n");
	printf("\t\tNombre: %s",alumnos[promMayor].nombre);
	printf("\t\tSexo: %c\n",alumnos[promMayor].sexo);
	printf("\t\tEdad: %d\n",alumnos[promMayor].edad);
	printf("\t\tPromedio: %0.2f\n",promedio_alumno[promMayor]);
	printf("\n");
}
