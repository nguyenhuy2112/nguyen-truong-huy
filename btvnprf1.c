#include<stdio.h>
#include<math.h>
int main(){
	int num1, num2;
	char sign;
	int result;
	printf("enter num1: ");
	scanf("%d", &num1);
	printf("enter num2: ");
	scanf("%d", &num2);
	printf("enter sign: ");
	scanf("\n%c", &sign);
	switch(sign)
	{
		case'+': result = num1 + num2;
		printf("%d", result);
		break;
		case'-': result = num1 - num2;
		printf("%d", result);
		break;
		case'*': result = num1 * num2;
		printf("%d", result);
		case'/':
			if(num2 == 0){
				printf("gia tri khong hop le !");
			}
			else
			{
				result = num1 / num2;
				printf("%d", result);	
			}
			break;
			default:
				printf("khong co ket qua phu hop !");
	}
	return 0;
}