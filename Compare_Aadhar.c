#include"header.h"

int Compare_Aadhar(long int aadhar)
{
	SLL *node;
	node=Account_Details;
	while(node!=NULL)
	{
		if(node->Aadhar_Number==aadhar)
		{
			return 1;
		}
		node=node->next;
	}
	return 0;
}
