#pragma once

class Bitmap {
public:
	virtual unsigned height() const = 0;
	virtual unsigned width() const = 0;
	virtual bool& operator()(unsigned x, unsigned y) = 0;
	virtual bool operator() (unsigned x, unsigned y) const = 0;
	
	virtual ~Bitmap() {}
};
