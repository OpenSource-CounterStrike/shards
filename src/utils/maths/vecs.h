/*
 * Definitions in this file.
 * typedef union ivec2;
 * typedef union ivec3;
 * typedef union ivec4;
 * typedef union dvec2;
 * typedef union dvec3;
 * typedef union dvec4;
 *
 * Naming Conventions for function names:
 * [i/d]vec[2/3/4][s/u/_]_[add/sub/mul]()
 * i: integer data
 * d: decimal data
 * 2: vector of size 2
 * 3: vector of size 3
 * 4: vector of size 4
 * s: struct based arguments [1]
 * u: uniform based arguments [2]
 * _: array based arguments [3]
 *
 * [1]: ex. name_of_func(vec4, x,y,z,w) arguments map directly to the struct
 * [2]: ex. name_of_func(vec4, value) the [mul/add/sub] operation is done on a uniform
 * 			 vector of same type that is default (identitied?) on value.
 * [3]: ex. name_of_func(vec4, arr) the array is directly mapped onto the data of the 
 * 			 vector
 * */

#ifndef MATHS_VECS_H
#define MATHS_VECS_H

#include <stdint.h>
#include <assert.h>
#include <math.h>

#include "config.h"

#define INT MATH_INT
#define FLOAT MATH_FLOAT

typedef union ivec2 {
#if MATH_USE_STRUCTS
	struct {
		INT x;
		INT y;
	};
#endif
	INT d[2];
} ivec2;
void ivec2s_set(ivec2 *vec, INT v1, INT v2);
void ivec2v_set(ivec2 *vec, const ivec2 *vec2);
void ivec2_set(ivec2 *vec, INT v[2]);
void ivec2s_mul(ivec2 *vec, INT v1, INT v2);
void ivec2_mul(ivec2 *vec, INT v[2]);
void ivec2u_mul(ivec2 *vec, INT v);
void ivec2v_mul(ivec2 *vec, const ivec2 *vec2);
void ivec2s_add(ivec2 *vec, INT v1, INT v2);
void ivec2_add(ivec2 *vec, INT v[2]);
void ivec2u_add(ivec2 *vec, INT v);
void ivec2v_add(ivec2 *vec, const ivec2 *vec2);
void ivec2s_sub(ivec2 *vec, INT v1, INT v2);
void ivec2_sub(ivec2 *vec, INT v[2]);
void ivec2u_sub(ivec2 *vec, INT v);
void ivec2v_sub(ivec2 *vec, const ivec2 *vec2);
FLOAT ivec2_mag(const ivec2 *vec);

typedef union ivec3 {
#if MATH_USE_STRUCTS
	struct {
		INT x;
		INT y;
		INT z;
	};
	struct {
		INT r;
		INT g;
		INT b;
	};
#endif
	INT d[3];
} ivec3;
void ivec3s_set(ivec3 *vec, INT v1, INT v2, INT v3);
void ivec3v_set(ivec3 *vec, const ivec3 *vec2);
void ivec3_set(ivec3 *vec, INT v[3]);
void ivec3s_mul(ivec3 *vec, INT v1, INT v2, INT v3);
void ivec3_mul(ivec3 *vec, INT v[3]);
void ivec3u_mul(ivec3 *vec, INT v);
void ivec3v_mul(ivec3 *vec, const ivec3 *vec2);
void ivec3s_add(ivec3 *vec, INT v1, INT v2, INT v3);
void ivec3_add(ivec3 *vec, INT v[3]);
void ivec3u_add(ivec3 *vec, INT v);
void ivec3v_add(ivec3 *vec, const ivec3 *vec2);
void ivec3s_sub(ivec3 *vec, INT v1, INT v2, INT v3);
void ivec3_sub(ivec3 *vec, INT v[3]);
void ivec3u_sub(ivec3 *vec, INT v);
void ivec3v_sub(ivec3 *vec, const ivec3 *vec2);
FLOAT ivec3_mag(const ivec3 *vec);

typedef union ivec4 {
#if MATH_USE_STRUCTS
	struct {
		INT x;
		INT y;
		INT z;
		INT w;
	};
	struct {
		INT r;
		INT g;
		INT b;
		INT a;
	};
#endif
	INT d[4];
} ivec4;
void ivec4s_set(ivec4 *vec, INT v1, INT v2, INT v3, INT v4);
void ivec4v_set(ivec4 *vec, const ivec4 *vec2);
void ivec4_set(ivec4 *vec, INT v[4]);
void ivec4s_mul(ivec4 *vec, INT v1, INT v2, INT v3, INT v4);
void ivec4_mul(ivec4 *vec, INT v[4]);
void ivec4u_mul(ivec4 *vec, INT v);
void ivec4v_mul(ivec4 *vec, const ivec4 *vec2);
void ivec4s_add(ivec4 *vec, INT v1, INT v2, INT v3, INT v4);
void ivec4_add(ivec4 *vec, INT v[4]);
void ivec4u_add(ivec4 *vec, INT v);
void ivec4v_add(ivec4 *vec, const ivec4 *vec2);
void ivec4s_sub(ivec4 *vec, INT v1, INT v2, INT v3, INT v4);
void ivec4_sub(ivec4 *vec, INT v[4]);
void ivec4u_sub(ivec4 *vec, INT v);
void ivec4v_sub(ivec4 *vec, const ivec4 *vec2);
FLOAT ivec4_mag(const ivec4 *vec);

typedef union dvec2 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT x;
		FLOAT y;
	};
#endif
	FLOAT d[2];
} dvec2;
void dvec2s_set(dvec2 *vec, FLOAT v1, FLOAT v2);
void dvec2v_set(dvec2 *vec, const dvec2 *vec2);
void dvec2_set(dvec2 *vec, FLOAT v[2]);
void dvec2s_mul(dvec2 *vec, FLOAT v1, FLOAT v2);
void dvec2_mul(dvec2 *vec, FLOAT v[2]);
void dvec2u_mul(dvec2 *vec, FLOAT v);
void dvec2v_mul(dvec2 *vec, const dvec2 *vec2);
void dvec2s_add(dvec2 *vec, FLOAT v1, FLOAT v2);
void dvec2_add(dvec2 *vec, FLOAT v[2]);
void dvec2u_add(dvec2 *vec, FLOAT v);
void dvec2v_add(dvec2 *vec, const dvec2 *vec2);
void dvec2s_sub(dvec2 *vec, FLOAT v1, FLOAT v2);
void dvec2_sub(dvec2 *vec, FLOAT v[2]);
void dvec2u_sub(dvec2 *vec, FLOAT v);
void dvec2v_sub(dvec2 *vec, const dvec2 *vec2);
FLOAT dvec2_mag(const dvec2 *vec);

typedef union dvec3 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT x;
		FLOAT y;
		FLOAT z;
	};
	struct {
		FLOAT r;
		FLOAT g;
		FLOAT b;
	};
#endif
	FLOAT d[3];
} dvec3;
void dvec3s_set(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3);
void dvec3v_set(dvec3 *vec, const dvec3 *vec2);
void dvec3_set(dvec3 *vec, FLOAT v[3]);
void dvec3s_mul(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3);
void dvec3_mul(dvec3 *vec, FLOAT v[3]);
void dvec3u_mul(dvec3 *vec, FLOAT v);
void dvec3v_mul(dvec3 *vec, const dvec3 *vec2);
void dvec3s_add(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3);
void dvec3_add(dvec3 *vec, FLOAT v[3]);
void dvec3u_add(dvec3 *vec, FLOAT v);
void dvec3v_add(dvec3 *vec, const dvec3 *vec2);
void dvec3s_sub(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3);
void dvec3_sub(dvec3 *vec, FLOAT v[3]);
void dvec3u_sub(dvec3 *vec, FLOAT v);
void dvec3v_sub(dvec3 *vec, const dvec3 *vec2);
FLOAT dvec3_mag(const dvec3 *vec);

typedef union dvec4 {
#if MATH_USE_STRUCTS
	struct {
		FLOAT x;
		FLOAT y;
		FLOAT z;
		FLOAT w;
	};
	struct {
		FLOAT r;
		FLOAT g;
		FLOAT b;
		FLOAT a;
	};
#endif
	FLOAT d[4];
} dvec4;
void dvec4s_set(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4);
void dvec4v_set(dvec4 *vec, const dvec4 *vec2);
void dvec4_set(dvec4 *vec, FLOAT v[4]);
void dvec4s_mul(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4);
void dvec4_mul(dvec4 *vec, FLOAT v[4]);
void dvec4u_mul(dvec4 *vec, FLOAT v);
void dvec4v_mul(dvec4 *vec, const dvec4 *vec2);
void dvec4s_add(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4);
void dvec4_add(dvec4 *vec, FLOAT v[4]);
void dvec4u_add(dvec4 *vec, FLOAT v);
void dvec4v_add(dvec4 *vec, const dvec4 *vec2);
void dvec4s_sub(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4);
void dvec4_sub(dvec4 *vec, FLOAT v[4]);
void dvec4u_sub(dvec4 *vec, FLOAT v);
void dvec4v_sub(dvec4 *vec, const dvec4 *vec2);
FLOAT dvec4_mag(const dvec4 *vec);
#endif
