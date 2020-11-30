#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findIndex(string& str, char x)
{
	int index = -1;
	int m = 0;
	for (int i = ( str.length() - 1); i >= 0; i--)
	{
		if (str[i] == x)
			m++;
		if (m == 4)
		{
			index = i;
			break;
		}

	}
	return index;
}

string change(string& str)
{
	size_t pos = 0;
	while ((pos = str.find('.', pos)) != -1)
		if (str[pos] == '.')
			str.replace(pos, 1, "**");
	return str;
}


int main()
{

	string str;
	char x = '.';

	cout << "Enter string:" << endl;
	cin >> str;

	int index = findIndex(str, x);
	if (index == -1)
	{
		cout << "Character not found" << endl;;
	}
	else
	{
		cout << "Last index of the dot is " << index << endl;;
	}

	cout << "Replacing dots with two asterisks: " << change(str);
	return 0;
}