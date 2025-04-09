#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>

std::string generateBTLogFileName() 
{
  // Get the current time
  std::time_t now = std::time(nullptr);
  std::tm* now_tm = std::localtime(&now);

  // Create a string stream to format the date and time
  std::ostringstream oss;
  oss << std::put_time(now_tm, "%Y-%m-%d-%H-%M-%S") << ".btlog";

  // Return the formatted string
  return oss.str();
};

#endif // UTILS_H