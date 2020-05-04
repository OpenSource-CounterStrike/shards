#ifndef MATHS_dVECS_2_H
#define MATHS_dVECS_2_H

#include "../vecs.h"

void dvec2s_set(dvec2 *vec0, FLOAT v0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] = v0;
	vec0->d[1] = v1;
}
void dvec2v_set(dvec2 *vec0, const dvec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	memcpy(vec0, vec1, sizeof(dvec2));
}
void dvec2_set(dvec2 *vec0, FLOAT v1[2])
{
	assert(vec0);
	memcpy(vec0->d, v1, 2 * sizeof(FLOAT));
}

void dvec2s_mul(dvec2 *vec0, FLOAT v0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] *= v0;
	vec0->d[1] *= v1;
}
void dvec2_mul(dvec2 *vec0, FLOAT v1[2])
{
	assert(vec0);
	vec0->d[0] *= v1[0];
	vec0->d[1] *= v1[1];
}
void dvec2u_mul(dvec2 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] *= v1;
	vec0->d[1] *= v1;
}
void dvec2v_mul(dvec2 *vec0, const dvec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] *= vec1->d[0];
	vec0->d[1] *= vec1->d[1];
}

void dvec2s_add(dvec2 *vec0, FLOAT v0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] += v0;
	vec0->d[1] += v1;
}
void dvec2_add(dvec2 *vec0, FLOAT v1[2])
{
	assert(vec0);
	vec0->d[0] += v1[0];
	vec0->d[1] += v1[1];
}
void dvec2u_add(dvec2 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] += v1;
	vec0->d[1] += v1;
}
void dvec2v_add(dvec2 *vec0, const dvec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] += vec1->d[0];
	vec0->d[1] += vec1->d[1];
}

void dvec2s_sub(dvec2 *vec0, FLOAT v0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] -= v0;
	vec0->d[1] -= v1;
}
void dvec2_sub(dvec2 *vec0, FLOAT v1[2])
{
	assert(vec0);
	vec0->d[0] -= v1[0];
	vec0->d[1] -= v1[1];
}
void dvec2u_sub(dvec2 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] -= v1;
	vec0->d[1] -= v1;
}
void dvec2v_sub(dvec2 *vec0, const dvec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] -= vec1->d[0];
	vec0->d[1] -= vec1->d[1];
	vec0->d[2] -= vec1->d[2];
}

FLOAT dvec2_mag(const dvec2 *vec0)
{
	return sqrt(pow(vec0->d[0], 2) + pow(vec0->d[1], 2));
}
#endif
