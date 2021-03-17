class Solution {
public:
    double mr = 0, x, y;
      double uniform() {
        return (double)rand() / RAND_MAX;
    }
    Solution(double radius, double x_center, double y_center) {
        x = x_center, y = y_center;
        mr = radius;
    }
    
    vector<double> randPoint() {
                 double theta = 2 * 3.14159265358979323846264 * uniform();
        double r = sqrt(uniform());
        return {x + r*mr*cos(theta), y + r*mr*sin(theta)};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
