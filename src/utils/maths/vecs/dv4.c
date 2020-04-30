#ifndef MATHS_dVECS_4_H
#define MATHS_dVECS_4_H

#include "../vecs.h"

void dvec4s_set(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4)
{
	assert(vec);
	vec->d[0] = v1;
	vec->d[1] = v2;
	vec->d[2] = v3;
	vec->d[3] = v4;
}
void dvec4v_set(dvec4 *vec, const dvec4 *vec2)
{
	assert(vec);
	assert(vec2);
	memcpy(vec, vec2, sizeof(vec));
}
void dvec4s_set(dvec4 *vec, FLOAT v[4])
{
	assert(vec);
	memcpy(vec - d, v, 4 * sizeof(FLOAT));
}

void dvec4s_mul(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4)
{
	assert(vec);
	vec->d[0] *= v1;
	vec->d[1] *= v2;
	vec->d[2] *= v3;
	vec->d[3] *= v4;
}
void dvec4_mul(dvec4 *vec, FLOAT v[4])
{
	assert(vec);
	vec->d[0] *= v[0];
	vec->d[1] *= v[1];
	vec->d[2] *= v[2];
	vec->d[3] *= v[3];
}
void dvec4u_mul(dvec4 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] *= v;
	vec->d[1] *= v;
	vec->d[2] *= v;
	vec->d[3] *= v;
}
void dvec4v_mul(dvec4 *vec, const dvec4 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] *= vec2->d[0];
	vec->d[1] *= vec2->d[1];
	vec->d[2] *= vec2->d[2];
	vec->d[3] *= vec2->d[3];
}

void dvec4s_add(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4)
{
	assert(vec);
	vec->d[0] += v1;
	vec->d[1] += v2;
	vec->d[2] += v3;
	vec->d[3] += v4;
}
void dvec4_add(dvec4 *vec, FLOAT v[4])
{
	assert(vec);
	vec->d[0] += v[0];
	vec->d[1] += v[1];
	vec->d[2] += v[2];
	vec->d[3] += v[3];
}
void dvec4u_add(dvec4 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] += v;
	vec->d[1] += v;
	vec->d[2] += v;
	vec->d[3] += v;
}
void dvec4v_add(dvec4 *vec, const dvec4 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] += vec2->d[0];
	vec->d[1] += vec2->d[1];
	vec->d[2] += vec2->d[2];
	vec->d[3] += vec2->d[3];
}

void dvec4s_sub(dvec4 *vec, FLOAT v1, FLOAT v2, FLOAT v3, FLOAT v4)
{
	assert(vec);
	vec->d[0] -= v1;
	vec->d[1] -= v2;
	vec->d[2] -= v3;
	vec->d[3] -= v4;
}
void dvec4_sub(dvec4 *vec, FLOAT v[4])
{
	assert(vec);
	vec->d[0] -= v[0];
	vec->d[1] -= v[1];
	vec->d[2] -= v[2];
	vec->d[3] -= v[3];
}
void dvec4u_sub(dvec4 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] -= v;
	vec->d[1] -= v;
	vec->d[2] -= v;
	vec->d[3] -= v;
}
void dvec4v_sub(dvec4 *vec, const dvec4 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] -= vec2->d[0];
	vec->d[1] -= vec2->d[1];
	vec->d[2] -= vec2->d[2];
	vec->d[3] -= vec2->d[3];
}

#endif
