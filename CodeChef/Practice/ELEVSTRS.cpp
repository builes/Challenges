#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>
#include<math.h>
 
using namespace std;

bool elementosRepetidosEnA(string a, string b);
bool elementosIgualesEnB(string a, string b);
 
int main(){
 	
	int r;
	cin >> r;
	cin.get();
	
	while(r > 0){
	    
	    int n;
	    int v1;
	    int v2;

	    //Floors
        cin >> n;
        //Stairs
        cin >> v1;
        //Elevator
        cin >> v2;

        double t1 = (sqrt(2)*n) / (double)v1;
        double t2 = 2*n/(double)v2;
        
        
        if(t1 < t2){
            cout << "Stairs" << endl;
        }
        else{
            cout << "Elevator" << endl;
        }
        
		
		r--;
	
	}
 
return 0;
 
}