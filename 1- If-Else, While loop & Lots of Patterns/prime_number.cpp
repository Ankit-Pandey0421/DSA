/* WAP to take input of a number (n) and output the numbers for which n is prime and not prime */
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check for prime"<< endl;
    cin>> n;
    int i = 2;

    while(i<n){
        if(n%i == 0){
            cout<< n <<" " "Is not prime for "<< i <<endl;
        }
        else{
            cout<< n <<" " "Is prime for "<< i <<endl; 
        }
        i++;
    }

}*/


/* WAP to take input of a number (n) and output whether the numbers is prime or not */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check for prime"<< endl;
    cin>> n;
    int i = 2;
    int count = 0;

    while(i<n){
        if(n%i == 0){
            count++ ;
        }
        i++;
    }
    if(count == 0){
        cout << n << "  is prime"<< endl;
    }
    else{
        cout << n << "  is not prime"<< endl;
    }

}