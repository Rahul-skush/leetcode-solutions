class FoodRatings {
public:
    map<string, set<pair<int, string>>> cusTofood;
    map<string, int> foodToRat;
    map<string, string> foodToCus;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++)
        {
            foodToRat[foods[i]] = -ratings[i];
            foodToCus[foods[i]] = cuisines[i];
            cusTofood[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cus = foodToCus[food];
        int oldRat = foodToRat[food];
        cusTofood[cus].erase({oldRat, food});
        cusTofood[cus].insert({-newRating, food});
        foodToRat[food] = -newRating;
    }
    
    string highestRated(string cuisine) {
        return  cusTofood[cuisine].begin()->second;
        
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */