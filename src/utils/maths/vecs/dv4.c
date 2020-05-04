#ifndef MATHS_dVECS_4_H
#define MATHS_dVECS_4_H

#include "../vecs.h"

void dvec4s_set(dvec4 *vec0, FLOAT v0, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec0);
	vec0->d[0] = v0;
	vec0->d[1] = v1;
	vec0->d[2] = v2;
	vec0->d[3] = v3;
}
void dvec4v_set(dvec4 *vec0, const dvec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	memcpy(vec0, vec1, sizeof(dvec4));
}
void dvec4_set(dvec4 *vec0, FLOAT v1[4])
{
	assert(vec0);
	memcpy(vec0->d, v1, 4 * sizeof(FLOAT));
}

void dvec4s_mul(dvec4 *vec0, FLOAT v0, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec0);
	vec0->d[0] *= v0;
	vec0->d[1] *= v1;
	vec0->d[2] *= v2;
	vec0->d[3] *= v3;
}
void dvec4_mul(dvec4 *vec0, FLOAT v1[4])
{
	assert(vec0);
	vec0->d[0] *= v1[0];
	vec0->d[1] *= v1[1];
	vec0->d[2] *= v1[2];
	vec0->d[3] *= v1[3];
}
void dvec4u_mul(dvec4 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] *= v1;
	vec0->d[1] *= v1;
	vec0->d[2] *= v1;
	vec0->d[3] *= v1;
}
void dvec4v_mul(dvec4 *vec0, const dvec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] *= vec1->d[0];
	vec0->d[1] *= vec1->d[1];
	vec0->d[2] *= vec1->d[2];
	vec0->d[3] *= vec1->d[3];
}

void dvec4s_add(dvec4 *vec0, FLOAT v0, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec0);
	vec0->d[0] += v0;
	vec0->d[1] += v1;
	vec0->d[2] += v2;
	vec0->d[3] += v3;
}
void dvec4_add(dvec4 *vec0, FLOAT v1[4])
{
	assert(vec0);
	vec0->d[0] += v1[0];
	vec0->d[1] += v1[1];
	vec0->d[2] += v1[2];
	vec0->d[3] += v1[3];
}
void dvec4u_add(dvec4 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] += v1;
	vec0->d[1] += v1;
	vec0->d[2] += v1;
	vec0->d[3] += v1;
}
void dvec4v_add(dvec4 *vec0, const dvec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] += vec1->d[0];
	vec0->d[1] += vec1->d[1];
	vec0->d[2] += vec1->d[2];
	vec0->d[3] += vec1->d[3];
}

void dvec4s_sub(dvec4 *vec0, FLOAT v0, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec0);
	vec0->d[0] -= v0;
	vec0->d[1] -= v1;
	vec0->d[2] -= v2;
	vec0->d[3] -= v3;
}
void dvec4_sub(dvec4 *vec0, FLOAT v1[4])
{
	assert(vec0);
	vec0->d[0] -= v1[0];
	vec0->d[1] -= v1[1];
	vec0->d[2] -= v1[2];
	vec0->d[3] -= v1[3];
}
void dvec4u_sub(dvec4 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] -= v1;
	vec0->d[1] -= v1;
	vec0->d[2] -= v1;
	vec0->d[3] -= v1;
}
void dvec4v_sub(dvec4 *vec0, const dvec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] -= vec1->d[0];
	vec0->d[1] -= vec1->d[1];
	vec0->d[2] -= vec1->d[2];
	vec0->d[3] -= vec1->d[3];
}

FLOAT dvec4_mag(const dvec4 *vec0)
{
	return sqrt(pow(vec0->d[0], 2) + pow(vec0->d[1], 2) +
		    pow(vec0->d[2], 2) + pow(vec0->d[3], 2));
}
#endif
