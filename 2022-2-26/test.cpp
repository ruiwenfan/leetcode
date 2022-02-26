#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;
class test{
private:
    int a,b;
public:
    test(int a,int b){
        this->a=a;
    }
    void print(){
        cout << this->a <<endl;
        cout << this->b << endl;
    }
};

int main(){
    unordered_map<int,int>a;
    cout << a.size()<<endl;
    cout << a[0] << a.size() <<endl;
}