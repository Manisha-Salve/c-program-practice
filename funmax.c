#include<stdio.h>
int Maximum(int iNo1,int iNo2)
{
	if(iNo1>iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}
int main()
{
	auto int ivalue1=0,ivalue2=0,iret=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&ivalue1);
	
	printf("Enter the second number:\n");
	scanf("%d",&ivalue2);
	
	iret=Maximum(ivalue1,ivalue2);
	printf("Maximum number is:%d \n",iret);
	
	return 0;
	
}