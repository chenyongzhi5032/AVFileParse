#include "StblBox.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// StblBox
StblBox::StblBox()
{
}

StblBox::~StblBox()
{
}

BaseBox* StblBox::CreateObject()
{
	return new StblBox();
}