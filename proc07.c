/*
TP 1 - Procesos - Ejercicio 7
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>	//Define pid_t
#include <unistd.h>	//Define fork,getpid y getppid

int main(){

	pid_t pid;
	int i;
	
	for(i=0;i<3;i++)
	{
		pid = fork();
		printf("Mi pid es %d y el pid de mi papa es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
		printf("i=%d",i);
	}
	//Ejecute pstree en otra consola 
	
	sleep(30);
	
	exit(0);
	

}

/*Resultado de la Ejecución:
gnome-shell─┬─deepin-terminal─┬─bash───proc02───proc02
        │         │             │                 ├─bash───pstree

*/
