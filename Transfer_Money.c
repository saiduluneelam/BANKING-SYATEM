#include "header.h"
void Transfer_Money(void)
{
	SLL *temp1,*temp2;
	int acc_num1,acc_num2;
	double amount;
	printf("Enter your Account Number:");
	__fpurge(stdin);
	scanf("%d",&acc_num1);
	temp1=Account_Details;
	while(temp1)
	{
		if(temp1->Account_Number==acc_num1)
		{
			break;
		}
		temp1=temp1->next;
	}
	if(temp1==NULL)
	{
		printf("Invalid Account Number!\n");
	}
	else
	{
		printf("Enter Amount to be Transfered account number:");
		__fpurge(stdin);
	 	scanf("%d",&acc_num2);
		temp2=Account_Details;
		while(temp2)
		{
			if(temp2->Account_Number==acc_num2)
			{
				break;
			}
			temp2=temp2->next;
		}
		if(temp2==NULL)
		{
			printf("Invalid account number!\n");
		}
		else
		{
amount:printf("Enter Amount to Transfer:");
	       	__fpurge(stdin);
       		scanf("%lf",&amount);
       		if(amount<0.0)
		{
			printf("Invalid amount!\n");
			goto amount;
		}	
		else if(amount>temp1->Account_Balance)
		{
			printf("Insufficient Balance!\n");
			goto amount;
		}
		else
		{
			temp1->Account_Balance=(temp1->Account_Balance-amount);
			temp1->Trasnction_Count++;
			temp2->Account_Balance=(temp2->Account_Balance+amount);
			temp2->Trasnction_Count++;
			printf("TRANSFER SUCCESSFUL\n");		
		}
		}
	}
}
