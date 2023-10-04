class MyHashMap {
public:
    vector<pair<int, int>> ans;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for (auto& pair : ans) {
            if (pair.first == key) {
                pair.second = value; 
                return;
            }
        }
        ans.push_back({key, value});
    }
    
    int get(int key) {
        for(auto it: ans){
            if (it.first == key) {
                return it.second; 
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for (auto it = ans.begin(); it != ans.end(); ++it) {
            if (it->first == key) {
                ans.erase(it); 
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */