#pragma once
#pragma once


#include "Vector.h"
#include "Event.h"
#include <iostream> 
#include <string>
using
namespace
	std;

class
	Dialog :
	public Vector
{
public:
	Dialog(void);
public:
	virtual ~Dialog(void);
	virtual void GetEvent(TEvent& event);
	virtual int Execute();

	virtual void HandleEvent(TEvent& event);
	virtual void ClearEvent(TEvent& event);
	void EndExec();
	int Valid();
protected:
	int EndState;


};