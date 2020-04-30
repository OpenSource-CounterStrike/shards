#ifndef MATHS_iVECS_3_H
#define MATHS_iVECS_3_H

void ivec3s_set(ivec3 *vec, INT v1, INT v2, INT v3)
{
	assert(vec);
	vec->d[0] = v1;
	vec->d[1] = v2;
	vec->d[2] = v3;
}
void ivec3v_set(ivec3 *vec, const ivec3 *vec2)
{
	assert(vec);
	assert(vec2);
	memcpy(vec, vec2, sizeof(*vec));
}
void ivec3_set(ivec3 *vec, INT v[3])
{
	assert(vec);
	memcpy(vec->d, v, sizeof(*vec));
}

void ivec3s_mul(ivec3 *vec, INT v1, INT v2, INT v3)
{
	assert(vec);
	vec->d[0] *= v1;
	vec->d[1] *= v2;
	vec->d[3] *= v3;
}
void ivec3_mul(ivec3 *vec, INT v[3])
{
	assert(vec);
	vec->d[0] *= v[0];
	vec->d[1] *= v[1];
	vec->d[2] *= v[2];
}
void ivec3u_mul(ivec3 *vec, INT v)
{
	assert(vec);
	vec->d[0] *= v;
	vec->d[1] *= v;
	vec->d[2] *= v;
}
void ivec3v_mul(ivec3 *vec, const ivec3 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] *= vec2->d[0];
	vec->d[1] *= vec2->d[1];
	vec->d[2] *= vec2->d[2];
}

void ivec3s_add(ivec3 *vec, INT v1, INT v2, INT v3)
{
	assert(vec);
	vec->d[0] += v1;
	vec->d[1] += v2;
	vec->d[3] += v3;
}
void ivec3_add(ivec3 *vec, INT v[3])
{
	assert(vec);
	vec->d[0] += v[0];
	vec->d[1] += v[1];
	vec->d[2] += v[2];
}
void ivec3u_add(ivec3 *vec, INT v)
{
	assert(vec);
	vec->d[0] += v;
	vec->d[1] += v;
	vec->d[2] += v;
}
void ivec3v_add(ivec3 *vec, const ivec3 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] += vec2->d[0];
	vec->d[1] += vec2->d[1];
	vec->d[2] += vec2->d[2];
}

void ivec3s_sub(ivec3 *vec, INT v1, INT v2, INT v3)
{
	assert(vec);
	vec->d[0] -= v1;
	vec->d[1] -= v2;
	vec->d[2] -= v3;
}
void ivec3_sub(ivec3 *vec, INT v[3])
{
	assert(vec);
	vec->d[0] -= v[0];
	vec->d[1] -= v[1];
	vec->d[2] -= v[2];
}
void ivec3u_sub(ivec3 *vec, INT v)
{
	assert(vec);
	vec->d[0] -= v;
	vec->d[1] -= v;
	vec->d[2] -= v;
}
void ivec3v_sub(ivec3 *vec, const ivec3 *vec2)
{
	assert(vec);
	assert(vec2);
	vec->d[0] -= vec2->d[0];
	vec->d[1] -= vec2->d[1];
	vec->d[2] -= vec2->d[2];
}

#endif
