#include "stdio.h"
#include <stdlib.h>
#include <string.h>

void		get_max(int *res, int len)
{
	int		nb = 0;
	for (int i = 0; i < len; i++)
		if (nb < res[i])
			nb = res[i];
	printf("%d\n", nb);
}

void		solve(int t, int n, int k, char *nb)
{
	int		i = 0;
	int		j = 0;
	int		z = 0;
	int		cont;
	int		res[t];

	while (i < t && nb[i])
	{
		j = i;
		cont = 1;
		while (z < k && nb[j])
		{
			cont *= nb[j] - '0';
			j++;
			z++;
		}
		res[i] = cont;
		z = 0;
		i++;
	}
	get_max(res, t);
}

void	error(int flag)
{
	if (flag == 1)
		printf("ERROR: 1 <= T <= 100\n");
	else if (flag == 2)
		printf("ERROR: 1 <= K <= 7\n");
	else if (flag == 3)
		printf("ERROR: K <= N <= 1000\n");
	else if (flag == 4)
		printf("ERROR: N has to be the length of nb\n");
	printf("0\n");
	exit(0);
}

void	manual(void)
{
	printf("Ex01 Usage: ./ex01 -t -n -k -nb\n");
	printf("-t: the number of test cases.\n");
	printf("-n: length of the number\n");
	printf("-k: consecutive digits \n");
	printf("-nb: number to calculate\n");
}

int		main(int ac, char **argv)
{
	int		t = 0;
	int		n = 0;
	int		k = 0;
	int		nb = 0;

	if (ac == 5)
	{
		t = atoi(argv[1]);
		n = atoi(argv[2]);
		k = atoi(argv[3]);
		if (t == 0 || n == 0 || k == 0 || (atoi(argv[4])) == 0)
			error(5);
		if (n != strlen(argv[4]))
			error(4);
		if (t < 1 && t > 100)
			error(1);
		if (k < 1 && k > 7)
			error(2);
		if (n < k && n > 1000)
			error(3);
		solve(t, n, k, argv[4]);
	}
	else
		manual();
	return 0;
}