#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R 6
#define C 6

void rellenar (int [][C], int [][C]);
void imprimir (int [][C]);
void imprimir2 (int [][C]);
void cambio (int [][C], int [][C]);

int main()
{
	int a[R][C] = {0};
	int b[R][C] = {0};
	rellenar(a,b);
	imprimir(a);
	imprimir2(b);
	cambio(a,b);
	puts("");
	imprimir(a);
}

void rellenar (int a[R][C], int b [R][C])
{
	int i, j;

	srand(time(NULL));
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			a[i][j]=rand() % 10;
            b[i][j]=rand() % 10;
		}
	}
}

void imprimir (int a[R][C])
{
	int i, j;
	puts("");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d\t",a[i][j]);

		}
	printf("\n");
	}
}

void imprimir2 (int b[R][C])
{
int i, j;
printf("\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d\t",b[i][j]);

		}
	puts("");
	}
}


void cambio (int a[R][C], int b [R][C])
{
  int i, j;

	for(i=1; i<5; i++)
	{
	    for(j=1; j<5; j++)
		{
		  a[i][j]=b[i][j];
		}
	}


}
