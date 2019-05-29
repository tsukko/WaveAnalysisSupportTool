#include <math.hpp>
//---------------------------------------------------------------------------

//ch5_hikizan��5ch�́i�d����1E-5A�̂Ƃ��́j�d���l�ł���
double __fastcall temp(double ch5_hikizan){
   double K,L,X;	//�����̗v�f�A���̘a�A�d������v�Z�����ϐ�
   int n;
   
   double A[]={7.537323, -5.982098, 0.258962, -0.367298, -0.076117, -0.045213, -0.035987, -0.024377, -0.016891, -0.010818, -0.01158};
   double B[]={17.146526, -7.584116, 0.477292, 0.100032, 0.112749, -0.152567, 0.109719, -0.095634, 0.020858, -0.042799, -0.005885, -0.020665};
   double C[]={70.165175, -53.540888, 1.7702, 3.370984, 1.641476, 0.300434, 0.147964, -0.709955, 0.163912, -0.368798, 0.252498, -0.05887, 0.092097};
   double D[]={287.756797, -194.144823, -3.837903, -1.318325, -0.10912, -0.393265, 0.146911, -0.111192, 0.028877, -0.029286, 0.015619};
	
	if(ch5_hikizan>=1.361 && ch5_hikizan <1.704){
		X=(2*ch5_hikizan-3.02258)/0.38928;
		for(n=0;n<=10;n++){
			 L = A[n] * cos(n * (atan(-X / sqrt(-X * X + 1)) + 2 * atan(1)));
          K = K + L;
		}
	}
	else if(ch5_hikizan > 1.128 && ch5_hikizan < 1.361){
		 X = (2 * ch5_hikizan - 2.533965) / (0.294275);
		 for(n=0;n<=11;n++){
                        L = B[n] * cos(n * (atan(-X / sqrt(-X * X + 1)) + 2 * atan(1)));
                        K = K + L;
		 }
	}
	else if(ch5_hikizan > 0.9752 && ch5_hikizan <= 1.128){
		 X = (2 * ch5_hikizan - 2.068483) / (0.223917);
		 for(n=0;n<=12;n++){
          L = C[n] * cos(n * (atan(-X / sqrt(-X * X + 1)) + 2 * atan(1)));
          K = K + L;
		 }
	}
	else if(ch5_hikizan <= 0.9752){
		 X =(2 * ch5_hikizan - 1.079381) / (0.919847);
		 for(n=0;n<=10;n++){
          L = D[n] * cos(n * (atan(-X / sqrt(-X * X + 1)) + 2 * atan(1)));
          K = K + L;
		 }
	}
	return K;
}