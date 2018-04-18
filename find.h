#ifndef find_h
#define find_h
#include <iostream>
using namespace std;
int find(int n) {
	int count=0;
	int num=sizeof(n)*8;

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
		while (num!=0) {
			if ((n&1)==1) count++;
			n=n>>1;
			num--;
		}
	}

	return count;
}

#endif
