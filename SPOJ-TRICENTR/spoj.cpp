#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	short t;
	scanf("%hd",&t);
	for(;t>0;t--)
	{
		double a,dis_a,dis_b,dis_c;
		scanf("%lf%lf%lf%lf",&a,&dis_a,&dis_b,&dis_c);
		double volume = 3*a*dis_a/2;
		double b = volume/(3*dis_b)*2;
		double c = volume/(3*dis_c)*2;
		double circumcircle_D = a*b*c/(2*volume);
		//printf("%lf\n",circumcircle_D);
		double orthocentroidal_circ_D = (circumcircle_D*circumcircle_D)-(4*(a*a+b*b+c*c))/9;
		if(orthocentroidal_circ_D < 0.0) orthocentroidal_circ_D = 0.0;
		orthocentroidal_circ_D = sqrt(orthocentroidal_circ_D);
		printf("%.3lf %.3lf\n",volume,orthocentroidal_circ_D);
	}
}
