#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
int main()
{
	fork();
	system("ssh -p 8022 u0_182@10.0.1.22 'while : do echo f >> file.txt done'");
	return (0);
}
