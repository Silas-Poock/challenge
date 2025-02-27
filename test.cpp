#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main() {
    int bananas = 0;
    int apples = 0;
	int saleAmount = 0;
    
    cin >> bananas >> apples;
    cout << bananas << " " << apples << endl;

    if (bananas > apples) {
        saleAmount = 5;
    }
    else {
		saleAmount = 3;
    }

    if (saleAmount > 4) {
		cout << "sale was based on the number of bananas" << endl;
    }
    return 0;
}