#ifndef MATHS_iVECS_2_H
#define MATHS_iVECS_2_H

#include "../vecs.h"

void ivec2s_set(ivec2 *vec, INT v1, INT v2)
{
	assert(vec);
	vec->d[0] = v1;
	vec->d[1] = v2;
}
void ivec2v_set(ivec2 *vec, const ivec2 *vec2)
{
	assert(vec);
	assert(vec2);
	memcpy(vec, vec2, sizeof(*vec));
}
void ivec2_set(ivec2 *vec, INT v[2])
{
	assert(vec);
	memcpy(vec->d, v, 2 * sizeof(INT));
}

void ivec2s_mul(ivec2 *vec, INT v1, INT v2)
{
	assert(vec);
	vec->d[0] *= v1;
	vec->d[1] *= v2;
}
void ivec2_mul(ivec2 *vec, INT v[2])
{
	assert(vec);
	vec->d[0] *= v[0];
	vec->d[1] *= v[1];
}
void ivec2u_mul(ivec2 *vec, INT v)
{
	assert(vec);
	vec->d[0] *= v;
	vec->d[1] *= v;
}
void ivec2v_mul(ivec2 *vec, const ivec2 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] *= vec2->d[0];
	vec->d[1] *= vec2->d[1];
}

void ivec2s_add(ivec2 *vec, INT v1, INT v2)
{
	assert(vec);
	vec->d[0] += v1;
	vec->d[1] += v2;
}
void ivec2_add(ivec2 *vec, INT v[2])
{
	assert(vec);
	vec->d[0] += v[0];
	vec->d[1] += v[1];
}
void ivec2u_add(ivec2 *vec, INT v)
{
	assert(vec);
	vec->d[0] += v;
	vec->d[1] += v;
}
void ivec2v_add(ivec2 *vec, const ivec2 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] += vec2->d[0];
	vec->d[1] += vec2->d[1];
}

void ivec2s_sub(ivec2 *vec, INT v1, INT v2)
{
	assert(vec);
	vec->d[0] -= v1;
	vec->d[1] -= v2;
}
void ivec2_sub(ivec2 *vec, INT v[2])
{
	assert(vec);
	vec->d[0] -= v[0];
	vec->d[1] -= v[1];
}
void ivec2u_sub(ivec2 *vec, INT v)
{
	assert(vec);
	vec->d[0] -= v;
	vec->d[1] -= v;
}
void ivec2v_sub(ivec2 *vec, const ivec2 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] -= vec2->d[0];
	vec->d[1] -= vec2->d[1];
}

#endif
