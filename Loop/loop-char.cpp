#include <iostream>
#include <string>

using namespace std;

int main() {
	int l; // Loop
	string t; // Text input
	
	cout << "Enter the text..." << endl ;
	getline (cin, t);
	
	cout << "How many times you want to repeat it... " ;
	cin >> l ;
	
	for (int i = 1 ; i <= l; ++i) {
        cout << t << endl;
    }
}
