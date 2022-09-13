#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	//	open a file	
	ofstream outfile("seq_data.txt");
	//	append mode
	ofstream appendfile("seq_data_add.txt", ios_base::app);
	
	if (!outfile)
		cout << "Failed to open file\n";
	else
		cout << "Open file successfully!\n";
		outfile << "user name:" << "rob" << endl;
		outfile << "user id:" << 2020 << endl;
		
	//  read a file
	ifstream infile("seq_data.txt");
	
	if (!infile)
		cout << "Failed to read file\n";
	else
		cout << "Read file successfully!\n";
	
	string read;
	
	int line(1);
	while (infile >> read)  // read words till reach the end of file
	{
		cout << "line " << line << ":" << read << endl;
		line++;
	}
				
}
