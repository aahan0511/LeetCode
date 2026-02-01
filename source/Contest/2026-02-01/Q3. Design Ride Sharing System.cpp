// 3829. Design Ride Sharing System

#include <vector>
#include <algorithm>
using namespace std;

class RideSharingSystem {
	vector<int> rider_queue;
	vector<int> driver_queue;

public:
	void addRider(int riderId) {
   		rider_queue.push_back(riderId);
	}

	void addDriver(int driverId) {
		driver_queue.push_back(driverId);
	}

	vector<int> matchDriverWithRider() {
		if (rider_queue.size() > 0 && driver_queue.size() > 0) {
            vector<int> match = {driver_queue[0], rider_queue[0]};
			rider_queue.erase(rider_queue.begin());
			driver_queue.erase(driver_queue.begin());
			return match;
		}
		return {-1, -1};
	}

	void cancelRider(int riderId) {
        auto it = find(
            rider_queue.begin(),
            rider_queue.end(),
            riderId
        );

        if (it != rider_queue.end()) {
    		rider_queue.erase(it);
        }
	}
};
