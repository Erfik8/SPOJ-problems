#include <iostream>
#include <string>

using namespace std;

int main()
{
	char text[] = "ela ma kota";
	int iter = 0;
	while(text[iter] != '\0')
	{
		cout << text[iter] << endl;
		if(text[iter] == 'a')text[iter] = '#';
		++iter;
	}
	string test_text(text);
	size_t pos = test_text.find("#");
	while(pos != string::npos)
	{
		test_text.replace(test_text.begin()+pos,test_text.begin()+pos+1,"");
		pos = test_text.find("#");
	}
	cout << test_text << endl;
	return 0;
}
