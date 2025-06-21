#include "header.h"
void Save_To_File(void)
{
	int size;
	FILE *fptr;
	fptr=fopen("Bank_Details.txt","w");
	SLL *temp=Account_Details;
	size=sizeof(SLL)-sizeof(SLL*);
	while(temp)
	{
		fwrite(temp,size,1,fptr);
		temp=temp->next;
	}
	fclose(fptr);
	printf("SAVED SUCCESSFULLY\n");
}
