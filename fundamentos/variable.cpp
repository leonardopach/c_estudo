#include <iostream>

int main() {

  // Braced Initializers
  int elephant_count;

  int lion_count{};
  int dog_count{10};
  int cat_count{15};

  std::cout << "Elephant: " << elephant_count << " Lion: " << lion_count
            << " dog: " << dog_count << " cat: " << cat_count << std::endl;

  // function initialization
  int apple_count(5);
  int orange_count(10.2);
  int fruit_count(apple_count + orange_count);

  std::cout << "Apple: " << apple_count << " Orange: " << orange_count
            << " Fruit count : " << fruit_count << std::endl;

  int bike_count = 2;
  int truck_count = 7;
  int vehicle_count = bike_count + truck_count;
  int narrowing_conversion_assignment = 2.9;

  std::cout << "Bike: " << bike_count << " truck: " << truck_count
            << " vehicle count : " << vehicle_count
            << " Narrowing conversion: " << narrowing_conversion_assignment
            << std::endl;
  std::cout << "sizeof int: " << sizeof(int) << std::endl;
  std::cout << "sizeof truck: " << sizeof(truck_count) << std::endl;
  return 0;
}
