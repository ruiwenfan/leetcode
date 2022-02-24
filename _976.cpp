#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,2,23,1,4,0};
    vector<int> b (a,a+10);
    sort(b.begin(),b.end());
    auto l=b.begin();
    auto r=b.end();
    while(l!=r){
        cout << *l << endl;
        l++;
    }
}