#include <iostream>
using namespace std;

int nwd(int a, int b){
while (a!=b){
     if(b>a)
        b-=a;
     else
        a-=b;}
return a;}

int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int w=nwd(a,b);
    for (int i=2; i<n; i++){
        int z;
        cin >> z;
        w=nwd(w,z);}
    cout<<w<< endl;
}
