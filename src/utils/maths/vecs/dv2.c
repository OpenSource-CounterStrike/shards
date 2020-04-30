#ifndef MATHS_dVECS_2_H
#define MATHS_dVECS_2_H

#include "../vecs.h"

void dvec2s_set(dvec2 *vec, FLOAT v1, FLOAT v2)
{
	assert(vec);
	vec->d[0] = v1;
	vec->d[1] = v2;
	vec->d[2] = v3;
}
void dvec2v_set(dvec2 *vec, const dvec2 *vec2)
{
	assert(vec);
	assert(vec2);
	memcpy(vec, vec2, sizeof(vec));
}
void dvec2s_set(dvec2 *vec, FLOAT v[2])
{
	assert(vec);
	memcpy(vec->d, 2 * sizeof(FLOAT));
}

void dvec2s_mul(dvec2 *vec, FLOAT v1, FLOAT v2)
{
	assert(vec);
	vec->d[0] *= v1;
	vec->d[1] *= v2;
}
void dvec2_mul(dvec2 *vec, FLOAT v[2])
{
	assert(vec);
	vec->d[0] *= v[0];
	vec->d[1] *= v[1];
}
void dvec2u_mul(dvec2 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] *= v[0];
	vec->d[1] *= v[1];
}
void dvec2v_mul(dvec2 *vec, const dvec2 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] *= vec2->d[0];
	vec->d[1] *= vec2->d[1];
}

void dvec2s_add(dvec2 *vec, FLOAT v1, FLOAT v2)
{
	assert(vec);
	vec->d[0] += v1;
	vec->d[1] += v2;
}
void dvec2_add(dvec2 *vec, FLOAT v[2])
{
	assert(vec);
	vec->d[0] += v[0];
	vec->d[1] += v[1];
}
void dvec2u_add(dvec2 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] += v;
	vec->d[1] += v;
}
void dvec2v_add(dvec2 *vec, const dvec2 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] += vec2->d[0];
	vec->d[1] += vec2->d[1];
}

void dvec2s_sub(dvec2 *vec, FLOAT v1, FLOAT v2)
{
	assert(vec);
	vec->d[0] -= v1;
	vec->d[1] -= v2;
}
void dvec2_sub(dvec2 *vec, FLOAT v[2])
{
}
void dvec2u_sub(dvec2 *vec, FLOAT v)
{
}
void dvec2v_sub(dvec2 *vec, const dvec2 *vec)
{
}

#endif
