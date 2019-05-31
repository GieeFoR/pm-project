#include "Inversion.h"

void Inversion::transform(Bitmap& bitmap) {
	for (int x = 0; x < bitmap.width(); x++) {
		for (int y = 0; y < bitmap.height(); y++) {
			bitmap(x, y) = !bitmap(x, y);
		}
	}
}
