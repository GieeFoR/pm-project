#include "ArrayBitmap.h"

ArrayBitmap::ArrayBitmap(unsigned int height, unsigned int width) : height_(height), width_(width) {
	// TODO: exceptions
	bitmap_ = new bool*[height];
	for (int i = 0; i < height; i++) {
		bitmap_[i] = new bool[width]();
	}
}

unsigned int ArrayBitmap::height() const {
	return height_;
}

unsigned int ArrayBitmap::width() const {
	return width_;
}

bool & ArrayBitmap::operator()(unsigned x, unsigned y) {
	// TODO: validation + exceptions
	return bitmap_[y - 1][x - 1];
}

bool ArrayBitmap::operator()(unsigned x, unsigned y) const {
	// TODO: validation + exceptions
	return bitmap_[y - 1][x - 1];
}

ArrayBitmap::~ArrayBitmap() {
	for (int i = 0; i < height_; i++) {
		delete[] bitmap_[i];
	}
	delete[] bitmap_;
}

std::ostream& operator<<(std::ostream& out, const ArrayBitmap& bitmap) {
	for (int i = 0; i < bitmap.height_; i++) {
		for (int j = 0; j < bitmap.width_; j++) {
			char c = bitmap.bitmap_[i][j] ? '1' : '0';
			out << c << " ";
		}
		out << "\n";
	}

	return out;
}
