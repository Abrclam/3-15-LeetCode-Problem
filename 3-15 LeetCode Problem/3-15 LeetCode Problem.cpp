#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector <string> names;
int main() {
	string input;
	cout << "Type some names. Type an even amount of names. Press 'q' to quit :" << endl;
	while (input != "q") {
		cin >> input;

		if (input!="q")
			names.push_back(input);
	}
	sort(names.begin(), names.end());
	for (int i = 0; i < names.size(); i++) {
		cout << names[i]<<" ";
	}
	cout << endl;
	random_shuffle(names.begin(), names.end());
	for (int i = 0; i < names.size(); i+=2) {

			cout << names[i] << " " << names[i + 1];
			cout << endl;

		}


}

