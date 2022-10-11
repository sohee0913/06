#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int combination(int n, int r);
int factorial(int i);
//int get_integer(void);

int combination(int n, int r)
{
	int result=0;
	
	result=factorial(n)/(factorial(n-r)*factorial(r));
	return result;
}

int factorial(int n)
{
	int i;
	int res=1;
	
	for(i=1;i<=n;i++)
		res=res*i;
		
	return res; 
 } 

/*int get_integer(void)
{
	int n,r;
	
	print("combination할 n,r을 입력하세요:\n.");
	scanf("%i,%i", &n,&r);
	return(n,r);
}*/

int main(int argc, char *argv[]){
	int n,r;
	int result=0;
		
	printf("combination할 n,r을 입력하세요:.\n");
	scanf("%i %i", &n,&r);

	result=combination(n,r);
	printf("result is %i. \n", result);
	
	return 0;
}
