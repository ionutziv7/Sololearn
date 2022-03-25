#include <iostream>
using namespace std;

int main()
{
    int ages[5];
    float price = 0;
    for(int i=0;i<5;i++) {
        cin >> ages[i];
    }
    int smallest = ages[0];
    for(int i=0; i< 5; ++i) {
        if(ages[i] < smallest)
            smallest = ages[i];
    }
    float discount = (50.00 * smallest) / 100.00;
    price = 50.00 - discount;
    cout << price << endl;
	return 0;
}
