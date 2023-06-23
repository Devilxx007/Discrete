#include <iostream>
#include <cmath>

using namespace std;
void evaluate(double coeff[],int degree,double x){
    double result = 0.0;

    for (int i = 0; i <= degree ; i++)
    {
        result += coeff[i]*pow(x,i);
    }
    cout<<"The evaluation of the polynomial is: "<<result;
    
}

int main(){
    int degree;
    cout<<"Enter degree of the polynomial: ";
    cin>>degree;

    double coeff[degree+1];

    for (int i = degree; i >= 0; i--) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coeff[i];
    }


    double x;
    cout<<"Enter the value for which the polynomial be evaluated: ";
    cin>>x;

    evaluate(coeff,degree,x);
    
}