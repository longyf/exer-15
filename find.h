#ifndef find_h
#define find_h
#include <iostream>
using namespace std;
int find(int n) {
	int count=0;
	unsigned int flag=1;

	if (n==0) {
		return 0;
	}
	else if (n>0) {
		while (n!=0) {
			if ((n&1)==1) count++;
			n=n>>1;
		}	
	}
	else {
		while (flag) {
			if (n&flag) {
				count++;
			}
			flag=flag<<1;
		}
	}

	return count;
}

#endif
