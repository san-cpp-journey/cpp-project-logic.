#include<iostream>
using namespace std;
int main () {
	int balance = 50000;
	int amount;
	cout << "enter amount to withdraw: ";
	cin>>amount;
	while (amount != 0){
	if ( amount <= balance) {
		cout << amount <<endl;
		balance = balance - amount;
		cout << "balance = " << balance <<endl;
	} else {
		cout << "insufficient amount !"<<endl;
	}
	cout << "enter 0 to end it or any other number to withdraw again"<<endl;
		cin>>amount;
	}
	return 0;
}
