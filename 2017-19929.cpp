#include <iostream>
#include <vector>

using namespace std;

void main() {//a
	vector<int> list;
	auto num = 1;
	auto nam = 0;
	while (cin >> num) {
		list.push_back(num);
	}
	cout << "original array" << endl;
	for (auto it = list.begin(); it < list.end(); it++) {
		cout << *it << " ";

	}
	cout << endl << endl << "ordered array\n";

	for (int j = 0; j < list.size(); j++){
		for (int i = 0; i < list.size()-1; i++) {
			if (list[i] <= list[i + 1]) {
				nam = list[i];
				list[i] = list[i + 1];
				list[i + 1] = nam;
			}
			else {}


		}
}

	for (auto i : list) {
		cout << i << " ";
	}
	
	cout << endl;
	system("pause");
}