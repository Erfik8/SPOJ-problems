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
		long double big_X = edges[1]*edges[1] + edges[2]*edges[2] - edges[5]*edges[5];
		long double big_Y = edges[0]*edges[0] + edges[2]*edges[2] - edges[4]*edges[4];
		long double big_Z = edges[0]*edges[0] + edges[1]*edges[1] - edges[3]*edges[3];
		//printf("bigX - %.8Lf , bigY - %.8Lf , bigZ - %.8Lf\n",big_X,big_Y,big_Z);
		long double first_part = 4*edges[0]*edges[0]*edges[1]*edges[1]*edges[2]*edges[2];
		long double volume = sqrt(first_part - edges[0]*edges[0]*big_X*big_X - edges[1]*edges[1]*big_Y*big_Y - edges[2]*edges[2]*big_Z*big_Z + big_X*big_Y*big_Z)/12;
		printf("%.4Lf\n",volume);
	}
}
