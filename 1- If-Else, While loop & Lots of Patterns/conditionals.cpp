#include<iostream>
using namespace std;

int main() {
    //int a;
    //cin>>a; 
    //cout<<" value of n is :" << n <<endl;


    //if a is positive
    /*
    if(a>0) {
        cout<<" A is Positive" << endl;
    }
    else{
        cout<<" A is negative" << endl;
    }
   */

                   // cin.get()
   /*
   int a,b;
   a = cin.get();
   cout << "Value of a and b is :" << a " " << b << endl ; 

   // cin did not read the space,tab, enter as inputs
   // cin.get() reads space, tab, enter also as inputs

   // it gives output for "space" -> 32
   // it gives output for "tab" -> 9
   // it gives output for "enter" -> 10
   // it gives output for "1" -> 49
   */


   /*
   int a,b;

   cout<<"Enter the value of a "<<endl;
   cin>>a;
   cout<<"Enter the value of b "<<endl;
   cin>>b;

    if(a>b) {
        cout<<" A is greater " << endl; 
    }
    if(b>a) {
        cout<<" B is greater " << endl;
    }

    */

   int a ;
   cout<<" enter the value of a "<<endl;
   cin>>a;



   if(a>0) {
       cout<<" A is positive"<< endl;
   }
   else if(a<0) {
       cout<<" A is negative"<<endl;
   }
   else {
       cout<<" A is 0"<<endl;
   }



}