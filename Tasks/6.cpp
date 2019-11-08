#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main() {
	string line;
	cout << "Type yor text here: ";
	getline(cin, line);
	for (int i = 0; i < line.size(); ++i)
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			line[i] = '\0';
		}
	}
	cout << "Result: " << line;
	cin.get();
}