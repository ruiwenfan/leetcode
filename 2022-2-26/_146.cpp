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
        this->size=0;
        this->head=new LRUList();
        this->tail=new LRUList();
        this->head->right=tail;
        this->tail->left=head;
    }
    void remove_last(){
        this->lru.erase(this->tail->left->key);
        this->tail->left=this->tail->left->left;
        this->tail->left->right=this->tail;
    }
    
    void insert_first(LRUList * tmp){

        tmp->right=this->head->right;
        this->head->right->left=tmp;

        this->head->right=tmp;
        tmp->left=this->head;
    }
    void remove_node(LRUList * tmp){
        tmp->right->left=tmp->left;
        tmp->left->right=tmp->right;
    }

    int get(int key) {
        if(this->lru.find(key)==this->lru.end()){ // do not find.
            return -1;
        }
        remove_node(this->lru.find(key)->second);
        insert_first(this->lru.find(key)->second);
        return this->lru[key]->val; 
    }
    
    void put(int key, int value) {
        if(this->lru.find(key)!=this->lru.end()){
            LRUList *tmp=this->lru.find(key)->second;
            tmp->val=value;
            remove_node(tmp);
            insert_first(tmp);
        }else{
            if(this->size==this->capacity){ // do not find
                remove_last();
                LRUList *tmp=new LRUList(key,value);
                this->lru[key]=tmp;
                insert_first(tmp);
            }else{
                LRUList *tmp=new LRUList(key,value);
                this->lru[key]=tmp;
                insert_first(tmp);
                (this->size)++;
            }
        }
    }
};
// to debug
int main(){
    auto lRUCache = new LRUCache(2);
    lRUCache->put(2, 1); // 缓存是 {1=1}
    lRUCache->put(1, 1); // 缓存是 {1=1, 2=2}
    lRUCache->put(2,3);    // 返回 1
    lRUCache->put(4,1);    // 返回 -1 (未找到)
    lRUCache->get(1); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
    lRUCache->get(2);    // 返回 -1 (未找到)

}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */