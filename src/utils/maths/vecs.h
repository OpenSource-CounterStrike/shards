#ifndef MATHS_VECS_H
#define MATHS_VECS_H

#include "../../config.h"

#define INT MATH_INT
#define FLOAT MATH_FLOAT

typedef union {
	struct {
		INT x;
		INT y;
	};
	INT dat[2];
} ivec2;

#endif
