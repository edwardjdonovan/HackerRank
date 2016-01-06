#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double M;
    int T, X;
    cin>>M>>T>>X; 
    double tip = (T*M)/100;
    double tax = (X*M)/100;
    double final_price=M+tip+tax;
    int final_price_rounded = round(final_price);
    cout <<"The final price of the meal is $"<<final_price_rounded<<"."<<endl;
    return 0;
}