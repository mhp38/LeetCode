class TimeMap {
public:
    /** Initialize your data structure here. */
    TimeMap() {
        ;
    }

    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }

    string get(string key, int timestamp) {
        if( !mp.count( key ) ) return "";
        auto it = mp[key].upper_bound( timestamp );
        cout<<"first it "<< " " <<" "<<it->first<<" "<< it->second <<endl;
        if( it == mp[key].begin() ) return "";
        --it;
        cout<<"2nd it "<< " " <<" "<<it->first<<" "<< it->second <<endl;
        return it->second;
    }
private:
    map<string, map<int, string>> mp;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
