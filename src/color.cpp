#include "color.h"
#include <iostream>

Color::Color(float r, float g, float b) : r_value(r), g_value(g), b_value(b) {}

// accessor functions
float Color::r() const { return r_value; }
float Color::g() const { return g_value; }
float Color::b() const { return b_value; }


// OPERATOR FUNCTIONS
Color Color::operator+=(const Color& color) {
	this->r_value += color.r();
	this->g_value += color.g();
	this->b_value += color.b();
	return *this;
}

Color Color::operator*=(const Color& color) {
	this->r_value *= color.r();
	this->g_value *= color.g();
	this->b_value *= color.b();
	return *this;
}

Color Color::operator*=(const float n) {
	this->r_value *= n;
	this->g_value *= n;
	this->b_value *= n;
	return *this;
}

Color Color::operator/=(const Color& color) {
	this->r_value /= color.r();
	this->g_value /= color.g();
	this->b_value /= color.b();
	return *this;
}

Color Color::operator/=(const float n) {
	this->r_value /= n;
	this->g_value /= n;
	this->b_value /= n;
	return *this;
}





// NON MEMBER OPERATOR FUNCTIONS
Color operator+(const Color& c1, const Color& c2) {
	return Color(c1.r() + c2.r(), c1.g() + c2.g(), c1.b() + c2.b());
}

Color operator*(const Color& c1, const Color& c2) {
	return Color(c1.r() * c2.r(), c1.g() * c2.g(), c1.b() * c2.b());
}

Color operator*(const Color& color, const float n) {
	return Color(color.r() * n, color.g() * n, color.b() * n);
}

Color operator*(const float n, const Color& color) {
	return color * n;
}

Color operator/(const Color& c1, const Color& c2) {
	return Color(c1.r() / c2.r(), c1.g() / c2.g(), c1.b() / c2.b());
}

Color operator/(const Color& color, const float n) {
	return Color(color.r() / n, color.g() / n, color.b() / n);
}

std::ostream& operator<<(std::ostream& o, const Color &color) {
    return o << "Color(" << color.r() << ", " << color.g() << ", " << color.b() << ")";
}