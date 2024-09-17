#include <locale.h>

#include <stdio.h>

int main()
{
	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;

	printf("%c\n %d\n %g\n %le\n", c , i , f , d);
	
	char r;
	int t;
	float y;
	double u;

	printf("input char\n");
	scanf("%c", &r);
	//printf(" %b\n", c);

	printf("input int\n");
	scanf("%d", &t);
	//printf(" %i\n", k);

	printf("input float\n");
	scanf("%f", &y);
	//printf(" %i\n", l);

	printf("input double\n");
	scanf("%le", &u);
	//printf(" %d\n", a);

	printf("%c\n %d\n %f\n %le\n", r, t, y, u);
	//printf("% 0.1f\n", y);
	//dz 1a b c

}