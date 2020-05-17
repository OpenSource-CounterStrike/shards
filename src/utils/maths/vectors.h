/*
 * Definitions in this file.
 * typedef struct ivec;
 * typedef struct dvec;
 *
 * Naming Conventions for function names:
 * [i/d]vec_[add/sub/mul/set/mag/dot_product/cross_product]()
 * i: integer data
 * d: decimal data
 *
 * */

#ifndef MATHS_VECS_H
#define MATHS_VECS_H

#include <stdint.h>
#include <assert.h>
#include <math.h>
#include <stdarg.h>
#include <string.h>

#include "config.h"

#define INT MATH_INT
#define FLOAT MATH_FLOAT

#define X_OF(vec) vec.dat[0]
#define Y_OF(vec) vec.dat[1]
#define Z_OF(vec) vec.dat[2]
#define W_OF(vec) vec.dat[3]

typedef struct ivec {
	INT *dat;
	size_t length;
} ivec;
ivec *ivec_create(size_t length, const INT *dat);
ivec *ivec_create_list(size_t length, ...);
void ivec_destroy(ivec *vec);
void ivec_set(ivec *vec, size_t length, const INT *dat);
void ivec_set_list(ivec *vec, size_t length, ...);
ivec ivec_mul(const ivec *left, const ivec *right); /* Hadamard Product */
ivec ivec_add(const ivec *left, const ivec *right);
ivec ivec_sub(const ivec *left, const ivec *right);
FLOAT ivec_mag(const ivec *vec);
INT ivec_dot_product(const ivec *right, const ivec *left);
ivec ivec_cross_product(const ivec *right, const ivec *left);

typedef struct dvec {
	FLOAT *dat;
	size_t length;
} dvec;
dvec *dvec_create(size_t length, const FLOAT *dat);
dvec *dvec_create_list(size_t length, ...);
void dvec_destroy(dvec *vec);
void dvec_set(dvec *vec, size_t length, const FLOAT *dat);
dvec dvec_mul(const dvec *left, const dvec *right); /* Hadamard Product */
dvec dvec_add(const dvec *left, const dvec *right);
dvec dvec_sub(const dvec *left, const dvec *right);
FLOAT dvec_mag(const dvec *vec);
FLOAT dvec_dot_product(const dvec *right, const dvec *left);
dvec dvec_cross_product(const dvec *right, const dvec *left);

#endif
