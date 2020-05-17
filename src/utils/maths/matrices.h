/*
 * Definitions in this file.
 * typedef union imat2x2;
 * typedef union imat3x2;
 * typedef union imat3x3;
 * typedef union imat4x2;
 * typedef union imat4x3;
 * typedef union imat4x4;
 * typedef union dmat2x2;
 * typedef union dmat3x2;
 * typedef union dmat3x3;
 * typedef union dmat4x2;
 * typedef union dmat4x3;
 * typedef union dmat4x4;
 *
 * Naming Conventions for function names:
 * [i/d]mat[2x2/3x2/3x3/4x2/4x3/4x4][s/u/_]_[add/sub/mul]()
 * i: integer data
 * d: decimal data
 * 2x2: matrix of size 2 by 2
 * 3x2: matrix of size 3 by 2
 * 3x3: matrix of size 3 by 3
 * 4x2: matrix of size 4 by 2
 * 4x3: matrix of size 4 by 3
 * 4x4: matrix of size 4 by 4
 * s: struct based arguments [1]
 * u: uniform based arguments [2]
 * _: array based arguments [3]
 * */

#ifndef MATHS_MATRICES_H
#define MATHS_MATRICES_H

#include <stdint.h>
#include <assert.h>
#include <math.h>

#include "config.h"

#define INT MATH_INT
#define FLOAT MATH_FLOAT

/* imate definitions */
typedef struct imat {
	short rows;
	short columns;
	INT **dat; /* column-major */
} imat;
imat *imat_create(short rows, short columns, INT **dat);
void imat_add(imat *right, imat *left);
void imat_sub(imat *right, imat *left);
imat *imat_mul(imat *right, imat *left);

#endif
