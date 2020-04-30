#ifndef MATHS_dVECS_3_H
#define MATHS_dVECS_3_H

#include "../vecs.h"

void dvec3s_set(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec);
	vec->d[0] = v1;
	vec->d[1] = v2;
	vec->d[2] = v3;
}
void dvec3v_set(dvec3 *vec, const dvec3 *vec2)
{
	assert(vec);
	assert(vec2);
	memcpy(vec, vec2, sizeof(vec));
}
void dvec3s_set(dvec3 *vec, FLOAT v[3])
{
	assert(vec);
	memcpy(vec->d, v, 3 * sizeof(FLOAT));
}

void dvec3s_mul(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec);
	vec->d[0] *= v1;
	vec->d[1] *= v2;
	vec->d[2] *= v3;
}
void dvec3_mul(dvec3 *vec, FLOAT v[3])
{
	assert(vec);
	vec->d[0] *= v1;
	vec->d[1] *= v2;
	vec->d[2] *= v3;
}
void dvec3u_mul(dvec3 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] *= v;
	vec->d[1] *= v;
	vec->d[2] *= v;
}
void dvec3v_mul(dvec3 *vec, const dvec3 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] *= vec2->d[0];
	vec->d[1] *= vec2->d[1];
	vec->d[2] *= vec2->d[2];
}

void dvec3s_add(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec);
	assert(vec2);
	vec->d[0] += v1;
	vec->d[1] += v2;
	vec->d[2] += v3;
}
void dvec3_add(dvec3 *vec, FLOAT v[3])
{
	assert(vec);
	vec->d[0] += v[0];
	vec->d[1] += v[1];
	vec->d[2] += v[2];
}
void dvec3u_add(dvec3 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] += v;
	vec->d[1] += v;
	vec->d[2] += v;
}
void dvec3v_add(dvec3 *vec, const dvec3 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] += vec2->d[0];
	vec->d[1] += vec2->d[1];
	vec->d[2] += vec2->d[2];
}

void dvec3s_sub(dvec3 *vec, FLOAT v1, FLOAT v2, FLOAT v3)
{
	assert(vec);
	vec->d[0] -= v1;
	vec->d[1] -= v2;
	vec->d[2] -= v3;
}
void dvec3_sub(dvec3 *vec, FLOAT v[3])
{
	assert(vec);
	vec->d[0] -= v[0];
	vec->d[1] -= v[1];
	vec->d[2] -= v[2];
}
void dvec3u_sub(dvec3 *vec, FLOAT v)
{
	assert(vec);
	vec->d[0] -= v;
	vec->d[1] -= v;
	vec->d[2] -= v;
}
void dvec3v_sub(dvec3 *vec, const dvec3 *vec)
{
	assert(vec);
	assert(vec2);
	vec->d[0] -= vec->d[0];
	vec->d[1] -= vec->d[1];
	vec->d[2] -= vec->d[2];
}

#endif
