#include <iostream>

using namespace std;

int main()
{
	int t;
	ios::sync_with_stdio(false);
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int s,c;
		cin >> s >> c;
		int *tab = new int[s+c];
		short loop_iter = 0, loop_iter_2 = 0;
		for(loop_iter = 0; loop_iter < s; loop_iter++) cin >> tab[loop_iter];
		for(loop_iter = s; loop_iter < s+c; loop_iter++) tab[loop_iter] = 0;
		bool reached_constant = false;
		int iter = 0;
		while(reached_constant == false)
		{
			reached_constant = true;
			++iter;
			for(loop_iter = 0; loop_iter < s-iter; loop_iter++)
			{
				tab[loop_iter] = tab[loop_iter+1] - tab[loop_iter];
				if(loop_iter == 0 || reached_constant == false) continue;
				else if(tab[loop_iter] != tab[0]) reached_constant = false;
			}
		}
		//for(loop_iter = 0; loop_iter < s+c; loop_iter++)cout << tab[loop_iter] << " ";
		//cout << endl;
		for(loop_iter = 0; loop_iter < c; loop_iter++)
		{
			int part_sum = 0;
			for(loop_iter_2 = s-iter+loop_iter-1; loop_iter_2 < s+loop_iter; loop_iter_2++)
			{
				part_sum += tab[loop_iter_2];
			}
			tab[s+loop_iter] = part_sum;
			cout << tab[s+loop_iter] << " ";
			for(loop_iter_2 = s+loop_iter-1; loop_iter_2 >= s-iter+loop_iter; loop_iter_2--)
			{
				tab[loop_iter_2] = tab[loop_iter_2+1]-tab[loop_iter_2];
			};
		}
		cout << '\n';
		delete [] tab;
	}
}
