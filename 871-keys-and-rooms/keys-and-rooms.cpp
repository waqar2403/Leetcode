class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        unordered_set<int> keys;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            keys.insert(temp);
            for(int i=0;i<rooms[temp].size();i++){
                if(keys.find(rooms[temp][i])==keys.end()){
                    q.push(rooms[temp][i]);
                }
            }
        }

        if(keys.size()==n){
            return true;
        }

        return false;
    }
};