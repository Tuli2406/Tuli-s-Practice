#include<stdio.h>
int main()
{ 
	int a,b,c,highest,lowest;

	printf("Enter the value of a,b,c :");
	scanf("%d %d %d",&a,&b,&c);

	highest=lowest=a;
	


	

	

	



	if(b>highest)
	{
	highest=b;
	}
	if(b<lowest)
	{
		
		lowest=b;

	
	}

	if(c>highest)
	{

           highest=c;
	}

	if(c<lowest)
	{
	
		lowest=c;

	}

	printf("Highest number is:%d\n",highest);
	printf("Lowest number is %d\n",lowest);
	

	return 0;

}



