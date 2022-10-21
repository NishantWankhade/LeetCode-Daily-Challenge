class ParkingSystem {
public:
    map<int,int> availableSpace;
    ParkingSystem(int big, int medium, int small) {
        this->availableSpace[1] += big;
        this->availableSpace[2] += medium;
        this->availableSpace[3] += small;
    }
    
    bool addCar(int carType) {
        if(availableSpace[carType] > 0) {
            availableSpace[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */