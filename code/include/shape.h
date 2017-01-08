//shape properties.

#include "types.h"
#include <vector>

//this class is for defining a shape and it's properties.
class shape
{
	public:
		vector <point> vertexes;
		//shape vertexes(relative). shape is defaultly a diagonal.
		mask_type is_mask(position_type x, position_type y);
		//to determine if mask collides in (x,y) (relative)
};

shape::mask_type is_mask(position_type x, position_type y)
{
	mask_type resault;
	//the resault
	//TODO//check

}
