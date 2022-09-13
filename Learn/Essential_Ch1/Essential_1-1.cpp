#include <iostream>
#include <string>

using namespace std;

void print(string word)
{
	cout << word << endl;
}

int main()
{

	
	int age(0);
	cout << "age is " << age << endl;
	
	string name;
	cout << "your name?\n";
	cin >> name;
	cout << name << endl;
	
	cout << "your age?\n";
	cin >> age;
	
	switch(age)
	{
		case 0: 
			cout << "never born \n";
			break;
		
		case 1: 
			cout << "tiny baby aha\n";
			break;
		
		default:
			cout << "Never considered";
			break;
	}
	
	string word;
	const int main_size(4);
	while(cin >> word)
	{
		if (word.size() < main_size)
			continue;
		else
			print(word);	
	
	}
	
	
	return 0;
}



