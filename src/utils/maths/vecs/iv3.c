#ifndef MATHS_iVECS_3_H
#define MATHS_iVECS_3_H

#include "../vecs.h"

void ivec3s_set(ivec3 *vec0, INT v0, INT v1, INT v2)
{
	assert(vec0);
	vec0->d[0] = v0;
	vec0->d[1] = v1;
	vec0->d[2] = v2;
}
void ivec3v_set(ivec3 *vec0, const ivec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	memcpy(vec0, vec1, sizeof(ivec3));
}
void ivec3_set(ivec3 *vec0, INT v1[3])
{
	assert(vec0);
	memcpy(vec0->d, v1, 3 * sizeof(INT));
}

void ivec3s_mul(ivec3 *vec0, INT v0, INT v1, INT v2)
{
	assert(vec0);
	vec0->d[0] *= v0;
	vec0->d[1] *= v1;
	vec0->d[2] *= v2;
}
void ivec3_mul(ivec3 *vec0, INT v1[3])
{
	assert(vec0);
	vec0->d[0] *= v1[0];
	vec0->d[1] *= v1[1];
	vec0->d[2] *= v1[2];
}
void ivec3u_mul(ivec3 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] *= v1;
	vec0->d[1] *= v1;
	vec0->d[2] *= v1;
}
void ivec3v_mul(ivec3 *vec0, const ivec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] *= vec1->d[0];
	vec0->d[1] *= vec1->d[1];
	vec0->d[2] *= vec1->d[2];
}

void ivec3s_add(ivec3 *vec0, INT v0, INT v1, INT v2)
{
	assert(vec0);
	vec0->d[0] += v0;
	vec0->d[1] += v1;
	vec0->d[2] += v2;
}
void ivec3_add(ivec3 *vec0, INT v1[3])
{
	assert(vec0);
	vec0->d[0] += v1[0];
	vec0->d[1] += v1[1];
	vec0->d[2] += v1[2];
}
void ivec3u_add(ivec3 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] += v1;
	vec0->d[1] += v1;
	vec0->d[2] += v1;
}
void ivec3v_add(ivec3 *vec0, const ivec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] += vec1->d[0];
	vec0->d[1] += vec1->d[1];
	vec0->d[2] += vec1->d[2];
}

void ivec3s_sub(ivec3 *vec0, INT v0, INT v1, INT v2)
{
	assert(vec0);
	vec0->d[0] -= v0;
	vec0->d[1] -= v1;
	vec0->d[2] -= v2;
}
void ivec3_sub(ivec3 *vec0, INT v1[3])
{
	assert(vec0);
	vec0->d[0] -= v1[0];
	vec0->d[1] -= v1[1];
	vec0->d[2] -= v1[2];
}
void ivec3u_sub(ivec3 *vec0, INT v1)
{
	assert(vec0);
	vec0->d[0] -= v1;
	vec0->d[1] -= v1;
	vec0->d[2] -= v1;
}
void ivec3v_sub(ivec3 *vec0, const ivec3 *vec1)
{
	assert(vec0);
	assert(vec1);
	vec0->d[0] -= vec1->d[0];
	vec0->d[1] -= vec1->d[1];
	vec0->d[2] -= vec1->d[2];
}

FLOAT ivec3_mag(const ivec3 *vec0)
{
	return sqrt(pow(vec0->d[0], 2) + pow(vec0->d[1], 2) +
		    pow(vec0->d[2], 2));
}
#endif
