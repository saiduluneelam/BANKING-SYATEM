#include "header.h"
void Sync_From_File(void)
{
	int size;
	SLL var,*node,*temp;
	FILE *fptr;
	fptr=fopen("Bank_Details.txt","r");
	size=sizeof(SLL)-sizeof(SLL*);
	if(fptr)
	{
		while(fread(&var,size,1,fptr))
		{
			node=calloc(1,sizeof(SLL));
			strcpy(node->Name,var.Name);
			node->Account_Balance=var.Account_Balance;
			node->Contact_Number=var.Contact_Number;
			node->Account_Number=var.Account_Number;
			node->Trasnction_Count=var.Trasnction_Count;
			node->Aadhar_Number=var.Aadhar_Number;
			node->next=0;
			if(Account_Details==NULL)
			{
				Account_Details=node;
			}
			else
			{
				node->next=Account_Details;
				Account_Details=node;
			}
		}
	}
	fclose(fptr);
}
