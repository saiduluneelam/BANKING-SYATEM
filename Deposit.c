#include "header.h"
void Deposit(void)
{
	SLL *temp;
	Trsnc *New_History;
	New_History=calloc(1,sizeof(Trsnc));
	int i;
	double amount;
	long int acc_num;
	printf("Enter account number/Aadhar Number:");
	__fpurge(stdin);
	scanf("%ld",&acc_num);
	temp=Account_Details;
	while(temp)
	{
		if((temp->Account_Number==acc_num)||(temp->Aadhar_Number==acc_num))
		{
			break;
		}
		temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("Invalid account number !\n");
	}
	else
	{
		if(count(acc_num))
		{
Otp:printf("Enter OTP sent to your phone number:");
			scanf("%d",&i);
			if(i<0)
			{
				printf("Invalid OTP!\n");
				goto Otp;
			}
		}
Amount:printf("Enter Amount:");
		__fpurge(stdin);
       		scanf("%lf",&amount);
		if(amount<0)
		{
			printf("Invalid Amount\n");
			goto Amount;
		}
		else
		{
			temp->Trasnction_Count++;
			temp->Account_Balance=(temp->Account_Balance+amount);
			printf("DEPSOIT SUCCESSFUL\n");
		}
	strcpy(New_History->type,"Deposit");
	New_History->amount=amount;
	New_History->Acc_Num=temp->Account_Number;
	if(history==NULL)
	{
		history=New_History;
	}
	else
	{
		New_History->next=history;
		history=New_History;
	}
	}
}
