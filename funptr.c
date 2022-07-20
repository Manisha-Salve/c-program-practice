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
	auto int ivalue1=0, ivalue2=0, iret=0;
	
	int(*fp)(int,int);
	fp=Maximum;
	
	printf("Enter the first no:\n");;
	scanf("%d",&ivalue1);
	
	printf("Enter the second no: \n");
	scanf("%d",&ivalue2);
	
	iret=fp(ivalue1,ivalue2);
	printf("Maximum number is %d",iret);
	
	
	return 0;
	
}