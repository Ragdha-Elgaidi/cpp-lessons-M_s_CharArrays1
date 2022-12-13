/*
● Read 2 strings input and str. Print YES if the given str is a suffix for the string.
Otherwise, print NO
● Input ⇒ Outputs
○ ABCDEFG ABCD ⇒ NO
○ ABCDEFG ABCDEF ⇒ NO
○ ABCDEFG EFG ⇒ YES
○ ABCDEFG DEFG ⇒ YES
○ ABCDEFG BCD ⇒ NO
○ ABCDEFG DEF ⇒ NO
○ ABCDEFG ACEG ⇒ NO
○ ABCDEFG DG ⇒ NO
○ ABCDEFG GD ⇒ NO
○ ABCDEFG ABCDEFG ⇒ YES
*/

#include<iostream>
using namespace std;

int main() 
{
	string big_str, small_str;
	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size())
	{
		cout << "NO\n";
		return 0;
	}

	// Compare the end of the small with the large
	int big_end = (int)big_str.size() - 1;
	int small_end = (int)small_str.size() - 1;

	for (int i = 0; i < (int)small_str.size(); i++)
	{
		if (big_str[big_end--] != small_str[small_end--]) 
		{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";

	return 0;
}
