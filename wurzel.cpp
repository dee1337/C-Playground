#include <iostream>
#include <cmath>
using namespace std;


float xroot(float radikant, int n){
  int max_iterations = 10; // limit for performance
    cout << "computing " << n << "th root of " << radikant << " \n(limited to a max of "<< max_iterations <<" iterations for performance)" << endl;
    double x = radikant;
    float epsilon = 1.0e-14;
    double old_x = x;
    if (n == 0){
      cout << "do you like infinity? Please don't use 0 as 2nd param!" << endl; return 1337;
    }
    for (int i=1; i < max_iterations; i++){
        old_x = x;
        //if ( abs(x - old_x) < epsilon * old_x ){break;} // ok
        // cout << "n=" << i << "\t x=" << x;
        if (x < 0){ x = -x; }
        x = (1.0/n) * ( (n-1.0) * old_x + ( radikant/pow(old_x, n-1.0) ) ); // ok
        // cout << "\n## " << "1/n =" <<  1/n << " n-1 * old_x = " << (n-1) * old_x << " radikant/pow(old_x, n-1) = " << radikant/pow(old_x, n-1) << endl;
        // cout << "\t || \tn=" << i << "\t x=" << x;
        if ( abs(x - old_x) < epsilon * old_x ){break;} // ok
        cout << "\nstep " << i << ", approx: " << x << endl;
    }
    return x;
}

int main(){
  // formats / sets output precision
  cout.precision(10); cout.setf(ios_base::fixed);
  double radicant;
  unsigned int root;
  cout << "please enter a radicant:";
  cin >> radicant;
  cout << "please enter the root:";
  cin >> root;
  cout << xroot(radicant, root) << endl;
  return 0;
}
