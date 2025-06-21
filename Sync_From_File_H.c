#include "header.h"

void Sync_From_File_H(void)
{
	FILE *fptr;
	Trsnc var,*temp,*New_History;
	int i,size;
	size=sizeof(Trsnc)-sizeof(Trsnc*);
	fptr=fopen("Bank_History.txt","r");
	
		while(fread(&var,size,1,fptr)==1)
		{
			New_History=calloc(1,sizeof(Trsnc));
			strcpy(New_History->type,var.type);
			New_History->amount=var.amount;
			New_History->Acc_Num=var.Acc_Num;
			if(history==NULL)
			{
				history=New_History;
			}
			else
			{
				temp=history;
				while(temp->next!=NULL)
					temp=temp->next;
				temp->next=New_History;	
			}
		}
	fclose(fptr);
}
