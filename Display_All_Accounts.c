#include "header.h"
void Display_All_Accounts(void)
{
	SLL *temp=Account_Details;
	if(Account_Details==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(temp)
		{
			printf("Name:              %s\n",temp->Name);
			printf("Contact Number:    +91 %ld\n",temp->Contact_Number);
			printf("Account Number:    %d\n",temp->Account_Number);
			printf("Aadhar Number:     %ld\n",temp->Aadhar_Number);
			printf("No.of Trasnctions: %d\n",temp->Trasnction_Count);
			printf("\n");
			temp=temp->next;
		}
	}
}
