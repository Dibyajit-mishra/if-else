#include<stdio.h>
main()
{
	int marks=0;
	scanf("%d",&marks);
	if(marks<0||marks>100)
	{printf("invalid marks");
	return 0;
	}
{if(marks>=85 && marks<=100)
printf("Grade A",&marks);
else
if(marks>=70)
printf("Grade B",&marks);
else
if(marks>=55)
printf("Grade C",&marks);
else
if(marks>=40)
printf("Grade D",&marks);
else
printf("Grade F",&marks);
}	
}

