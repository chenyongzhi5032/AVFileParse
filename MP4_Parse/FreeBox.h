#pragma once
#include "BaseBox.h"

/************************************************************************************************************
Free Box

************************************************************************************************************/
class FreeBox : public BaseBox
{
public:
	FreeBox();
	~FreeBox();

	static BaseBox* CreateObject();
};