#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout << "Enter two number to sum,sub,muli,div and mod :\n";
    cin >> n1 >> n2;
    
    int sum,sub,muli,div ,mod ;

    sum = n1+n2;
    sub = n1-n2;
    muli = n1*n2;
    div = n1/n2;
    mod=n1%n2;

    cout << "The sum = " <<  sum << "\nThe sub = " << sub << "\nThe muli = " << muli << "\nThe div = " << div << "\nThe mod = " << mod;

    return 0;
}