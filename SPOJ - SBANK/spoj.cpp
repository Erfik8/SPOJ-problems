#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	short t;
	scanf("%hd",&t);
	for(;t>0;t--)
	{
		int acc_num;
		scanf("%d",&acc_num);
		vector<string> accounts;
		size_t size;
		for(int i = 0; i < acc_num; i++) 
		{
			while(getchar() != '\n');
			char temp[34];
			fgets(temp,33,stdin);
			const char *temp_arr = temp;
			string temp_str = temp_arr;
			accounts.push_back(temp_str);
		}
		sort(accounts.begin(),accounts.end(),[](string a, string b)->bool{return a < b;});
		int counter = 0;
		for(int i = 0; i < accounts.size(); i++)
		{
			if(i == 0)counter++;
			else if(accounts[i] == accounts[i-1])counter++;
			else 
			{
				printf("%s%d\n",accounts[i-1].c_str(),counter);
				counter = 1;
			}
			if(i+1 >= accounts.size()) printf("%s%d\n",accounts[i].c_str(),counter);
		}
		if(t-1 > 0)printf("\n");
	}
	
}
