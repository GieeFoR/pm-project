#pragma once
#include "Bitmap.h"

class Transformation {
public:
	virtual void transform(Bitmap&) = 0;
};
