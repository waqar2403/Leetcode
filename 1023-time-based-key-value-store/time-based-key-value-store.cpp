class TimeMap {
public:
    map<string, vector<pair<int, string>>> tmap;
    
    TimeMap() {
        tmap.clear();
    }
    
    void set(string key, string value, int timestamp) {
        tmap[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (tmap.count(key) == 0)
            return "";
        
        int n = tmap[key].size(), l=0, r=n-1, m;
        
        if(tmap[key][n-1].first <= timestamp)
            return tmap[key][n-1].second;
        while (l<=r) {
            m = (l+r)/2;
            
            if (tmap[key][m].first == timestamp)
                return tmap[key][m].second;
            
            if (tmap[key][m].first < timestamp && tmap[key][m+1].first > timestamp)
                return tmap[key][m].second;
            
            if (tmap[key][m].first < timestamp)
                l = m+1;
            else
                r = m-1;
        }
        
        return "";
    }
};