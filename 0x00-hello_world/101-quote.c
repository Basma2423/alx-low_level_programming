#include<unistd.h>
#include<sys/syscall.h>
/**
 *
 * main - main funciton does some stuff
 *
 * Description: print without printf or puts methods
 *
 * Return: 1 as mentioned
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dorpar, 2015-10-19\n";
	syscall(SYS_write, 1, msg, sizeof(msg));
	return (1);
}
