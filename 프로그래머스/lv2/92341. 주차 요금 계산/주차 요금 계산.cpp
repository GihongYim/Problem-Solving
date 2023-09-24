#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> cars;
    map<string, int> times;
    int startTime;
    string record;
    string checkTime;
    string carNumber;
    string inOrOut;
    map<string ,int>::iterator car;
    for (int i = 0; i < records.size(); i++) {
        stringstream sin(records[i]);
        sin >> checkTime >> carNumber >> inOrOut; 
        startTime = 60 * stoi(checkTime.substr(0, 2)) + stoi(checkTime.substr(3, 2));
        if (inOrOut == "IN") {
            if (cars.find(carNumber) == cars.end()) {
                cars.insert(make_pair(carNumber, startTime));
            } else {
                cars[carNumber] = startTime;
            }
        } else if(inOrOut == "OUT") {
            car = cars.find(carNumber);
            if (times.find(car->first) == times.end()) {
                times.insert(make_pair(car->first, startTime - car->second));
            } else {
                times[car->first] += (startTime - car->second);
            }
            car->second = -1;
        }
    }
    for (auto it = cars.begin(); it != cars.end(); it++) {
        if (it->second != -1) {
            if (times.find(it->first) == times.end()) {
                times.insert(make_pair(it->first, 1439 - it->second));
            } else {
                times[it->first] += (1439 - it->second);
            }
            it->second = -1;
        }
    }
    for (auto it = times.begin(); it != times.end(); it++) {
        if (it->second <= fees[0]) {
            answer.push_back(fees[1]);
        } else {
            if ((it->second - fees[0]) % fees[2] == 0)
                answer.push_back(fees[1] + (it->second - fees[0]) / fees[2] * fees[3]);
            else
                answer.push_back(fees[1] + (it->second - fees[0] + fees[2]) / fees[2] * fees[3]);
        }
    }
    return answer;
}