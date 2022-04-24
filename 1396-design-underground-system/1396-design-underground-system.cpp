
class UndergroundSystem {

    // id => {entryStation, entryTime}
    unordered_map<int, pair<string, int>> checkInMap;
    // travelName => {numberOfTravels, overallTime}
    unordered_map<string, pair<int, double>> avgTimesMap;
public:

    void checkIn(int id, string stationName, int t) {
        checkInMap[id] = {stationName,-t};
    }
    void checkOut(int id, string stationName, int t) {
        auto entryData = checkInMap[id];
        string startend = entryData.first + ","+stationName;
        avgTimesMap[startend].first ++;
        avgTimesMap[startend].second += (entryData.second + t);
        checkInMap.erase(id);
    }
    double getAverageTime(string startStation, string endStation) {
        // computing travelName id
        string travelName = startStation + ","+endStation;
        // retrieving data on current travel
        auto currTravel = avgTimesMap[travelName];
        // returning the average time
        return currTravel.second / (double)currTravel.first;
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