#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void part_sort(vector<string> &accounts, int first_index, int last_index, int sort_criter)
{
	sort(accounts.begin()+first_index, accounts.begin()+last_index+1,[sort_criter](string a, string b)->bool
								 {return ((int)a[sort_criter]>(int)b[sort_criter]);});
}

int main()
{
	short t;
	scanf("%hd",&t);
	for(;t>0;t--)
	{
		int acc_num;
		scanf("%d",&acc_num);
		while(getchar() != '\n');
		vector<string> accounts;
		size_t size;
		for(int i = 0; i < acc_num; i++) 
		{
			string temp;
			getline(cin,accounts[i]);
			accounts.push_back(temp);
			//printf("%s\n",accounts[i].c_str());
		}
		while(getchar() != '\n');
		part_sort(accounts,0, accounts.size(),1);
		for(int i = 0; i < acc_num; i++)cout << accounts[i] << endl;
	}
	
}
