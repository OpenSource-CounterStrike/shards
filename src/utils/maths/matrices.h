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
void imat2x2s_set(imat2x2 *mat0, INT a, INT b, INT c, INT d);
void imat2x2u_set(imat2x2 *mat0, INT v0);
void imat2x2_set(imat2x2 *mat0, INT v0[4]);

typedef union imat3x2 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f;
	};
#endif
	INT dat[6];
} imat3x2;
void imat3x2s_set(imat3x2 *mat0, INT a, INT b, INT c, INT d, INT e, INT f);
void imat3x2u_set(imat3x2 *mat0, INT v0);
void imat3x2_set(imat3x2 *mat0, INT v0[6]);

typedef union imat3x3 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h, i;
	};
#endif
	INT dat[9];
} imat3x3;
void imat3x3s_set(imat3x3 *mat0, INT a, INT b, INT c, INT d, INT e, INT f,
		  INT g, INT h, INT i);
void imat3x3u_set(imat3x3 *mat0, INT v0);
void imat3x3_set(imat3x3 *mat0, INT v0[9]);

typedef union imat4x2 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h;
	};
#endif
	INT dat[8];
} imat4x2;
void imat4x2s_set(imat4x2 *mat0, INT a, INT b, INT c, INT d, INT e, INT f,
		  INT g, INT h);
void imat4x2u_set(imat4x2 *mat0, INT v0);
void imat4x2_set(imat4x2 *mat0, INT v0[8]);

typedef union imat4x3 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h, i, j, k, l;
	};
#endif
	INT dat[12];
} imat4x3;
void imat4x3s_set(imat4x3 *mat0, INT a, INT b, INT c, INT d, INT e, INT f,
		  INT g, INT h, INT i, INT j, INT k, INT l);
void imat4x3u_set(imat4x3 *mat0, INT v0);
void imat4x3_set(imat4x3 *mat0, INT v0[12]);

typedef union imat4x4 {
#if MATH_USE_STRUCTS
	struct {
		INT a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	};
#endif
	INT dat[16];
} imat4x4;
void imat4x4s_set(imat4x4 *mat0, INT a, INT b, INT c, INT d, INT e, INT f,
		  INT g, INT h, INT i, INT j, INT k, INT l, INT m, INT n, INT o,
		  INT p);
void imat4x4u_set(imat4x4 *mat0, INT v0);
void imat4x4_set(imat4x4 *mat0, INT v0[16]);

typedef union dmat2x2 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d;
	};
#endif
	FLOAT dat[4];
} dmat2x2;
void dmat2x2s_set(dmat2x2 *mat0, FLOAT a, FLOAT b, FLOAT c, FLOAT d);
void dmat2x2u_set(dmat2x2 *mat0, FLOAT v0);
void dmat2x2_set(dmat2x2 *mat0, FLOAT v0[4]);

typedef union dmat3x2 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f;
	};
#endif
	FLOAT dat[6];
} dmat3x2;
void dmat3x2s_set(dmat3x2 *mat0, FLOAT a, FLOAT b, FLOAT c, FLOAT d, FLOAT e,
		  FLOAT f);
void dmat3x2u_set(dmat3x2 *mat0, FLOAT v0);
void dmat3x2_set(dmat3x2 *mat0, FLOAT v0[6]);

typedef union dmat3x3 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h, i;
	};
#endif
	FLOAT dat[9];
} dmat3x3;
void dmat3x3s_set(dmat3x3 *mat0, FLOAT a, FLOAT b, FLOAT c, FLOAT d, FLOAT e,
		  FLOAT f, FLOAT g, FLOAT h, FLOAT i);
void dmat3x3u_set(dmat3x3 *mat0, FLOAT v0);
void dmat3x3_set(dmat3x3 *mat0, FLOAT v0[9]);

typedef union dmat4x2 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h;
	};
#endif
	FLOAT dat[8];
} dmat4x2;
void dmat4x2s_set(dmat4x2 *mat0, FLOAT a, FLOAT b, FLOAT c, FLOAT d, FLOAT e,
		  FLOAT f, FLOAT g, FLOAT h);
void dmat4x2u_set(dmat4x2 *mat0, FLOAT v0);
void dmat4x2_set(dmat4x2 *mat0, FLOAT v0[8]);

typedef union dmat4x3 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h, i, j, k, l;
	};
#endif
	FLOAT dat[12];
} dmat4x3;
void dmat4x3s_set(dmat4x3 *mat0, FLOAT a, FLOAT b, FLOAT c, FLOAT d, FLOAT e,
		  FLOAT f, FLOAT g, FLOAT h, FLOAT i, FLOAT j, FLOAT k,
		  FLOAT l);
void dmat4x3u_set(dmat4x3 *mat0, FLOAT v0);
void dmat4x3_set(dmat4x3 *mat0, FLOAT v0[12]);

typedef union dmat4x4 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	};
#endif
	FLOAT dat[16];
} dmat4x4;
void dmat4x4s_set(dmat4x4 *mat0, FLOAT a, FLOAT b, FLOAT c, FLOAT d, FLOAT e,
		  FLOAT f, FLOAT g, FLOAT h, FLOAT i, FLOAT j, FLOAT k, FLOAT l,
		  FLOAT m, FLOAT n, FLOAT o, FLOAT p);
void dmat4x4u_set(dmat4x4 *mat0, FLOAT v0);
void dmat4x4_set(dmat4x4 *mat0, FLOAT v0[16]);

#endif
