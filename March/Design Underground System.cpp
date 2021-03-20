class UndergroundSystem {
public:
    map<int, pair<string, int>>mp;
    map<string, pair<int, int>> stats;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto &[startStation, timeIn] = mp[id];
        auto &[totalDuration, tripCount] = stats[startStation + ">" + stationName];
        totalDuration += t - timeIn;
        ++tripCount;
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto &[totalDuration, tripCount] = stats[startStation + ">" + endStation];
        return (double)totalDuration/tripCount;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
