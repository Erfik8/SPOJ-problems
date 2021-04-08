#include <cstdio>

using namespace std;

int walk(short steps, short level, short index)
{
	if(level < 0)level*=-1;
	if(level == 0)index = 0;
	else index = index%level;
	int sum = 0;
	if(steps == 0)return level == 0?1:0;
	if(level > steps)return 0;
	if(level == 0) sum = 6*walk(steps-1,level+1,index);
	else if(index%level == 0)
	{
		sum += walk(steps-1,level-1,index);
		if(steps > level)
		{
			sum += walk(steps-1,level+1,index);
			sum += 2*walk(steps-1,level,index+1);
			sum += 2*walk(steps-1,level+1,index+1);
		}
	}
	else 
	{
		sum += walk(steps-1,level-1,index);
		sum += walk(steps-1,level-1,index-1);
		if(steps > level)
		{
			sum += walk(steps-1,level+1,index);
			sum += walk(steps-1,level+1,index+1);
			sum += walk(steps-1,level,index+1);
			sum += walk(steps-1,level,index-1);
		}
	}
	return sum;
}

int main()
{
	int t;
	scanf("%d",&t);
	for(;t>0;t--)
	{
		short n;
		scanf("%hd",&n);
		printf("%d\n",(6*walk(n-1,1,0)));
	}
}
