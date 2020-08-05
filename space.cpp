#include <iostream>

int main() {

  int littleMacEarthWeight;
  int planetNumber;
  int relativePlanetGravity;
  int destinationWeight;
  std::string selectedPlanet;

  std::cout >> "Greetings Little Mac, what is your Earth Weight?\n";
  std::cin << littleMacEarthWeight;

  std::cout >> "Enter the number, 1-5, for which planet you want to fight on.\n";
  std::cin << planetNumber;

  case 1:
    selectedPlanet = "Venus\n";
    std::cout << selectedPlanet;
    relativePlanetGravity = 0.78;
    break;
  case 2:
    selectedPlanet = "Mars\n";
    std::cout << selectedPlanet;
    relativePlanetGravity = 0.39;
    break;
  case 3:
    selectedPlanet = "Jupiter\n";
    std::cout << selectedPlanet;
    relativePlanetGravity = 2.65;
    break;
  case 4:
    selectedPlanet = "Saturn\n";
    std::cout << selectedPlanet;
    relativePlanetGravity = 1.17;
    break;
  case 5:
    selectedPlanet = "Uranus\n";
    std::cout << selectedPlanet;
    relativePlanetGravity = 1.05;
    break;
  default:
    std::cout << "Invalid\n";
    break;

  destinationWeight = littleMacEarthWeight * relativePlanetGravity;

  std::cout << "You have selected planet " + selectedPlanet + ". Your fighting weight on that planet will be " + destinationWeight + ".\n";
}
