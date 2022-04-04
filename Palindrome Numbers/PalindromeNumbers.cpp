#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int temp = x;
    int digit;
    int rev = 0;
    while(x != 0 ) {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }
    if(temp == rev) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    
    if(isPalindrome(n)) {
        cout << n << " is a palindome ";
    }
    else {
        cout << n << " is NOT a palindrome";
    }
	return 0;
}
