#include<iostream>
using namespace std;
int main(){
/*Given Problem can be solved using Arithmatic progression Here a1 = 3  while taking 3 multiples and a1=5 while taking 5 multiples
given constraint is number < 1000 , so taking 3 multiples  n = 999/3 = 333 an=n*d  , taking 5 multiples n=999/5 = 199 and an = n*d =995 sum in ap is 
n(a1+an)/2  also give 3 or 5 multiples so lcm of 3,5 is 15 so 15 multiples are repeating so we have to substract sum of multiples of 15
*/
cout<<((999/3)*(3+(999/3)*3))/2+((999/5)*(5+(999/5)*5))/2-((999/15)*(15+(999/15)*15))/2<<endl;
}