#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>


using namespace std;

int main(){

	int t;
	cin >> t;
	cin.get();
	
	while(t > 0){
		
		int n;
		cin >> n;
		int datos [n];	
		int max = -9999;	
		for(int i = 0; i < n; i++){
			cin >> datos[i];
			if(datos[i] > max){
				max = datos[i];
			}
		}
		
		bool answer = true;
		
		if(max != 7){
			answer = false;
			//cout << "0 ";
		}
		
		if(n<7 || n>100){
			answer = false;
			//cout << "1 "; 
		}
		
		if(datos[0] != 1){
			answer = false;
			//cout << "2 "; 
		}

		for(int j = 0; j < n; j++){
			

			
			if(datos[j] > 7 || datos[j] < 1){
				answer = false;
				//cout << "3 "; 
			}
			
			if(datos[j] != datos[n-1-j]){
				answer = false;
				//cout << "4 "; 
			}
			
			if( j<n-1 && abs(datos[j] - datos[j+1]) != 0 && abs(datos[j] - datos[j+1]) != 1 ){
				answer = false;
				//cout << "5 "; 
			}
			
		}
		
				
		if(n % 2 == 0 && datos[n/2] != 7 && datos[(n/2)-1] != 7){
			answer = false;
			//cout << "6 "; 
		}
		
		if(n % 2 != 0 && datos[n/2] != 7){
			answer = false;
			//cout << "7 "; 
		}
			

		if(answer){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
		
		t--;

		
	}
	

return 0;

}

