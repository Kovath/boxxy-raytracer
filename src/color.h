#ifndef BOXXY_COLOR_H
#define BOXXY_COLOR_H

#include <cstdint>

class Color {
public:
	// constructors
	Color(float r, float g, float b);

	// access
	float r() const;
	float g() const;
	float b() const;

	// operators
	Color operator+=(const Color& color);
	Color operator/=(const Color& color);
	Color operator/=(const float n);
	Color operator*=(const Color& color);
	Color operator*=(const float n);

private:
	float r_value, g_value, b_value;
};

#endif
