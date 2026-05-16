#include<iostream>
using namespace std;
int main () {
	int secret = 56;
	int guess;
	cout << "enter the number in guess: ";
	cin>>guess;
	while (guess != secret){
	if (guess < secret) {
		cout << "too low, try again !" <<endl;
	}else{
		cout << "too high, try again !" <<endl;
	}
	cout <<"enter your next guess !" <<endl;
	cin>>guess;
	}
	cout << "you won !" <<endl;
	return 0;
}
