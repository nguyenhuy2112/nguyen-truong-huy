#include<stdio.h>
int main()
{
int x, y;
do
{
	printf("enter the firt integer (0 to stop): ");
	scanf("%d", &x);
	if(x != 0)
	{
		printf("enter the second integer (0 to stop): ");
		scanf("%d", &y);
	}
	int t = x;
	x = y;
	y = t;
	printf("\nSwapped value: %d \n%d", x, y);
}
while(x != 0, y != 0);
return 0;
}
