#ifndef MATHS_iVECS_2_H
#define MATHS_iVECS_2_H

#include "../vecs.h"

void ivec2s_set(ivec2 *vec0, INT v0, INT v1)
{
	assert(vec0);
	vec0->d[0] = v0;
	vec0->d[1] = v1;
}
void ivec2v_set(ivec2 *vec0, const ivec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	memcpy(vec0, vec1, sizeof(ivec2));
}
void ivec2_set(ivec2 *vec0, INT v1[2])
{
	assert(vec0);
	memcpy(vec0->d, v1, 2 * sizeof(INT));
}

void ivec2s_mul(ivec2 *vec0, INT v0, INT v1)
{
	assert(vec0);
	vec0->d[0] *= v0;
	vec0->d[1] *= v1;
}
void ivec2_mul(ivec2 *vec0, INT v1[2])
{
	assert(vec0);
	vec0->d[0] *= v1[0];
	vec0->d[1] *= v1[1];
}
void ivec2u_mul(ivec2 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] *= v1;
	vec0->d[1] *= v1;
}
void ivec2v_mul(ivec2 *vec0, const ivec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] *= vec1->d[0];
	vec0->d[1] *= vec1->d[1];
}

void ivec2s_add(ivec2 *vec0, INT v0, INT v1)
{
	assert(vec0);
	vec0->d[0] += v0;
	vec0->d[1] += v1;
}
void ivec2_add(ivec2 *vec0, INT v1[2])
{
	assert(vec0);
	vec0->d[0] += v1[0];
	vec0->d[1] += v1[1];
}
void ivec2u_add(ivec2 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] += v1;
	vec0->d[1] += v1;
}
void ivec2v_add(ivec2 *vec0, const ivec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] += vec1->d[0];
	vec0->d[1] += vec1->d[1];
}

void ivec2s_sub(ivec2 *vec0, INT v0, INT v1)
{
	assert(vec0);
	vec0->d[0] -= v0;
	vec0->d[1] -= v1;
}
void ivec2_sub(ivec2 *vec0, INT v1[2])
{
	assert(vec0);
	vec0->d[0] -= v1[0];
	vec0->d[1] -= v1[1];
}
void ivec2u_sub(ivec2 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] -= v1;
	vec0->d[1] -= v1;
}
void ivec2v_sub(ivec2 *vec0, const ivec2 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] -= vec1->d[0];
	vec0->d[1] -= vec1->d[1];
}

FLOAT ivec2_mag(const ivec2 *vec0)
{
	return sqrt(pow(vec0->d[0], 2) + pow(vec0->d[1], 2));
}
#endif
