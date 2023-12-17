#include <random>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


std::random_device rd; // obtain random number from hardware
std::mt19937 gen(rd()); // seed the generator
std::uniform_real_distribution<> distA(0,1); // define distribution range 0-1


class Creature
{
private:
  std::string species; // species name (elephant/dog/cat/etc.)
  std::string name; // name of the creature (Dave, Dwayne, Chris, Rosie, etc.)
  double age; // age in years
  double height; // height in centimeters
  double weight; // weight in kilograms
  std::vector<std::string> likedFoods; // vector of liked foods (strings)
  std::vector<std::string> dislikedFoods; // vector of disliked foods (strings)
  int numLegs; // number of legs (4)
  bool hasTail; // true = has tail, false = doesn't have tail

public:
  // Getter and setter methods for all attributes
  const std::string& getSpecies()
  {
    return species;
  }
  void setSpecies(std::string p_species)
  {
    species = p_species;
  }

  const std::string& getName()
  {
    return name;
  }
  void setName(std::string p_name)
  {
    name = p_name;
  }

  const double getAge()
  {
    return age;
  }
  void setAge(double p_age)
  {
    age = p_age;
  }

  const double getHeight()
  {
    return height;
  }
  void setHeight(double p_height)
  {
    height = p_height;
  }

  const double getWeight()
  {
    return weight;
  }
  void setWeight(double p_weight)
  {
    weight = p_weight;
  }

  const std::vector<std::string>& getLikedFoods()
  {
    return likedFoods;
  }
  void setLikedFoods(const std::vector<std::string>& p_likedFoods)
  {
    likedFoods = p_likedFoods;
  }
  // adds food to the end of the vector
  void addLikedFoods(const std::string& p_food)
  {
    likedFoods.push_back(p_food);
  }
  // finds food we want to remove and removes it from the vector
  void removeLikedFoods(const std::string& p_food)
  {
    likedFoods.erase(std::remove(likedFoods.begin(), likedFoods.end(), p_food), likedFoods.end());
  }

  const std::vector<std::string>& getDislikedFoods()
  {
    return dislikedFoods;
  }
  void setDislikedFoods(const std::vector<std::string>& p_dislikedFoods)
  {
    dislikedFoods = p_dislikedFoods;
  }
  // adds food to the end of the vector
  void addDislikedFoods(const std::string& p_food)
  {
    dislikedFoods.push_back(p_food);
  }
  // finds food we want to remove and removes it from the vector
  void removeDislikedFoods(std::string p_food)
  {
    dislikedFoods.erase(std::remove(dislikedFoods.begin(), dislikedFoods.end(), p_food), dislikedFoods.end());
  }

  const int getNumLegs()
  {
    return numLegs;
  }
  void setNumLegs(int p_numLegs)
  {
    numLegs = p_numLegs;
  }

  const bool getHasTail()
  {
    return hasTail;
  }
  void setHasTail(bool p_hasTail)
  {
    hasTail = p_hasTail;
  }

  // Basic display of all creature attributes.
  void display()
  {
    std::cout << "\n\nSpecies: " << species << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << " years" << std::endl;
    std::cout << "Height: " << height << "cm" << std::endl;
    std::cout << "Weight: " << weight << "kg" << std::endl;
    std::cout << "Number of Legs: " << numLegs << std::endl;
    std::cout << "Tail: ";
    if (hasTail)
      std::cout << "Yes" << std::endl;
    else
      std::cout << "No" << std::endl;
    std::cout << "Liked Foods: " << std::endl;
    // loops through array and prints each element
    for (int i=0; i < likedFoods.size(); ++i)
    {
      std::cout << "\t- " << likedFoods[i] << std::endl;
    }
    std::cout << "Disliked Foods: " << std::endl;
    // loops through array and prints each element
    for (int i=0; i < dislikedFoods.size(); ++i)
    {
      std::cout << "\t- " << dislikedFoods[i] << std::endl;
    }
  }

};


// ASCII Art to print showing child is created.
void asciiArt()
{
std::cout << "\n\n\n\n\n\n" << std::endl;
std::cout << "                _____" << std::endl;
std::cout << "             ,-'     '-." << std::endl;
std::cout << "            / o       o \\         ________________________" << std::endl;
std::cout << "           /   \\     /   \\       /  Just here to deliver \\" << std::endl;
std::cout << "          /     )-'-(     \\    <<    your new creature.  |" << std::endl;
std::cout << "         /     ( 6 6 )     \\     \\   Probe ya' later!    /" << std::endl;
std::cout << "        /       \\ ' /       \\     \\_____________________/" << std::endl;
std::cout << "       /         )=(         \\" << std::endl;
std::cout << "      /   o   .--'-'--.   o   \\" << std::endl;
std::cout << "     /    I  /  -   -  \\  I    \\" << std::endl;
std::cout << " .--(    (_}y/\\       /\\y{_)    )--." << std::endl;
std::cout << "(    '.___l\\/__\\_____/__\\/l___,'    )" << std::endl;
std::cout << " \\                                 /" << std::endl;
std::cout << "  '-._      o O o O o O o      _,-'" << std::endl;
std::cout << "      `--Y--.___________.--Y--'" << std::endl;
std::cout << "         |==.___________.==| " << std::endl;
std::cout << "         '==.___________.=='" << std::endl;
std::cout << "\n\n\n\n\n\n" << std::endl;
}


// takes two species strings and returns one string of the combination of inputs
std::string combineSpecies(const std::string& speciesA, const std::string& speciesB)
{
  int midA = speciesA.size() / 2;
  int midB = speciesB.size() / 2;
  std::string combined = speciesA.substr(0, midA) + speciesB.substr(midB);
  return combined;
}


// takes two vectors and randomly combines the elements of each into a new vector that is returned
std::vector<std::string> combineFoods(const std::vector<std::string>& foodsA, const std::vector<std::string>& foodsB)
{
  std::vector<std::string> combinedFoods;
  int len = std::min(foodsA.size(), foodsB.size());
  double choice;

  for (int i=0; i<len; ++i)
  {
    choice = distA(gen);
    if (choice < 0.5 && foodsA.size() > i)
      combinedFoods.push_back(foodsA[i]);
    else if (choice < 0.5 && foodsA.size() < i)
      combinedFoods.push_back(foodsB[i]);
    else if (choice >= 0.5 && foodsB.size() > i)
      combinedFoods.push_back(foodsB[i]);
    else
      combinedFoods.push_back(foodsA[i]);
  }

  return combinedFoods;
}


// takes pointers to two parents and the name of the child and returns the child (attributes are combinations of the parents)
Creature makeChild(Creature* parentA, Creature* parentB, const std::string& p_childName)
{
  if (parentA == nullptr || parentB == nullptr)
    throw std::invalid_argument("Parent pointers must not be null.");

  Creature child;
  child.setSpecies(combineSpecies(parentA->getSpecies(), parentB->getSpecies()));
  child.setName(p_childName);
  child.setAge(0.1);
  child.setHeight((parentA->getHeight() + parentB->getHeight()) / 2);
  child.setWeight((parentA->getWeight() + parentB->getWeight()) / 2);
  child.setLikedFoods(combineFoods(parentA->getLikedFoods(), parentB->getLikedFoods()));
  child.setDislikedFoods(combineFoods(parentB->getDislikedFoods(), parentB->getDislikedFoods()));
  child.setNumLegs((parentA->getNumLegs() + parentB->getNumLegs()) / 2);
  child.setHasTail(parentA->getHasTail() || parentB->getHasTail());

  return child;
}


int main()
{
  // placeholder variables until the parent creatures attributes are set
  std::string speciesA, speciesB, nameA, nameB;
  double ageA, ageB, heightA, heightB, weightA, weightB;
  std::vector<std::string> likedFoodsA, likedFoodsB, dislikedFoodsA, dislikedFoodsB;
  int numLegsA, numLegsB;
  bool hasTailA, hasTailB;

  Creature parentA;
  Creature parentB;

  std::string input;
  std::cout << "Welcome to the Creature Creator!\n\nYou will need to provide information about two parent creatures before we can get started creating your new creature..." << std::endl;

  // Parent A information collection
  std::cout << "\nPlease enter information below for Parent A..." << std::endl;
  std::cout << "What is the species of this creature?: ";
  std::getline(std::cin, speciesA);
  std::cout << "\n";
  std::cout << "What is the pet-name you would like to give this creature?: ";
  std::getline(std::cin, nameA);
  std::cout << "\n";
  std::cout << "What is this creature's age? (years): ";
  std::getline(std::cin, input);
  ageA = std::stod(input);
  std::cout << "\n";
  std::cout << "What is this creature's height? (centimeters): ";
  std::getline(std::cin, input);
  heightA = std::stod(input);
  std::cout << "\n";
  std::cout << "What is this creature's weight? (kilograms): ";
  std::getline(std::cin, input);
  weightA = std::stod(input);
  std::cout << "\n";
  std::cout << "What things does this creature like to eat? Type 'done' to finish:" << std::endl;
  while(true)
  {
    std::getline(std::cin, input);
    if (input == "done")
      break;
    likedFoodsA.push_back(input);
  }
  std::cout << "\n";
  std::cout << "What things does this creature not like eating? Type 'done' to finish:" << std::endl;
  while(true)
  {
    std::getline(std::cin, input);
    if(input == "done")
      break;
    dislikedFoodsA.push_back(input);
  }
  std::cout << "\n";
  std::cout << "How many legs does this creature have?: ";
  std::getline(std::cin, input);
  numLegsA = std::stoi(input);
  std::cout << "\n";
  std::cout << "Does this creature have a tail? [yes/no]: ";
  std::getline(std::cin, input);
  if(input == "yes")
    hasTailA = true;
  else if (input == "no")
    hasTailA = false;
  else
  {
    std::cout << "\nInvalid input, defaulting to 'no'.";
    hasTailA = false;
  }
  std::cout << "\n";

  // Parent B information collection
  std::cout << "\nAlmost there, please enter information below for Parent B..." << std::endl;
  std::cout << "\n";
  std::cout << "What is the species of this creature?: ";
  std::getline(std::cin, speciesB);
  std::cout << "\n";
  std::cout << "What is the pet-name you would like to give this creature?: ";
  std::getline(std::cin, nameB);
  std::cout << "\n";
  std::cout << "What is this creature's age? (years): ";
  std::getline(std::cin, input);
  ageB = std::stod(input);
  std::cout << "\n";
  std::cout << "What is this creature's height? (centimeters): ";
  std::getline(std::cin, input);
  heightB = std::stod(input);
  std::cout << "\n";
  std::cout << "What is this creature's weight? (kilograms): ";
  std::getline(std::cin, input);
  weightB = std::stod(input);
  std::cout << "\n";
  std::cout << "What things does this creature like to eat? Type 'done' to finish:" << std::endl;
  while(true)
  {
    std::getline(std::cin, input);
    if (input == "done")
      break;
    likedFoodsB.push_back(input);
  }
  std::cout << "\n";
  std::cout << "What things does this creature not like eating? Type 'done' to finish:" << std::endl;
  while(true)
  {
    std::getline(std::cin, input);
    if(input == "done")
      break;
    dislikedFoodsB.push_back(input);
  }
  std::cout << "\n";
  std::cout << "How many legs does this creature have?: ";
  std::getline(std::cin, input);
  numLegsB = std::stoi(input);
  std::cout << "\n";
  std::cout << "Does this creature have a tail? [yes/no]: ";
  std::getline(std::cin, input);
  if(input == "yes")
    hasTailB = true;
  else if (input == "no")
    hasTailB = false;
  else
  {
    std::cout << "\nInvalid input, defaulting to 'no'.";
    hasTailB = false;
  }
  std::cout << "\n";

  // set all attributes of both parents from given inputs
  parentA.setSpecies(speciesA);
  parentA.setName(nameA);
  parentA.setAge(ageA);
  parentA.setHeight(heightA);
  parentA.setWeight(weightA);
  parentA.setLikedFoods(likedFoodsA);
  parentA.setDislikedFoods(dislikedFoodsA);
  parentA.setNumLegs(numLegsA);
  parentA.setHasTail(hasTailA);

  parentB.setSpecies(speciesB);
  parentB.setName(nameB);
  parentB.setAge(ageB);
  parentB.setHeight(heightB);
  parentB.setWeight(weightB);
  parentB.setLikedFoods(likedFoodsB);
  parentB.setDislikedFoods(dislikedFoodsB);
  parentB.setNumLegs(numLegsB);
  parentB.setHasTail(hasTailB);

  // pointers to the parent objects
  Creature* ptrA = &parentA;
  Creature* ptrB = &parentB;

  std::string childName;
  std::cout << "\nLooks like we're just about ready... what would you like the child's name to be?: ";
  std::getline(std::cin, childName);
  std::cout << "\n";

  // create the child from the two parents and user defined name
  Creature child = makeChild(ptrA, ptrB, childName);

  // display art to show we are done
  asciiArt();

  // display the information for the parents and child
  std::cout << "\nBelow is the information for both parents, and the child...\n" << std::endl;
  parentA.display();
  std::cout << "\n";
  parentB.display();
  std::cout << "\n";
  child.display();


  return 0;
}


