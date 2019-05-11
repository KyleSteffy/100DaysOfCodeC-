#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	string NewWord;

	cout << "Type: " << endl;
	cin >> word;

	reverse(word.begin(), word.end());

	cout << word.append("ay");



}
