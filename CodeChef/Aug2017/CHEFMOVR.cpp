#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>


using namespace std;

bool verify(long prom, long data[], long m);

int main(){

	
	int t;
	cin >> t;
	cin.get();
	
	while(t > 0){
	
		//Read()
		long n;
		long d;
		cin >> n >> d;
		long datos [n];
		for(long i = 0; i < n; i++){cin >> datos[i];}
		
		//Code()
		long sumaTotal = 0;
		long movimientos = 0;
		long promedio = 0; 
		long contador = 0;
		
		for(long k = 0; k < n; k++){sumaTotal += datos[k];}
		
		if(sumaTotal % n != 0){
			cout << -1 << endl;
		}
		else{
			
			promedio = sumaTotal/n;
			for(long j = 0; j < n-d; j++){
				
				movimientos = promedio - datos[j];
				datos[j] = promedio;
				datos[j + d] -= movimientos;
				contador += abs(movimientos);				
				
			}
				

			if(verify(promedio,datos,n)){
				cout << contador << endl;
			}
			else{
				cout << -1 << endl;
			}
			

		}
		
		t--;
	
	}

return 0;

}

bool verify(long prom, long data[], long m){

	for(long h = 0; h < m; h++){
		if(data[h] != prom){
				return false;
		}
	}   
 
   return true; 
}
