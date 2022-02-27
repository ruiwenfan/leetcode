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

int test(){
    int i=1;
    cout << "test is running" <<endl;
    cout << i << endl;
}
int main(){
    int i=0;
    int x=1;
    int y=2;
    test();
    while (i<=10)
    {
        cout << i <<endl;
        i++;
    }
    
}