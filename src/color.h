#ifndef BOXXY_COLOR_H
#define BOXXY_COLOR_H

#include <cstdint>

class Color {
public:
	// constructors
	Color(uint8_t r, uint8_t g, uint8_t b);

	// access
	uint8_t r(), g(), b();

	// operators
	Color operator+(const Color& a);
	Color operator+=(const Color& a);


private:
	float r_value, g_value, b_value;
};

#endif
