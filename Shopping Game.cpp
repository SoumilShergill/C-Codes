#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int aayush_max, harshit_max;
        cin>>aayush_max>>harshit_max;

		int aayush_count = 0;
		int harshit_count = 0;
		for (int i = 1;; i++) {
			if (i % 2 == 0) {
				if (harshit_count + i <= harshit_max) {
					harshit_count = harshit_count + i;
				} else {
					cout<<"Aayush"<<endl;
					break;
				}
			} else {
				if (aayush_count + i <= aayush_max) {
					aayush_count = aayush_count + i;
				} else {
					cout<<"Harshit"<<endl;
					break;
				}
			}
		}
    }
}
