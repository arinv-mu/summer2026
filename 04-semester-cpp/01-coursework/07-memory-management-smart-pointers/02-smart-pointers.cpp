/*
 * Topic: Memory Management & Smart Pointers
 * Sample 2: Smart Pointers (unique_ptr and shared_ptr)
 *
 * Demonstrates:
 * - std::unique_ptr for exclusive ownership
 * - std::shared_ptr for shared ownership
 * - Move semantics
 * - Smart pointer conversions
 * - Automatic memory cleanup
 */

#include <iostream>
#include <memory>
#include <string>
#include <iomanip>

using namespace std;

class Device
{
private:
  string name;
  int powerConsumption;

public:
  Device(string n, int p) : name(n), powerConsumption(p)
  {
    cout << "Device created: " << name << endl;
  }

  ~Device()
  {
    cout << "Device destroyed: " << name << endl;
  }

  void powerOn()
  {
    cout << name << " is ON (consuming " << powerConsumption << "W)" << endl;
  }

  void powerOff()
  {
    cout << name << " is OFF" << endl;
  }

  string getName() const { return name; }
};

int main()
{
  cout << "=== Smart Pointers ===" << endl
       << endl;

  // 1. unique_ptr - exclusive ownership
  cout << "--- std::unique_ptr (Exclusive Ownership) ---" << endl;
  {
    unique_ptr<Device> device1 = make_unique<Device>("Laptop", 65);
    device1->powerOn();
    device1->powerOff();
    // Automatically deleted when scope ends
  }
  cout << "Device1 deleted automatically" << endl
       << endl;

  // 2. unique_ptr with new
  cout << "--- unique_ptr with new ---" << endl;
  unique_ptr<Device> device2(new Device("Phone", 5));
  device2->powerOn();
  cout << endl;

  // 3. shared_ptr - shared ownership
  cout << "--- std::shared_ptr (Shared Ownership) ---" << endl;
  {
    shared_ptr<Device> sharedDevice = make_shared<Device>("Monitor", 30);
    {
      shared_ptr<Device> deviceCopy = sharedDevice;
      cout << "Shared pointer count: " << sharedDevice.use_count() << endl;
      deviceCopy->powerOn();
    } // deviceCopy goes out of scope, but device still exists
    cout << "After inner scope, count: " << sharedDevice.use_count() << endl;
    sharedDevice->powerOff();
  }
  cout << "Shared device deleted" << endl
       << endl;

  // 4. Array of unique_ptr
  cout << "--- Array of unique_ptr ---" << endl;
  {
    const int size = 3;
    unique_ptr<Device> devices[size];

    devices[0] = make_unique<Device>("Router", 15);
    devices[1] = make_unique<Device>("Printer", 120);
    devices[2] = make_unique<Device>("Scanner", 25);

    cout << "All devices created" << endl;
  }
  cout << "All devices destroyed" << endl
       << endl;

  // 5. Vector of shared_ptr
  cout << "--- Vector of shared_ptr ---" << endl;
  {
    vector<shared_ptr<Device>> deviceList;
    deviceList.push_back(make_shared<Device>("Keyboard", 5));
    deviceList.push_back(make_shared<Device>("Mouse", 2));
    deviceList.push_back(make_shared<Device>("Headset", 10));

    cout << "Devices in vector:" << endl;
    for (auto &dev : deviceList)
    {
      dev->powerOn();
    }
  }
  cout << "All devices in vector destroyed" << endl
       << endl;

  // 6. Smart pointer comparisons
  cout << "--- Smart Pointer Features ---" << endl;
  unique_ptr<Device> device3 = make_unique<Device>("TV", 100);

  if (device3)
  {
    cout << "device3 is valid (not null)" << endl;
    cout << "Device name: " << device3->getName() << endl;
  }

  // Get raw pointer (be careful!)
  Device *rawPtr = device3.get();
  cout << "Got raw pointer from smart pointer" << endl;

  device3->powerOn();
  cout << endl;

  // 7. Null pointer
  cout << "--- Null Smart Pointer ---" << endl;
  unique_ptr<Device> nullDevice;

  if (!nullDevice)
  {
    cout << "nullDevice is null (empty)" << endl;
  }

  nullDevice = make_unique<Device>("Tablet", 12);
  if (nullDevice)
  {
    cout << "nullDevice is now valid" << endl;
  }

  cout << "\n--- End of program (all smart pointers cleaned up) ---" << endl;

  return 0;
}
