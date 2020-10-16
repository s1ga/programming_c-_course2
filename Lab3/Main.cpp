#include<stdio.h>
#include"binaryTree.h"

int main()
{
	int flag;
	int n;
	printf("Input tree leaves count: ");
	scanf_s("%d", &n);

	printf("Init tree: \n");
	Tree* tree1 = new Tree(n);
	Tree* tree2 = new Tree();
	do {
		printf("\n1 - Make a tree copy\n");
		printf("2 - Count of leaves in the tree\n");
		printf("3 - Insert value\n");
		printf("0 - Exit\n");
		printf("Input function: ");
		scanf_s("%d", &flag);
		printf("\n");

		switch (flag)
		{
		case 1:
			tree2->root = tree1->copyTree(tree1->root, tree2->root);
			printf("Tree copy was made succesfully:\n");
			break;
		case 2:
			printf("Leaves count1: ");
			printf("%d\n", tree1->leavesCount(tree1->root));
			printf("Leaves count2: ");
			printf("%d\n", tree2->leavesCount(tree2->root));
			break;
		case 3:
			int value;
			printf("Input value: ");
			scanf_s("%d", &value);
			tree1->insert(value);
			printf("Value inserted!\n");
			break;
		case 0:
			delete tree1, tree2;
			return 0;
		default:
			printf("\nThere are no such function\n\n");
			break;
		}
	} while (flag);
	

	return 0;
}

/*
	1. Copy tree
*/