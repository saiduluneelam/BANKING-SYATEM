#include "header.h"
void History(void)
{
	int i;
	Trsnc *Print_History=NULL;
	if(history==NULL)
	{
		puts("No history Found!");
	}
	else
	{
		printf("No.of    Type of Trasnctions       Account Number      Amount\n");
		Print_History=history;
		for(i=0;((i<5)&&(Print_History!=NULL));i++)
		{
			printf("%d \t%s\t\t\t%d\t\t%.3f",i+1,Print_History->type,Print_History->Acc_Num,Print_History->amount);
		Print_History=Print_History->next;
		printf("\n");
		}
	}
}
