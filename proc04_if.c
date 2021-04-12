/*
TP 1 - Procesos - Ejercicio 4
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>	//Define pid_t
#include <unistd.h>	//Define fork,getpid y getppid

int main(){

	pid_t pid;
	int i;
	
	pid = fork();
	
	if(pid==0)
		{
		printf("Soy el proceso hijo, mi pid es %d y el pid de mi papa es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
		exit(0);
		}
	else
		{
		printf("Soy el proceso padre, mi pid es %d y el pid de mi papa(bash) es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
		sleep(30);
		exit(1);
		}
	
}

/*Resultado de la Ejecución:

           │              ├─gnome-shell(1139)─┬─deepin-terminal(1965)─┬─bash(1972)───proc04(7957)───proc04(795+
           │              │                   │                       ├─bash(7961)───pstree(7967)
*/

