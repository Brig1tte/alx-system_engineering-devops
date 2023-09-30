#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_while - function to create an infinite while
 * Return: void
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - function to create 5 zombie processes
 * Return: void
 */
int main(void)
{
	int k = 0;
	int pid = 0;

	for (k = 0; k < 5; k++)
	{
		pid = fork();
		if (pid > 0)
			printf("Zombie process created, PID: %k\n", pid);
		else
			exit(0);
	}
	infinite_while();
	return (0);
}
