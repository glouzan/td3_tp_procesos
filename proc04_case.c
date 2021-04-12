/*
TP 1 - Procesos - Ejercicio 4
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>	//Define pid_t
#include <unistd.h>	//Define fork,getpid y getppid

int main(){

	pid_t pid;
	int estado,a;
	
	pid = fork();
	
	switch(pid)
	{
	case -1:
		printf("Error. No se crea proceso hijo");
		return -1;
		break;
	case 0:
		printf("Soy el proceso hijo, mi pid es %d y el pid de mi papa es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
		exit(1);
		break;
	default:
		printf("Soy el proceso padre, mi pid es %d y el pid de mi papa(bash) es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
		break;
	}
		sleep(30);
		exit(1);
	wait(NULL);
//	a=wait(&estado);
	printf("Mi pid es %d status= %d\n", getpid(), estado);
		
}

/*Resultado de la Ejecución:
─gnome-shell(1139)─┬─deepin-terminal(1965)─┬─bash(1972)───proc04_case(8247)───proc04_case(8248)

*/

