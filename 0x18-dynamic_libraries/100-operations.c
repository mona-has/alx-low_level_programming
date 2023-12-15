#include <stdio.h>

int add(int x, int z)
{
	return (x + z);
}

int sub(int x, int z)
{
	return (x - z);
}

int mul(int x, int z)
{
	return (x * z);
}

int div(int x, int z)
{
	if (z == 0)
		return (0);
	else
		return (x / z);
}

int mod(int x, int z)
{
	if (z == 0)
		return (0);
	else
		return (x % z);
}
