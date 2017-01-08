// body properties

#include "point.h"
#include "shape.h"

// this class is body of a physical object.
class body
{
	point mass_center;
	//dynamics mass center of object body
	float_type elasticity;
	//elasticity of object body
	shape body_shape;
	//physical shape of object
};

