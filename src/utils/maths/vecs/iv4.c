#ifndef MATHS_iVECS_4_H
#define MATHS_iVECS_4_H

#include "../vecs.h"

void ivec4s_set(ivec4 *vec0, INT v0, INT v1, INT v2, INT v3)
{
	assert(vec0);
	vec0->d[0] = v0;
	vec0->d[1] = v1;
	vec0->d[2] = v2;
	vec0->d[3] = v3;
}
void ivec4v_set(ivec4 *vec0, const ivec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	memcpy(vec0, vec1, sizeof(ivec4));
}
void ivec4_set(ivec4 *vec0, INT v1[4])
{
	assert(vec0);
	memcpy(vec0->d, v1, 4 * sizeof(INT));
}

void ivec4s_mul(ivec4 *vec0, INT v0, INT v1, INT v2, INT v3)
{
	assert(vec0);
	vec0->d[0] *= v0;
	vec0->d[1] *= v1;
	vec0->d[2] *= v2;
	vec0->d[3] *= v3;
}
void ivec4_mul(ivec4 *vec0, INT v1[4])
{
	assert(vec0);
	vec0->d[0] *= v1[0];
	vec0->d[1] *= v1[1];
	vec0->d[2] *= v1[2];
	vec0->d[3] *= v1[3];
}
void ivec4u_mul(ivec4 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] *= v1;
	vec0->d[1] *= v1;
	vec0->d[2] *= v1;
	vec0->d[3] *= v1;
}
void ivec4v_mul(ivec4 *vec0, const ivec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] *= vec1->d[0];
	vec0->d[1] *= vec1->d[1];
	vec0->d[2] *= vec1->d[2];
	vec0->d[3] *= vec1->d[3];
}

void ivec4s_add(ivec4 *vec0, INT v0, INT v1, INT v2, INT v3)
{
	assert(vec0);
	vec0->d[0] += v0;
	vec0->d[1] += v1;
	vec0->d[2] += v2;
	vec0->d[3] += v3;
}
void ivec4_add(ivec4 *vec0, INT v1[4])
{
	assert(vec0);
	vec0->d[0] += v1[0];
	vec0->d[1] += v1[1];
	vec0->d[2] += v1[2];
	vec0->d[3] += v1[3];
}
void ivec4u_add(ivec4 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] += v1;
	vec0->d[1] += v1;
	vec0->d[2] += v1;
	vec0->d[3] += v1;
}
void ivec4v_add(ivec4 *vec0, const ivec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] += vec1->d[0];
	vec0->d[1] += vec1->d[1];
	vec0->d[2] += vec1->d[2];
	vec0->d[3] += vec1->d[3];
}

void ivec4s_sub(ivec4 *vec0, INT v0, INT v1, INT v2, INT v3)
{
	assert(vec0);
	vec0->d[0] -= v0;
	vec0->d[1] -= v1;
	vec0->d[2] -= v2;
	vec0->d[3] -= v3;
}
void ivec4_sub(ivec4 *vec0, INT v1[4])
{
	assert(vec0);
	vec0->d[0] -= v1[0];
	vec0->d[1] -= v1[1];
	vec0->d[2] -= v1[2];
	vec0->d[3] -= v1[3];
}
void ivec4u_sub(ivec4 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] -= v1;
	vec0->d[1] -= v1;
	vec0->d[2] -= v1;
	vec0->d[3] -= v1;
}
void ivec4v_sub(ivec4 *vec0, const ivec4 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] -= vec1->d[0];
	vec0->d[1] -= vec1->d[1];
	vec0->d[2] -= vec1->d[2];
	vec0->d[3] -= vec1->d[3];
}

FLOAT ivec4_mag(const ivec4 *vec0)
{
	return sqrt(pow(vec0->d[0], 2) + pow(vec0->d[1], 2) +
		    pow(vec0->d[2], 2) + pow(vec0->d[3], 2));
}
#endif
