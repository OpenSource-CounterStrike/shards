#ifndef MATHS_dVECS_3_H
#define MATHS_dVECS_3_H

#include "../vecs.h"

void dvec3s_set(dvec3 *vec0, FLOAT v0, FLOAT v1, FLOAT v2)
{
	assert(vec0);
	vec0->d[0] = v0;
	vec0->d[1] = v1;
	vec0->d[2] = v2;
}
void dvec3v_set(dvec3 *vec0, const dvec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	memcpy(vec0, vec1, sizeof(dvec3));
}
void dvec3_set(dvec3 *vec0, FLOAT v1[3])
{
	assert(vec0);
	memcpy(vec0->d, v1, 3 * sizeof(FLOAT));
}

void dvec3s_mul(dvec3 *vec0, FLOAT v0, FLOAT v1, FLOAT v2)
{
	assert(vec0);
	vec0->d[0] *= v0;
	vec0->d[1] *= v1;
	vec0->d[2] *= v2;
}
void dvec3_mul(dvec3 *vec0, FLOAT v1[3])
{
	assert(vec0);
	vec0->d[0] *= v1[0];
	vec0->d[1] *= v1[1];
	vec0->d[2] *= v1[2];
}
void dvec3u_mul(dvec3 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] *= v1;
	vec0->d[1] *= v1;
	vec0->d[2] *= v1;
}
void dvec3v_mul(dvec3 *vec0, const dvec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] *= vec1->d[0];
	vec0->d[1] *= vec1->d[1];
	vec0->d[2] *= vec1->d[2];
}

void dvec3s_add(dvec3 *vec0, FLOAT v0, FLOAT v1, FLOAT v2)
{
	assert(vec0);
	vec0->d[0] += v0;
	vec0->d[1] += v1;
	vec0->d[2] += v2;
}
void dvec3_add(dvec3 *vec0, FLOAT v1[3])
{
	assert(vec0);
	vec0->d[0] += v1[0];
	vec0->d[1] += v1[1];
	vec0->d[2] += v1[2];
}
void dvec3u_add(dvec3 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] += v1;
	vec0->d[1] += v1;
	vec0->d[2] += v1;
}
void dvec3v_add(dvec3 *vec0, const dvec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] += vec1->d[0];
	vec0->d[1] += vec1->d[1];
	vec0->d[2] += vec1->d[2];
}

void dvec3s_sub(dvec3 *vec0, FLOAT v0, FLOAT v1, FLOAT v2)
{
	assert(vec0);
	vec0->d[0] -= v0;
	vec0->d[1] -= v1;
	vec0->d[2] -= v2;
}
void dvec3_sub(dvec3 *vec0, FLOAT v1[3])
{
	assert(vec0);
	vec0->d[0] -= v1[0];
	vec0->d[1] -= v1[1];
	vec0->d[2] -= v1[2];
}
void dvec3u_sub(dvec3 *vec0, FLOAT v1)
{
	assert(vec0);
	vec0->d[0] -= v1;
	vec0->d[1] -= v1;
	vec0->d[2] -= v1;
}
void dvec3v_sub(dvec3 *vec0, const dvec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] -= vec1->d[0];
	vec0->d[1] -= vec1->d[1];
	vec0->d[2] -= vec1->d[2];
}

FLOAT dvec3_mag(const dvec3 *vec0)
{
	return sqrt(pow(vec0->d[0], 2) + pow(vec0->d[1], 2) +
		    pow(vec0->d[2], 2));
}
#endif
