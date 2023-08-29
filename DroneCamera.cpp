#include <iostream>
//inheritence
class Camera {
protected:
    int resolution;

public:
    //parameterized constructor
    Camera(int res) : resolution(res) {}

    void takePhoto() {
        std::cout << "Photo taken" << std::endl;
    }
};

class DroneCamera : public Camera {
private:
    const char* droneModel;

public:
    DroneCamera(int res, const char* model) : Camera(res), droneModel(model) {}

    void takeAerialPhoto() {
        std::cout << "Aerial photo taken with " << resolution << " resolution from " << droneModel << std::endl;
    }
};

int main() {
    //implicit call to base class constructor
    DroneCamera droneCam(12, "Quadcopter X1");
    droneCam.takePhoto();           // Calls base class method
    droneCam.takeAerialPhoto();     // Calls derived class method

    return 0;
}
