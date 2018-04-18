#ifndef number_of_1_h
#define number_of_1_h
#include <iostream>
using namespace std;
int numberof1(int length) {
	int count=0;

	while (n!=0) {
		n=n&(n-1);
		count++;
	}
	
	return count;
}
#endif
