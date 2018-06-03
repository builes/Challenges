#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

	int x;
	double y;
	cin >> x >> y;
	
	if(y > 0 && y - x - 0.50 >= 0){
		
		if(x % 5 == 0){
			
			y = y - x - 0.50;
			
		}
		
	}
	
	cout<<fixed<<setprecision(2)<<y;





return 0;

}
