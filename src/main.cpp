// User prompted to provide two creatures

// Generate new creature from parents' stats

#include <curses.h>
#include <random>
#include <vector>
#include <string>
#include <iostream>





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

