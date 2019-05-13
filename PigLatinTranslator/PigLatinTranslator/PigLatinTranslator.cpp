#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Str; //User entered string
	string PigTranslation; //translated string
	
	int num = 0;

	while (num == 0)
	{
		cout << "Type: ";
		getline(cin, Str);

		reverse(Str.begin(), Str.end());

		cout << Str.append("ay") << endl;

	}

}
