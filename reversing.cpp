#include<iostream>
using namespace std;
int main(){
  int n;                                 //taking a variable to store the user's choice
  cin>>n;
  while(n>0){                            //checking this condition till the value s greater than 0
  int reverse=0;                        //variable to store the final result which is initialized with 1
  int lastdigit;
  lastdigit=n%10;                      //this will always give the last digit of the entered value
  reverse = reverse*10 + lastdigit;
  n=n/10;
  }
  cout<<reverse<<endl;
 return 0; 
}
