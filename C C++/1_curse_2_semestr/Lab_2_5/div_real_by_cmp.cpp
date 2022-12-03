#include "complex.h"
CMP div_real_by_cmp(float real, CMP com){
	CMP result;
	result.real = (real*com.real)/(com.real*com.real + com.imag*com.imag);
	result.imag = (real*(-com.imag))/(com.real*com.real + com.imag*com.imag);
	return result;
}
