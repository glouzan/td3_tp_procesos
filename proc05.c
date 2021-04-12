/*
TP 1 - Procesos - Ejercicio 5
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>	//Define pid_t
#include <unistd.h>	//Define fork,getpid y getppid

int main()
{
	int x = 100;
	printf("Soy el proceso: %d \n", getpid());
	
	switch(fork())
	{
	case -1:	//fork() devuelve -1 si no pudo crear el proceso hijo
		printf("ERROR: No se crea proceso hijo");
	break;
	
	case 0:	//Entra solo si es el proceso hijo
		printf("Soy el proceso hijo, pid: %d\nx= %dcon dir de memoria %ld \n", getpid(), --x, (&x));
		break;
	default:	//Proceso Padre (También podría ser condición de Entero Positivo
		printf("Soy el proceso padre, pid: %d\nx=%d\ncon dir de memoria %ld \n", getpid(), ++x, (&x));
	}
	
	exit(0);

		
}

/*Resultado de la Ejecución:
	Soy el proceso: 8415 
	Soy el proceso padre, pid: 8415
	 x101
	Soy el proceso hijo, pid: 8416
	 x= 99
*/

