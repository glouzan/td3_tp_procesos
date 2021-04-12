/*
TP 1 - Procesos - Ejercicio 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>	//Define pid_t
#include <unistd.h>	//Define fork,getpid y getppid

int main(){

	printf("Mi pid es %d y el pid de mi papa es %d\n", getpid(),getppid());
	
	exit(0);

}
/*Resultado de la Ejecución:
Mi pid es 7130 y el pid de mi papa es 1972
El PID es el Identificador de Proceso
El PID del padre es mas chico que el del hijo, porque se crea con posterioridad.
*/
