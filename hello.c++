#include <iostream>
#include<math.h>
using namespace std;
void prime(int n){
    int count = 0;
    int value = 2;
    while(true){
        int flag = 1; 
        for (int i = 2; i <= sqrt(value); i++)
        {   
            if (value % i == 0){
               flag = 0;
            }
        }
        if(flag == 1){
          cout<< value <<"\t";
          count++;
        }
        if (count == n)
           break;
        value++;
        
    }
}

int main(){
    prime(20);
    
}