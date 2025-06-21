#include "header.h"
int AccountNumber(void)
{
	int i,j;
	int acc_num;
	acc_num=0;
	for(i=0;i<5;i++)
	{
		j=rand()%10;
		acc_num=(acc_num*10)+j;
	}
	return acc_num;
}
void Create_Account(void)
{
	char c;
	int i,flag=1;
	long int j;
	SLL *New_Account=NULL;
	Trsnc *New_History=NULL;
	New_History=calloc(1,sizeof(Trsnc));
	New_Account=calloc(1,sizeof(SLL));
	printf("Enter Account Holder Name:");
	__fpurge(stdin);
	fgets(New_Account->Name,50,stdin);
	for(i=0;New_Account->Name[i]!='\n';i++)
	{
		c=New_Account->Name[i];
		if(((c>='a')&&(c<='z'))&&flag)
		{
			New_Account->Name[i]=c-32;
			flag=0;
		}
		else if(New_Account->Name[i]==' ')
		{
			i++;
			c=New_Account->Name[i];
			if((c>='a')&&(c<='z'))
			{
				New_Account->Name[i]=c-32;
			}
		}
	}
	flag=1;
	New_Account->Name[i]='\0';
	while(flag)
	{
	printf("Enter 10 Digits Contact number:");
	__fpurge(stdin);
	scanf("%ld",&New_Account->Contact_Number);
	j=New_Account->Contact_Number;
	i=0;
	while(j)
	{
		j/=10;
		i++;
	}
	if((i>10)||(i<10))
	{
		printf("INVALID CONTACT NUMBER!\n");
		flag=1;
	}
	else
	{
		flag=0;
	}
	}
	New_Account->Account_Number=AccountNumber();
	flag=1;
	while(flag)
	{
	printf("Enter 12 Digits Aadhar Number:");
	__fpurge(stdin);
	scanf("%ld",&New_Account->Aadhar_Number);
	j=New_Account->Aadhar_Number;
	i=0;
	while(j>0)
	{
		j/=10;
		i++;
	}
	if((i>12)||(i<12))
	{
		printf("INVALID AADHAR NUMBER!\n");
		flag=1;
	}
	else if(Compare_Aadhar(New_Account->Aadhar_Number))
	{
		printf("ACCOUNT DETECTED WITH THIS AADHAR NUMBER\n");
		flag=1;
	}
	else
	{
		flag=0;
	}
	}
	printf("Enter Account Balance:");
	__fpurge(stdin);
	scanf("%lf",&New_Account->Account_Balance);
	New_Account->Trasnction_Count=1;
	if(Account_Details==NULL)
	{
		New_Account->next=0;
		Account_Details=New_Account;
	}
	else
	{
		New_Account->next=Account_Details;
		Account_Details=New_Account;
	}
	
	strcpy(New_History->type,"Deposit");
	New_History->amount=New_Account->Account_Balance;
	New_History->Acc_Num=New_Account->Account_Number;
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
