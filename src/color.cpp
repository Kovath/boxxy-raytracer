#include "color.h"

Color::Color(uint8_t r, uint8_t g, uint8_t b) : r_value(r), g_value(g), b_value(b) {}

// accessor functions
uint8_t Color::r() { return r_value; }
uint8_t Color::g() { return g_value; }
uint8_t Color::b() { return b_value; }


// OPERATOR FUNCTIONS
Color Color::operator+(const Color& a) {
	return Color(this->r_value + a.r_value, this->g_value + a.b_value, this->b_value + a.b_value);
}

Color Color::operator+=(const Color& a) {
	this->r_value += a.r_value;
	this->g_value += a.g_value;
	this->b_value += a.b_value;
	return *this;
}
