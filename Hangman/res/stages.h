#include <stdio.h>
#include <iostream>

#include "Functionality.h"

#if _DEBUG
class stage
{
public:
	void stage1();
	void stage2();
	void stage3();
	void stage4();
	void stage5();
	void chooseStage(int number);
};
#else
class stage
{
	void stage1();
	void stage2();
	void stage3();
	void stage4();
	void stage5();
public:
	void chooseStage(int number);
};

#endif



