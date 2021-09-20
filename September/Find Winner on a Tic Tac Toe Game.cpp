class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> v(3, vector<char>(3, 'E'));
        if(moves.size()<3) return  "Pending";
        for(int i=0;i<moves.size();i++)
        {
            vector<int> x = moves[i];
            if(i%2==0)
            v[x[0]][x[1]] = 'X';
            else
                v[x[0]][x[1]] = 'O';
        }
        
        // for(auto x : v)
        // {
        //     for(auto y :x)
        //         cout<<y;
        //     cout<<endl;
        // }
       
        if(v[0][0]!='E' && v[0][0] == v[0][1] && v[0][2]==v[0][1])
        {
            if(v[0][0]=='X') return "A";
            else return "B";
        }
        if(v[1][0]!='E' && v[1][0] == v[1][1] && v[1][2]==v[1][1])
        {
            if(v[1][0]=='X') return "A";
            else return "B";
        }
        if(v[2][0]!='E' && v[2][0] == v[2][1] && v[2][2]==v[2][1])
        {
            if(v[2][0]=='X') return "A";
            else return "B";
        }
        
        
        
        if(v[0][0]!='E' && v[0][0] == v[1][0] && v[2][0]==v[1][0])
        {
            if(v[0][0]=='X') return "A";
            else return "B";
        }
        if(v[0][1]!='E' && v[1][1] == v[0][1] && v[2][1]==v[1][1])
        {
            if(v[0][1]=='X') return "A";
            else return "B";
        }
        if(v[0][2]!='E' && v[0][2] == v[1][2] && v[2][2]==v[1][2])
        {
            if(v[0][2]=='X') return "A";
            else return "B";
        }
        
        
        
        if(v[0][0]!='E' && v[0][0] == v[1][1] && v[2][2]==v[1][1])
        {
            if(v[0][0]=='X') return "A";
            else return "B";
        }
        if(v[0][2]!='E' && v[0][2] == v[1][1] && v[2][0]==v[1][1])
        {
            if(v[0][2]=='X') return "A";
            else return "B";
        }
        
        if(moves.size()==9)
        return "Draw";
        else return "Pending";
    }
};
