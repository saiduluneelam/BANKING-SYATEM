#include "header.h"

void Save_To_File_H(void)
{
	int size,i;
	FILE *fptr;
	size=(sizeof(Trsnc)-sizeof(Trsnc*));
	fptr=fopen("Bank_History.txt","w");
	for(i=0;history!=NULL;i++)
	{
		fwrite(history,size,1,fptr);
		history=history->next;

	}
	fclose(fptr);
}
