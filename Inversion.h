#pragma once
#include "Transformation.h"

class Inversion : public Transformation {
public:
	void transform(Bitmap& bitmap);
};
