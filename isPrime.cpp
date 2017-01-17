
//how to do a big problem. by setting up the structure so you can call functions.
//teach him to make sure 

//save your personal functions in a file.
//void function, &

#include <iostream>

using namespace std;

int isPrime (int inNum) {
	int fac = 2;
	bool isPrime = true;

	if(inNum > 2 & inNum % 2 == 0) {
		isPrime = false;
	}
	else if(inNum == 1) {
		isPrime = false;
	}
	else if(inNum == 2) {
		isPrime = true;
	}
	else if(inNum <= 0) {
		cout << "Error" << endl;
		exit(-1);
	}
	else{
		//this is when odd positive int except for 1
		while(fac < inNum) {
			if (inNum % fac == 0) {
				isPrime = false;
				break;
			}
			fac++;

		}
	
	}

	return isPrime;

}

int main() {
	int inNum;
	 cout << "Please enter a number to see if it is prime or not" << endl;
	 cin >> inNum
	 cout << isPrime(inNum) << endl;

	// int fac = 2;
	// bool isPrime = true;

	// if(inNum > 2 & inNum % 2 == 0) {
	// 	isPrime = false;
	// }
	// else if(inNum == 1) {
	// 	isPrime = false;
	// }
	// else if(inNum == 2) {
	// 	isPrime = true;
	// }
	// else if(inNum <= 0) {
	// 	cout << "Error" << endl;
	// 	exit(-1);
	// }
	// else{
	// 	//this is when odd positive int except for 1
	// 	while(fac < inNum) {
	// 		if (inNum % fac == 0) {
	// 			isPrime = false;
	// 			break;
	// 		}
	// 		fac++;

	// 	}
	
	// }
	return 0;
	
}