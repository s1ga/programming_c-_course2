#include<iostream>
#include"Stack.h"

int main()
{
	try
	{
		int flag;
		Stack<int>* stack = new Stack<int>;

		do {
			printf("\n1 - Print stack\n");
			printf("2 - Add elemnt to stack\n");
			printf("3 - Remove element from stack\n");
			printf("4 - Get length of stack\n");
			printf("0 - Exit\n");
			printf("Input function: ");
			scanf_s("%d", &flag);
			printf("\n");

			switch (flag)
			{
			case 1:
				stack->print();
				break;
			case 2:
				int value;
				std::cout << "Input value you want to add: ";
				std::cin >> value;
				stack->push(value);
				break;
			case 3:
				stack->pop();
				std::cout << "Element succesfully removed" << std::endl;
				break;
			case 4:
				std::cout << "Length of the stack: " << stack->getSize() << std::endl;
				break;
			case 0:
				return 0;
			default:
				printf("\nThere are no such function\n\n");
				break;
			}
		} while (flag);
	}
	catch (std::bad_alloc)
	{
		std::cerr << "Out of memory..." << std::endl;
	}
	catch (const char* err)
	{
		std::cerr << err << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unexpected exception" << std::endl;
	}
		
	return 0;
}