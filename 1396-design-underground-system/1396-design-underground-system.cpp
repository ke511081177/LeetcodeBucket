
class UndergroundSystem {
public:
    unordered_map<int, pair<string, int>> checkins;
    unordered_map<string, pair<int, int>> routes;
    void checkIn(int id, string stationName, int t) {
        checkins[id] = {stationName, t};
    }
    void checkOut(int id, string stationName, int t) {
        auto [stn, start] = checkins[id];
        checkins.erase(id);
        string route = stn + "," + stationName;
        routes[route].first++, routes[route].second += t - start;
    }
    double getAverageTime(string startStation, string endStation) {
        auto& [count, sum] = routes[startStation + "," + endStation];
        return (double)sum / count;
    }
};
// class UndergroundSystem {
// public:
//     UndergroundSystem() {
        
//     }
    
//     unordered_map<pair<string,string>,pair<int,int>> stationDB;
//     unordered_map<int,string> customerstartDB;
//     unordered_map<int,int> customerTimeDB;
//     void checkIn(int id, string stationName, int t) {
//         customerTimeDB[id] = t;
//         customerstartDB[id] = stationName;
//     }
    
//     void checkOut(int id, string stationName, int t) {
//         int time = t-customerTimeDB[id];
//         stationDB[{customerstartDB[id],stationName}].first += 1;
//         stationDB[{customerstartDB[id],stationName}].second += time;
//     }
    
//     double getAverageTime(string startStation, string endStation) {
//         return(stationDB[{startStation, endStation}].second/stationDB[{startStation, endStation}].first);
//     }

// };

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */