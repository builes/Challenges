#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{

	int t;
	cin >> t;
	cin.get();

	while(t > 0){

		//Read()
		//n>k
		int64_t n;
		int64_t k;
		cin >> n >> k;

        //Code()
        if((n/k) % k){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
		t--;

	}

return 0;

}