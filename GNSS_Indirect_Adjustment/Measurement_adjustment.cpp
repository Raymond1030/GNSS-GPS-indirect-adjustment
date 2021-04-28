#include "Measurement_adjustment.h"

Matrix Indirect_Adjustment(Matrix B, Matrix L)
{//���ƽ��
	Matrix B_T = B.transpose();//ת�þ���
	Matrix Nbb = B_T * B;

	Matrix W = B_T * L;//W=B'*L
	Matrix xx = Nbb.inverse() * W;//x=��Nbb)^(-1)*W
	Matrix VV = B * xx - L;// ��������V=B*x-L
    return VV;
}
