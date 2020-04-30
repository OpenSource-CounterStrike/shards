#ifndef MATHS_iVECS_4_H
#define MATHS_iVECS_4_H

#include "../vecs.h"

void ivec4s_set(ivec4 *vec, INT v1, INT v2, INT v3, INT v4)
{
	assert(vec);
	vec->d[0] = v1;
	vec->d[1] = v2;
	vec->d[2] = v3;
	vec->d[3] = v4;
}
void ivec4v_set(ivec4 *vec, const ivec4 *vec2)
{
	assert(vec);
	assert(vec2);
	memcpy(vec, vec2, sizeof(vec));
}
void ivec4s_set(ivec4 *vec, INT v[4])
{
	assert(vec);
	memcpy(vec->d, v, 4 * sizeof(INT));
}

void ivec4s_mul(ivec4 *vec, INT v1, INT v2, INT v3, INT v4)
{
	assert(vec);
	vec->d[0] *= v1;
	vec->d[1] *= v2;
	vec->d[2] *= v3;
	vec->d[3] *= v4;
}
void ivec4_mul(ivec4 *vec, INT v[4])
{
	assert(vec);
	vec->d[0] *= v[0];
	vec->d[1] *= v[1];
	vec->d[2] *= v[2];
	vec->d[3] *= v[3];
}
void ivec4u_mul(ivec4 *vec, INT v)
{
	assert(vec);
	vec->d[0] *= v;
	vec->d[1] *= v;
	vec->d[2] *= v;
	vec->d[3] *= v;
}
void ivec4v_mul(ivec4 *vec, const ivec4 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] *= vec2->d[0];
	vec->d[1] *= vec2->d[1];
	vec->d[2] *= vec2->d[2];
	vec->d[3] *= vec2->d[3];
}

void ivec4s_add(ivec4 *vec, INT v1, INT v2, INT v3, INT v4)
{
	assert(vec);
	vec->d[0] += v1;
	vec->d[1] += v2;
	vec->d[2] += v3;
	vec->d[3] += v4;
}
void ivec4_add(ivec4 *vec, INT v[4])
{
	assert(vec);
	vec->d[0] += v[0];
	vec->d[1] += v[1];
	vec->d[2] += v[2];
	vec->d[3] += v[3];
}
void ivec4u_add(ivec4 *vec, INT v)
{
	assert(vec);
	vec->d[0] += v;
	vec->d[1] += v;
	vec->d[2] += v;
	vec->d[3] += v;
}
void ivec4v_add(ivec4 *vec, const ivec4 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] += vec2->d[0];
	vec->d[1] += vec2->d[1];
	vec->d[2] += vec2->d[2];
	vec->d[3] += vec2->d[3];
}

void ivec4s_sub(ivec4 *vec, INT v1, INT v2, INT v3, INT v4)
{
	assert(vec);
	vec->d[0] -= v1;
	vec->d[1] -= v2;
	vec->d[2] -= v3;
	vec->d[3] -= v4;
}
void ivec4_sub(ivec4 *vec, INT v[4])
{
	assert(vec);
	vec->d[0] -= v[0];
	vec->d[1] -= v[1];
	vec->d[2] -= v[2];
	vec->d[3] -= v[3];
}
void ivec4u_sub(ivec4 *vec, INT v)
{
	assert(vec);
	vec->d[0] -= v;
	vec->d[1] -= v;
	vec->d[2] -= v;
	vec->d[3] -= v;
}
void ivec4v_sub(ivec4 *vec, const ivec4 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] -= vec2->d[0];
	vec->d[1] -= vec2->d[1];
	vec->d[2] -= vec2->d[2];
	vec->d[3] -= vec2->d[3];
}

#endif
