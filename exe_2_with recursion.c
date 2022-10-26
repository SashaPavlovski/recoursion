#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "exe_2_with recursion.h"
#pragma warning(disable:4996)

void AddLeaf(TLeaf* curr, int val)
{
	TLeaf* newLeaf = (TLeaf*)malloc(sizeof(TLeaf));
	newLeaf->Val = val;
	newLeaf->Left = NULL;
	newLeaf->Right = NULL;
	if (Root == NULL)
	{
		Root = newLeaf;
		newLeaf->Parent = NULL;
	}
	else
	{
		if (curr == NULL)
		{
			curr = Root;
		}
		if(curr->Val < val)
		{
			if (curr->Right == NULL)
			{
				curr->Right = newLeaf;
				newLeaf->Parent = curr;
			}
			else
			{
				AddLeaf(curr->Right, val);
			}
		}
		else
		{
			if (curr->Left == NULL)
			{
				curr->Left = newLeaf;
				newLeaf->Parent = curr;
			}
			else
			{
				AddLeaf(curr->Left, val);
			}
		}
	}

}


void printTree(TLeaf* leaf)
{
	if (leaf == NULL) {
		return;
	}

	printTree(leaf->Left);

	printf("%d\n", leaf->Val);

	printTree(leaf->Right);
}



#define DEBUG
int main()
{

#ifdef DEBUG
	Root = NULL;
	AddLeaf(NULL, 3);
	AddLeaf(NULL, 9);
	AddLeaf(NULL, 4);
	AddLeaf(NULL, 2);
	AddLeaf(NULL, 223);
	AddLeaf(NULL, 23);
	AddLeaf(NULL, 5);
	AddLeaf(NULL, 123);
	AddLeaf(NULL, 322);
	AddLeaf(NULL, 10);
	AddLeaf(NULL, 100);
#endif // DEBUG

	printTree(Root);
	return 0;
}