#include "../vecs.h"

ivec *ivec_create(size_t _length, const INT *_dat)
{
	ivec *result = (ivec *)malloc(sizeof(ivec));
	result->dat = (INT *)malloc(sizeof(INT) * _length);
	result->length = _length;

	memcpy(result->dat, _dat, sizeof(INT) * _length);

	return result;
}
ivec *ivec_create_list(size_t _length, ...)
{
	ivec *result = (ivec *)malloc(sizeof(ivec));
	result->dat = (INT *)malloc(sizeof(INT) * _length);
	result->length = _length;

	va_list args;
	va_start(args, _length);
	for (size_t i = 0; i < _length; i++)
		result->dat[i] = va_arg(args, INT);
	va_end(args);

	return result;
}

void ivec_destroy(ivec *_vec)
{
	free(_vec->dat);
	free(_vec);
}

void ivec_set(ivec *_vec, size_t _length, const INT *_dat)
{
	assert(_vec);
	assert(_dat);
	assert(_length);

	_vec->length = _length;
	_vec->dat = (INT *)malloc(sizeof(INT) * _length);

	memcpy(_vec->dat, _dat, sizeof(INT) * _length);
}

void ivec_set_list(ivec *_vec, size_t _length, ...)
{
	assert(_vec);
	assert(_length);

	_vec->length = _length;
	_vec->dat = (INT *)malloc(sizeof(INT) * _length);

	va_list args;
	va_start(args, _length);
	for (size_t i = 0; i < _length; i++)
		_vec->dat[i] = va_arg(args, INT);
	va_end(args);
}

ivec ivec_mul(const ivec *_left, const ivec *_right)
{
	assert(_left);
	assert(_right);
	assert(_left->length == _right->length);

	ivec result;
	result.length = _left->length;
	result.dat = (INT *)malloc(sizeof(INT) * result.length);

	for (size_t i = 0; i < result.length; i++)
		result.dat[i] = _left->dat[i] * _right->dat[i];

	return result;
}

ivec ivec_add(const ivec *_left, const ivec *_right)
{
	assert(_left);
	assert(_right);
	assert(_left->length == _right->length);

	ivec result;
	result.length = _left->length;
	result.dat = (INT *)malloc(sizeof(INT) * result.length);

	for (size_t i = 0; i < result.length; i++)
		result.dat[i] = _left->dat[i] + _right->dat[i];

	return result;
}

ivec ivec_sub(const ivec *_left, const ivec *_right)
{
	assert(_left);
	assert(_right);
	assert(_left->length == _right->length);

	ivec result;
	result.length = _left->length;
	result.dat = (INT *)malloc(sizeof(INT) * result.length);

	for (size_t i = 0; i < result.length; i++)
		result.dat[i] = _left->dat[i] - _right->dat[i];

	return result;
}

FLOAT ivec_mag(const ivec *vec)
{
	assert(vec);

	FLOAT val = 0.0;
	for (size_t i = 0; i < vec->length; i++)
		val += pow(vec->dat[i], 2);
	return sqrt(val);
}

INT ivec_dot_product(const ivec *_left, const ivec *_right)
{
	assert(_right);
	assert(_right->dat);
	assert(_left);
	assert(_left->dat);
	assert(_left->length == _right->length);
	INT result = 0;
	for (size_t i = 0; i < _left->length; i++)
		result += _left->dat[i] * _right->dat[i];
	return result;
}

ivec ivec_cross_product(const ivec *_left, const ivec *_right)
{
	assert(_right);
	assert(_right->dat);
	assert(_left);
	assert(_left->dat);
	assert(_left->length == _right->length);
	assert(_left->length == 3);
	ivec v;
	v.length = 3;
	v.dat = (INT *)malloc(sizeof(INT) * v.length);

	v.dat[0] =
		_left->dat[1] * _right->dat[2] - _left->dat[2] * _right->dat[1];
	v.dat[1] = -(_left->dat[0] * _right->dat[2] -
		     _left->dat[2] * _right->dat[0]);
	v.dat[2] =
		_left->dat[0] * _right->dat[1] - _left->dat[1] * _right->dat[0];

	return v;
}
