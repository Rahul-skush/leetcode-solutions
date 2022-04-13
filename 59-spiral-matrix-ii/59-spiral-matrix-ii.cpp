class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int lb =0, rb =n-1, ub =0, db =n-1;
        int k =1, direction =0, row=0, col =0;
        vector<vector<int>> matrix(n, vector<int> (n, 0));
        while(lb<=rb && ub<=db)
        {
            matrix[row][col] = k++;
            switch(direction)
            {
                case 0: if(col>=rb) { direction =1; row++; ub++;} else col++;
                    break;
                case 1 : if(row>=db) { direction =2; col--; rb--;} else row++;
                    break;
                case 2: if(col<=lb) { direction  =3; row--; db--;}  else col--;
                    break;
                case 3: if(row<=ub) {direction =0; col++; lb++;} else row--;
                    break;
            }
        }
        return matrix;
    }
};