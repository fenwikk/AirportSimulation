﻿#pragma once
#include <list>
#include "Runway.h"

/// @brief Holds data for every aircraft to be used in the statistics
class Aircraft
{
public:
	Aircraft(bool startsInAir, int createTime, Runway *runway);

	bool startsInAir() const { return _startsInAir; }
	int createTime() const { return _createTime; }

	int fuel() const { return _fuel; }
	int decreaseFuel() { return _fuel--; }

private:
	int _fuel;
	bool _startsInAir;
	int _createTime;
};
