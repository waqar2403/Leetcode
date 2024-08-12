class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x=0;
        for(int i=0;i<commands.size();i++)
        {
            if(commands[i] == "UP")
            {
                x = x-n;
            }
            else if(commands[i] == "DOWN")
            {
                x += n;
            }
            else if(commands[i] == "LEFT")
            {
                x--;
            }
            else
            {
                x++;
            }
        }
        return x;
    }
};