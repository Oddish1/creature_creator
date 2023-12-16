// User prompted to provide two creatures

// Generate new creature from parents' stats

#include <random>
#include <vector>
#include <string>
#include <iostream>


std::random_device rd; // obtain random number from hardware
std::mt19937 gen(rd()); // seed the generator
std::uniform_real_distribution<> distA(0,1); // define distribution range 0-1


class Creature
{
private:
  std::string species;
  std::string name;
  double age;
  double height;
  double weight;
  std::vector<std::string> likedFoods;
  std::vector<std::string> dislikedFoods;
  int numLegs;
  bool hasTail;

public:
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
  void addLikedFoods(const std::string& p_food)
  {
    likedFoods.push_back(p_food);
  }
  void removeLikedFoods(const std::string& p_food)
  {
    std::erase(likedFoods, p_food);
  }

  const std::vector<std::string>& getDislikedFoods()
  {
    return dislikedFoods;
  }
  void setDislikedFoods(const std::vector<std::string>& p_dislikedFoods)
  {
    dislikedFoods = p_dislikedFoods;
  }
  void addDislikedFoods(const std::string& p_food)
  {
    dislikedFoods.push_back(p_food);
  }
  void removeDislikedFoods(const std::string& p_food)
  {
    std::erase(dislikedFoods, p_food);
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

  void display()
  {
    std::cout << "\n\nSpecies: " << species << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Number of Legs: " << numLegs << std::endl;
    std::cout << "Tail: ";
    if (hasTail)
      std::cout << "Yes" << std::endl;
    else
      std::cout << "No" << std::endl;
    std::cout << "Liked Foods: " << std::endl;
    for (int i=0; i < likedFoods.size(); ++i)
    {
      std::cout << "\t- " << likedFoods[i] << std::endl;
    }
    std::cout << "Disliked Foods: " << std::endl;
    for (int i=0; i < dislikedFoods.size(); ++i)
    {
      std::cout << "\t- " << dislikedFoods[i] << std::endl;
    }
  }

};


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


std::string combineSpecies(const std::string& speciesA, const std::string& speciesB)
{
  int midA = speciesA.size() / 2;
  int midB = speciesB.size() / 2;
  std::string combined = speciesA.substr(0, mid1) + speciesB.substr(mid2);
  return combined;
}


std::vector<std::string> combineFoods(const std::vector<std::string>& foodsA, const std::vector<std::string>& foodsB)
{
  std::vector<std::string> combinedFoods;
  len = foodsA.size(), foodsB.size();
  int choice;

  for (int i=0; i<len; ++i)
  {
    choice = distA(gen)
    if (choice == 0 && foodsA.size() >= i)
      combinedFoods.push_back(foodsA[i]);
    else if (choice == 0 && foodsA.size() < i)
      combinedFoods.push_back(foodsB[i]);
    else if (choice == 1 && foodsB.size() >= i)
      combinedFoods.push_back(foodsB[i]);
    else
      combinedFoods.push_back(foodsA[i]);
  }

  return combinedFoods;
}


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
  asciiArt();

  return 0;
}

