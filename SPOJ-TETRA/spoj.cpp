#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int test;
	scanf("%u",&test);
	for(;test>0;test--)
	{
		double edges[6];
		for(short i = 0; i < 6; i++)scanf("%lf",&edges[i]);
		double big_X = edges[0]*edges[0] + edges[1]*edges[1] - edges[3]*edges[3];
		double big_Y = edges[0]*edges[0] + edges[2]*edges[2] - edges[4]*edges[4];
		double big_Z = edges[1]*edges[1] + edges[2]*edges[2] - edges[5]*edges[5];
		double first_part = 4*edges[0]*edges[0]*edges[1]*edges[1]*edges[2]*edges[2];
		double  volume = sqrt(first_part - edges[2]*edges[2]*big_X*big_X - edges[1]*edges[1]*big_Y*big_Y - edges[0]*edges[0]*big_Z*big_Z + big_X*big_Y*big_Z)/12;
		#define P_A ((edges[0]+edges[1]+edges[3])/2)
		#define P_B ((edges[0]+edges[2]+edges[4])/2)
		#define P_C ((edges[1]+edges[2]+edges[5])/2)
		#define P_D ((edges[3]+edges[4]+edges[5])/2)
		double sur_A = sqrt(P_A*(P_A-edges[0])*(P_A-edges[1])*(P_A-edges[3]));
		double sur_B = sqrt(P_B*(P_B-edges[0])*(P_B-edges[2])*(P_B-edges[4]));
		double sur_C = sqrt(P_C*(P_C-edges[1])*(P_C-edges[2])*(P_C-edges[5]));
		double sur_D = sqrt(P_D*(P_D-edges[3])*(P_D-edges[4])*(P_D-edges[5]));
		double small_r = (3*volume)/(sur_A+sur_B+sur_C+sur_D);
		printf("%.4lf\n",small_r);
	

}
}
