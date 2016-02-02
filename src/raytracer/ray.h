#ifndef BOXXY_RAY_H
#define BOXXY_RAY_H

#include <Eigen/Dense>

/*
Represents a ray in the scene

Some invariants
- Has a start point
- Has a NORMALIZED direction
- Immutable
*/
class Ray {
public:
	Ray(Eigen::Vector3f point, Eigen::Vector3f direction);

	Eigen::Vector3f get_point();
	Eigen::Vector3f get_direction();
private:
	Eigen::Vector3f point;
	Eigen::Vector3f direction;
};

#endif
