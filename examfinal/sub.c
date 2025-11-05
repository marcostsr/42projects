
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int j;

	j = 0;
	while(argv[1][j] != 0)
	{
		if (argv[1][j] == argv[2][0])
			argv[1][j] = argv[3][0];
		j++;
	}
	printf("%s",argv[1]);
	return (0);
}
