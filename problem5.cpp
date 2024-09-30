#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=1;
    for(int i=0;i<n-1;i++) {
        x++;
        while (x%3==0 || x%10==3) {
            x++;
        }
    }
    cout<<x;
    return 0;}
