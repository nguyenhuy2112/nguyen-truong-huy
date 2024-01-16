#include<stdio.h>
#include<math.h>
int main()
{
	int S=0;
	int x;
	do
	{
		printf("nhap gia tri: ");
		scanf("%d", &x);
		if(x !=0){
			S += x;
		}
	
	}
	while(x != 0);
		printf("tong cac so nguyen: %d\n", S);
	return 0;	
}