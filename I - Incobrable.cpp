#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while( cin >> n && n != -1 ){
		int ac = 0, ir = 0;
		for(int i=0;i<n;i++) { 
			int pre;
			cin >> pre;
			ac += pre;
			if( ac % 100 == 0 ){
				ir++;
				ac = 0;
			}
		}
		cout << ir << endl;
	}
	return 0;
} 
