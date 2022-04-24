class UndergroundSystem {
public:
    map<int, pair<string, int>> chkinmp;
    map<pair<string, string>, double> mp;
    map<pair<string, string>, int> mp2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        chkinmp[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        mp[{chkinmp[id].first, stationName}] += t - chkinmp[id].second;
        mp2[{chkinmp[id].first, stationName}]++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        return mp[{startStation, endStation}]/mp2[{startStation, endStation}];
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */