// calcuylator program 
#include<stdio.h>
int main(){
	int a,b;
	char choice;
	printf("enter any arethmitic operator ");
	scanf("%c",&choice);
	printf(" enter any to number\n");
	scanf("%d%d",&a,&b);
	
	switch(choice)
	{
		case '+':
			printf("the sum of the given number is %d",a+b);
			break;
			case '-':
				printf("the difference of given number is %d",a-b);
				break;
				case '*' :
					printf("the mulitply of the given number is %d",a*b);
					break;
					case '/':
						printf(" the division of given number is %d",a/b);
						break;
						case '%':
							printf("the reminder of given number is %d",a%b);
							break;
							
			
						default:
								
								printf("sorry you  have enter invalid number");
	}
	return 0;
	
}
