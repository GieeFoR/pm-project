#include "Bitmap.h"

#include <iostream>

class ArrayBitmap : public Bitmap {
public:
	friend std::ostream& operator<<(std::ostream&, const ArrayBitmap&);


	ArrayBitmap(unsigned int width, unsigned int height);

	unsigned int width() const;
	unsigned int height() const;
	//bool& operator()(unsigned x, unsigned y);
	//bool operator() (unsigned x, unsigned y) const;

	~ArrayBitmap();
private:
	unsigned int width_;
	unsigned int height_;

	bool **bitmap_;
};

std::ostream& operator<<(std::ostream& out, const ArrayBitmap& bitmap);