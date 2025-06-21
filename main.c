#include "header.h"
SLL* Account_Details=NULL;
Trsnc *history=NULL;
int main()
{
	srand(time(NULL));
	char choice;
	Sync_From_File();
	Sync_From_File_H();
	while(1)
	{
		Print_Menu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case'c':
			case'C':Create_Account();
				break;
			case'h':
			case'H':History();
				break;
			case'w':
			case'W':Withdraw();
				break;
			case'd':
			case'D':Deposit();
				break;
			case'b':
			case'B':Balance_Enquery();
				break;
			case't':
			case'T':Transfer_Money();
				break;
			case'e':
			case'E':Display_All_Accounts();
				break;
			case's':
			case'S':Save_To_File();
				Save_To_File_H();
				break;
			case'f':
			case'F':Find_Specific_Account();
				break;
			case'q':
			case'Q':return 0;
				break;
			default:printf("WRONG! ENTERY\n");
		}
	}
}
