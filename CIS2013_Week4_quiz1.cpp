# include <iostream>



using namespace std;


int main() {
	int FOO = 0;
	int BAR = 0;

	for (int i = 0; i <= 2000; i++) {
		cout << i;
		if (i % 50 == 0) { cout << "FOO";
		FOO++;
 }
		if (i % 33 == 0) { cout << "BAR";
		BAR++;
 }
		cout << endl;
	}

	cout << "Total number of FOO" << FOO++ << endl;
	cout << "Total number of BAR" << BAR++  << endl;
	
	char done;
	cin >> done;
	

	return 0;
}
