
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)


int Add(int num)
{
	if (num == 101)
	{
		return 0;
	}
	printf("Nun %d\n", num);
	Add(num + 1);
	return 0;
}

int main_1()
{
	int a = Add(1);
	return 0;

}












