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

typedef union imat2x2 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d;
	};
#endif
	INT dat[4];
} imat2x2;

typedef union imat3x2 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f;
	};
#endif
	INT dat[6];
} imat3x2;

typedef union imat3x3 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h, i;
	};
#endif
	INT dat[9];
} imat3x3;

typedef union imat4x2 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h;
	};
#endif
	INT dat[8];
} imat4x2;

typedef union imat4x3 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h, i, j, k, l;
	};
#endif
	INT dat[12];
} imat4x3;

typedef union imat4x4 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	};
#endif
	INT dat[16];
} imat4x4;

typedef union dmat2x2 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d;
	};
#endif
	FLOAT dat[4];
} dmat2x2;

typedef union dmat3x2 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f;
	};
#endif
	FLOAT dat[6];
} dmat3x2;

typedef union dmat3x3 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h, i;
	};
#endif
	FLOAT dat[9];
} dmat3x3;

typedef union dmat4x2 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h;
	};
#endif
	FLOAT dat[8];
} dmat4x2;

typedef union dmat4x3 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h, i, j, k, l;
	};
#endif
	FLOAT dat[12];
} dmat4x3;

typedef union dmat4x4 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	};
#endif
	FLOAT dat[16];
} dmat4x4;

#endif
