#pragma once

#define FUNC1(a)  (a+3)

#define MAKEGET(Type, Value)	\
	Type Get##Value(){return Value;} 
#define MAKESET(Type, Value)	\
	void Set##Value(Type val){Value = val;}
#define MAKEGETSET(Type, Value) \
	MAKEGET(Type, Value) MAKESET(Type, Value)

#include <time.h>
#include <Windows.h>
//c++라이브러리 
#include <iostream>
#include <string> 
#include <vector>
using namespace std;

#include "SRPPlayer.h"
#include "SRP.h"