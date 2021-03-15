#pragma once

#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include <vector>

using namespace std;

#define MAKEGET(Type, Value)	\
	Type Get##Value(){return Value;} 
#define MAKESET(Type, Value)	\
	void Set##Value(Type val){Value = val;}
#define MAKEGETSET(Type, Value) \
	MAKEGET(Type, Value) MAKESET(Type, Value)

#include "Skill.h"
#include "Character.h"
#include "Item.h"
#include "Inventory.h"
#include "Store.h"
#include "Mop.h"
#include "Map.h"