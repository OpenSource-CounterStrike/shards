#include "../vectors.h"

dvec *dvec_create(size_t _length, const FLOAT *_dat)
{
	dvec *result = (dvec *)malloc(sizeof(dvec));
	result->dat = (FLOAT *)malloc(sizeof(FLOAT) * _length);
	result->length = _length;

	memcpy(result->dat, _dat, sizeof(FLOAT) * _length);

	return result;
}
dvec *dvec_create_list(size_t _length, ...)
{
	dvec *result = (dvec *)malloc(sizeof(dvec));
	result->dat = (FLOAT *)malloc(sizeof(FLOAT) * _length);
	result->length = _length;

	va_list args;
	va_start(args, _length);
	for (size_t i = 0; i < _length; i++)
		result->dat[i] = va_arg(args, FLOAT);
	va_end(args);

	return result;
}

void dvec_destroy(dvec *_vec)
{
	free(_vec->dat);
	free(_vec);
}

void dvec_set(dvec *_vec, size_t _length, const FLOAT *_dat)
{
	assert(_vec);
	assert(_dat);
	assert(_length);

	_vec->length = _length;
	_vec->dat = (FLOAT *)malloc(sizeof(FLOAT) * _length);

	memcpy(_vec->dat, _dat, sizeof(FLOAT) * _length);
}

void dvec_set_list(dvec *_vec, size_t _length, ...)
{
	assert(_vec);
	assert(_length);

	_vec->length = _length;
	_vec->dat = (FLOAT *)malloc(sizeof(FLOAT) * _length);

	va_list args;
	va_start(args, _length);
	for (size_t i = 0; i < _length; i++)
		_vec->dat[i] = va_arg(args, FLOAT);
	va_end(args);
}

dvec dvec_mul(const dvec *_left, const dvec *_right)
{
	assert(_left);
	assert(_right);
	assert(_left->length == _right->length);

	dvec result;
	result.length = _left->length;
	result.dat = (FLOAT *)malloc(sizeof(FLOAT) * result.length);

	for (size_t i = 0; i < result.length; i++)
		result.dat[i] = _left->dat[i] * _right->dat[i];

	return result;
}

dvec dvec_add(const dvec *_left, const dvec *_right)
{
	assert(_left);
	assert(_right);
	assert(_left->length == _right->length);

	dvec result;
	result.length = _left->length;
	result.dat = (FLOAT *)malloc(sizeof(FLOAT) * result.length);

	for (size_t i = 0; i < result.length; i++)
		result.dat[i] = _left->dat[i] + _right->dat[i];

	return result;
}

dvec dvec_sub(const dvec *_left, const dvec *_right)
{
	assert(_left);
	assert(_right);
	assert(_left->length == _right->length);

	dvec result;
	result.length = _left->length;
	result.dat = (FLOAT *)malloc(sizeof(FLOAT) * result.length);

	for (size_t i = 0; i < result.length; i++)
		result.dat[i] = _left->dat[i] - _right->dat[i];

	return result;
}

FLOAT dvec_mag(const dvec *vec)
{
	assert(vec);

	FLOAT val = 0.0;
	for (size_t i = 0; i < vec->length; i++)
		val += pow(vec->dat[i], 2);
	return sqrt(val);
}

FLOAT dvec_dot_product(const dvec *_left, const dvec *_right)
{
	assert(_right);
	assert(_right->dat);
	assert(_left);
	assert(_left->dat);
	assert(_left->length == _right->length);
	FLOAT result = 0;
	for (size_t i = 0; i < _left->length; i++)
		result += _left->dat[i] * _right->dat[i];
	return result;
}

dvec dvec_cross_product(const dvec *_left, const dvec *_right)
{
	assert(_right);
	assert(_right->dat);
	assert(_left);
	assert(_left->dat);
	assert(_left->length == _right->length);
	assert(_left->length == 3);
	dvec v;
	v.length = 3;
	v.dat = (FLOAT *)malloc(sizeof(FLOAT) * v.length);

	v.dat[0] =
		_left->dat[1] * _right->dat[2] - _left->dat[2] * _right->dat[1];
	v.dat[1] = -(_left->dat[0] * _right->dat[2] -
		     _left->dat[2] * _right->dat[0]);
	v.dat[2] =
		_left->dat[0] * _right->dat[1] - _left->dat[1] * _right->dat[0];

	return v;
}
