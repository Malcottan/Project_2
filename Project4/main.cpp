#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,k(0), q,w,x;
    cout << "a="; cin >> a;
    x = a;
    if (a > 0){
        a /= 10;
        k++;
        if (a > 0){
            a /= 10;
            k++;
            if (a > 0){
                a /= 10;
                k++;
            }
        }
    }
    cout << "Number of digits: " << k << endl;
    if (k == 3){
        if (x != 100){
            cout << "Error: a != a<=100" << endl;
        } else{
            cout << "Sum of numbers: " << "1" << endl;
            cout << "Output numbers: " << ("1  0") << endl;
        }
    } 
    if (k == 2){
        w = (x % 10);
        q = floor(x / 10);
        cout << "Sum of numbers: " << (w + q) << endl;
        cout << "Output numbers: " << (q) << ("  ") << (w) << endl;
    } 
    if (k == 1){
        cout << "Sum of numbers: " << x << endl;
        cout << "Output numbers: " << (x) << ("  ") << (x) << endl;
    }
}