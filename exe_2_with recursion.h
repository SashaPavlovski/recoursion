#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)


typedef struct Leaf {
	int level;

	struct Leaf* Left;
	struct Leaf* Right;
	struct Leaf* Parent;

	int Val;
}TLeaf;


TLeaf* Root;



