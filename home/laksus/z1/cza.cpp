#include<iostream>

using namespace std;

int t;

int main(){

    cin >> t;
    cout << t/3600 << "g" << (t-(t/3600)*3600)/60 << "m" << t-(t/3600)*3600 - ((t-(t/3600)*3600)/60)*60 << "s\n";

}
