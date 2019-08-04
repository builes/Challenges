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
		int n;
		cin >> n;
		int goals [n];
		int fouls [n];
		for(int i = 0; i < n; i++){cin >> goals[i];}
        for(int i = 0; i < n; i++){cin >> fouls[i];}

		//Code()
        int points [n];
	    for(int i = 0; i < n; i++){
	        points[i] = goals[i] * 20 - fouls[i] * 10;
	        if(points[i] < 0){points[i] = 0;}
	    }
	    int maxPoints = 0;
	    for(int i = 0; i < n; i++){
	        if(points[i] > maxPoints){
	            maxPoints = points[i];
	        }
	    }
        cout << maxPoints << endl;
        
		t--;

	}
}