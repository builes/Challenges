#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
    
    int t;
    cin >> t;
    cin.get();

    while(t > 0){

        //Read()
        string cards;
        cin >> cards;

        //Code()
        int unos = 0;
        int ceros = 0;
        for(string::size_type i = 0; i < cards.size(); i++){
            if(cards[i] == '0'){ceros++;}
            if(cards[i] == '1'){unos++;}
        }
        
        //Check()
        string check = "LOSE";
        if(unos % 2 != 0){
            if(cards.size() % 2 == 0){
                if(ceros % 2 != 0){
                    check = "WIN";
                }   
            }else{
                if(ceros % 2 == 0){
                    check = "WIN"; 
                }  
            }   
        }
        
        cout << check << endl;
        
        t--;

    }
    
    return 0;
    
}
