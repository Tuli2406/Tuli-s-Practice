#include<stdio.h>
int main()
{
	int i,L,R;
	int primecount=0,compositcount=0,spycount=0;

	printf("Enter the ramge L and R:");
	scanf("%d %d",&L,&R);

	for(i=L;i<=R;i++)
	{
		if(i>1)
		{
			int isprime=1;
			for(int j=2;j*j<=i;j++)
			{
				if(i%j==0){
					isprime=0;
				break;}
			}
			if(isprime)
			{
				primecount++;

			}
			else
			{
				compositcount++;
			}

		}
		int sum=0,product=1,temp=i;
		while(temp>0)
		{
			int digit=temp%10;
			sum=sum+digit;
			product=product*digit;
			temp=temp/10;
		}
		if(sum==product)
		{
			spycount++;
		}
	}
	printf("Prime numbers:%d\n",primecount);
        printf("Composite numbers:%d\n",compositcount);
	printf("Spy numbers:%d\n",spycount);

}




