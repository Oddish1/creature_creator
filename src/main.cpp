// User prompted to provide two creatures

// Generate new creature from parents' stats, some mutation

// Two modes;
  // basic - generate new creature from combination of parents (excludes mutation)
  // evolution - user gives parents and generation number, outputs an evolved animal (includes mutation) (implement genetic algorithm?)


#include <thread>
#include <mutex>
#include <condition_variable>
#include <random>
#include <queue>
#include <vector>
#include <string>
#include <chrono>
#include <iostream>
#include <SFML/Graphics.hpp>

int Y_RESOLUTION;
int X_RESOLUTION;

std::mt19937 engine{ std::random_device{}() };
std::uniform_int_distribution<int> dist(1, 1000000);

