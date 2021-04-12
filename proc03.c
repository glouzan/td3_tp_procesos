/*
TP 1 - Procesos - Ejercicio 3
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>	//Define pid_t
#include <unistd.h>	//Define fork,getpid y getppid

int main(){

	fork();
	fork();
	printf("Mi pid es %d y el pid de mi papa es %d\n",getpid(), getppid());
	sleep(30); //Probar con el comando pstree -p
	exit(0);
	

}

/*Resultado de la Ejecución:

Mi pid es 7724 y el pid de mi papa es 1972
Mi pid es 7726 y el pid de mi papa es 7724
Mi pid es 7725 y el pid de mi papa es 7724
Mi pid es 7727 y el pid de mi papa es 7725

pstree -p

─gnome-shell(1139)─┬─deepin-terminal(1965)─┬─bash(1972)───proc03(7724)─┬─proc03(772+
                   │                       │                           └─proc03(772+

*/
