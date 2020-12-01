// Дано літерний рядок, який містить послідовність символів s0, …, sn, ….Підрахувати
//довжину найкоротшого слова в цій послідовності(слово – це група символів, які розташовані
//	поспіль і відмінні від пробілів та знаків пунктуації).

#include <iostream>
#include <string>

using namespace std;

size_t minLength(string s)
{
	int k = 0;
	size_t len = 0,
		min = 0;
	size_t start = 0,
		finish;
	while ((start = s.find_first_of("abcdefghijklmnopqrstuvwxyz", start)) != -1)
	{
		finish = s.find_first_not_of("abcdefghijklmnopqrstuvwxyz", start + 1);
		if (finish == -1)
			finish = s.length();
		len = finish - start;
		if (k == 0)
			min = len;
		k++;
		if (len < min)
			min = len;
		start = finish + 1;
	}
	return min;
}
int main()
{
	string s;
	cout << "Enter string:" << endl;
	getline(cin, s);
	cout << "Length of the shortest word: " << minLength(s) << endl;

	return 0;
}