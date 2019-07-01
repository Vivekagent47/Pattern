/* I had divide this paatern into 4 parts and make this one by one so thats why I had make two loops and in these loops I had made two diffferent loops .....
one external loop make upper half and second loop make the lower half of the pattern .

first loop is also divided into two parts thats why there are two differnt loops in it 

lower one is same as the upper.......
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i,j,f,g;
	printf("Enter the no of rows ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{	f=n;
		for(j=n;j>=1;j--,f--){
		if(i<j)
			printf("%d ",f);
		else
			printf("%d ",i);
		}
		g=2;
		for(j=n-1;j>=1;j--,g++){
		if(i<n-j+1)
			printf("%d ",g);
		else
			printf("%d ",i);	
		}
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{	f=n;
		for(j=n;j>=1;j--,f--){
		if(i<j)
			printf("%d ",f);
		else
			printf("%d ",i);
		}
		g=2;
		for(j=n-1;j>=1;j--,g++){
		if(i<n-j+1)
			printf("%d ",g);
		else
			printf("%d ",i);
		}

		printf("\n");
	}

	return 0;
}
