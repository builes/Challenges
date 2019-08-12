#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

bool found(int zombies[], int n, int x);

int main()
{

    int t;
    cin >> t;
    cin.get();

    while(t > 0){

        //Read()
        int n;
        cin >> n;
        int radPower[n];
        for(int i = 0; i < n; i++){cin >> radPower[i];}
        int zombiesTemp;
        int zombies = 0;
        for(int i = 0; i < n; i++){cin >> zombiesTemp; zombies += zombiesTemp;}
        
        //Code()
        int i = 0;
        while(i < n){
            int a = i - radPower[i];
            int b = i + radPower[i] + 1;
            if(a > n){a = n;}
            if(a < 0){a = 0;}
            if(b > n){b = n;}
            if(b < 0){b = 0;}
            zombies -= (b-a);
            i++;
        }
        
        //Check());
        if(zombies == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
        t--;

    }

return 0;

}