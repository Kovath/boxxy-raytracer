#include "ray.h"

Ray::Ray(Eigen::Vector3f point, Eigen::Vector3f direction) {
	this->point = point;
	this->direction = direction.normalized();
}

Eigen::Vector3f Ray::get_point() { return point; }
Eigen::Vector3f Ray::get_direction() { return direction; }