#include <iostream>
#include <string>

using namespace std;

void longest_substring(const string& string1, const string& string2)
{
	int* current = new int[string2.size()];
	int* previous = new int[string2.size()];
	int* swap = NULL;
	int maxSubstr = 0;
	string longest;

	for (unsigned int i = 0; i < string1.size(); ++i)
	{
		for (unsigned int j = 0; j < string2.size(); ++j)
		{
			if (string1[i] != string2[j])
			{
				current[j] = 0;
			}
			else
			{
				if (i == 0 || j == 0)
				{
					current[j] = 1;
				}
				else
				{
					current[j] = 1 + previous[j - 1];
				}
				if (maxSubstr < current[j])
				{
					maxSubstr = current[j];
					longest.clear();
				}
				if (maxSubstr == current[j])
				{
					longest += string1.substr(i - maxSubstr + 1, i + 1);
				}
			}
		}
		swap = current;
		current = previous;
		previous = swap;
	}
	
	cout<<"Longest substring is:"<<longest.substr(0, maxSubstr);

}

int main()
{
	string string1 = "Koji je najduzi";
	string string2 = "Najduzi je ovaj -> najduzi";
	longest_substring(string1, string2);


}