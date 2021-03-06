#pragma once

#include <iostream>
#include <time.h>
#include <vector>
#include <string>
using namespace std;

#define MAKEGET(Type, Value)	\
	Type Get##Value(){return Value;} 
#define MAKESET(Type, Value)	\
	void Set##Value(Type val){Value = val;}
#define MAKEGETSET(Type, Value) \
	MAKEGET(Type, Value) MAKESET(Type, Value)

#include "Item.h"
#include "Player.h"
#include "Store.h"