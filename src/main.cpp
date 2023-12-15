// User prompted to provide two creatures

// Generate new creature from parents' stats

#include <curses.h>
#include <random>
#include <vector>
#include <string>
#include <iostream>


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
  std::string getSpecies()
  {
    return species;
  }
  void setSpecies(std::string p_species)
  {
    species = p_species;
  }

  std::string getName()
  {
    return name;
  }
  void setName(std::string p_name)
  {
    name = p_name;
  }

  double getAge()
  {
    return age;
  }
  void setAge(double p_age)
  {
    age = p_age;
  }

  double getHeight()
  {
    return height;
  }
  void setHeight(double p_height)
  {
    height = p_height;
  }

  double getWeight()
  {
    return weight;
  }
  void setWeight(double p_weight)
  {
    weight = p_weight;
  }

  double getLikedFoods()
  {
    return likedFoods;
  }
  void setLikedFoods(std::vector<std::string> p_likedFoods)
  {
    likedFoods = p_likedFoods;
  }
  void addLikedFoods(std::string p_food)
  {
    likedFoods.push_back(p_food);
  }
  void removeLikedFoods(std::string p_food)
  {
    for (int i, i < sizeof(likedFoods), ++i)
    {
      if (likedFoods[i] == p_food)
      {
        likedFoods.erase(i);
      }
    }
  }

  double getDislikedFoods()
  {
    return dislikedFoods;
  }
  void setDislikedFoods(std::vector<std::string> p_dislikedFoods)
  {
    dislikedFoods = p_dislikedFoods;
  }
  void addDislikedFoods(std::string p_food)
  {
    dislikedFoods.push_back(p_food);
  }
  void removeDislikedFoods(std::string p_food)
  {
    for (int i, i < sizeof(dislikedFoods), ++i)
    {
      if (dislikedFoods[i] == p_food)
      {
        dislikedFoods.erase(i);
      }
    }
  }

  int getNumLegs()
  {
    return numLegs;
  }
  void setNumLegs(int p_numLegs)
  {
    numLegs = p_numLegs;
  }

  bool getHasTail()
  {
    return hasTail;
  }
  void setHasTail(bool p_hasTail)
  {
    hasTail = p_hasTail;
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



int main()
{
  asciiArt();

  return 0;
}

