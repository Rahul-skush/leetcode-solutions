class Solution {
public:
    double x0, y0, r;
    Solution(double radius, double x_center, double y_center) {
        x0 = x_center;
        y0 = y_center;
        r = radius;
    }
    
    vector<double> randPoint() {
        double len = sqrt(uniform())*r;
        double deg = uniform()*(2*3.14159265358979323846264);
        
        return {x0 + len*cos(deg), y0 + len*sin(deg)};
     }
    
    double uniform(){
        return (double)rand()/RAND_MAX;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */