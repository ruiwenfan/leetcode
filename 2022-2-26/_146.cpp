//TODO
//LRU
#include <deque>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;
struct LRUList
{
    int key,val;
    LRUList *left;
    LRUList *right;
    LRUList():key(0),val(0),left(nullptr),right(nullptr){}
    LRUList(int _key,int _value):key(_key),val(_value),left(nullptr),right(nullptr){}
};


class LRUCache {
private:
    int capacity;
    int size;
    LRUList *head;
    LRUList *tail;
    unordered_map<int,LRUList*>lru;
    
public:
    LRUCache(int capacity) {
        this->capacity=capacity;
        this->head=new LRUList();
        this->tail=new LRUList();
        this->head->right=tail;
        this->tail->left=head;
        this->size=0;
    }
    
    int get(int key) {
        if(this->lru.find(key)==this->lru.end()){ // do not find.
            return -1;
        }
        LRUList *tmp=this->lru.find(key)->second;

        this->head->right=tmp;
        tmp->left=this->head;
        tmp->right=this->head->right->right;
        this->head->left=tmp;

        return this->lru[key]->val; 

    }
    
    void put(int key, int value) {

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */