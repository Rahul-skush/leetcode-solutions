class Solution {
  public:
    int brokenCalc(int x, int y) {
      int steps = 0;
      while (y > x) {
        steps += 1 + y % 2; // if y not divisible do 1 extra step (add one to y)
        y += y % 2; // if y not divisible add one to y
        y /= 2;
      }
      return steps + (x - y);
    }
};
