#include "stages.h"

void stage::chooseStage(int number)
{
	switch (number)
	{
	case 1:
		stage1();
		break;
	case 2:
		stage2();
		break;
	case 3:
		stage3();
		break;
	case 4:
		stage4();
		break;
	case 5:
		stage5();
		break;
	}
}

void stage::stage1()
{
	basic::clear();
	printf("--------\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("===============\n");
}

void stage::stage2()
{
	basic::clear();
	printf("--------\n");
	printf("|      0\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("===============\n");
}

void stage::stage3()
{
	basic::clear();
	printf("--------\n");
	printf("|      0\n");
	printf("|      |\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("===============\n");
}

void stage::stage4()
{
	basic::clear();
	printf("--------\n");
	printf("|      0\n");
	printf("|     /|\\ \n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("===============\n");
}

void stage::stage5()
{
	basic::clear();
	printf("--------\n");
	printf("|      0\n");
	printf("|     /|\\ \n");
	printf("|     / \\ \n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("===============\n");
}
