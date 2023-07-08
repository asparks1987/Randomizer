# libRandom

libRandom is a C++ library that provides a convenient interface for generating random numbers. It uses the Mersenne Twister algorithm as the random number generator and supports generating random integers, floating-point numbers, characters, and unsigned data types within specified ranges.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [API](#api)
- [Contributing](#contributing)
- [License](#license)

## Installation

### Prerequisites
- C++ compiler with C++11 support

### Manual Installation
1. Download the `libRandom.hpp` file from the repository.
2. Include the `libRandom.hpp` file in your C++ project.

## Usage

```cpp
#include "libRandom.hpp"
#include <iostream>

int main()
{
    libRandom random;

    // Generate a random double between 0 and 1
    double randomDouble = random.getRandomDouble();
    std::cout << "Random Double: " << randomDouble << std::endl;

    // Generate a random integer between 0 and 99
    int randomInt = random.getRandomInt();
    std::cout << "Random Integer: " << randomInt << std::endl;

    // Generate a random character between ASCII values 65 and 90 (A-Z)
    char randomChar = random.getRandomChar();
    std::cout << "Random Character: " << randomChar << std::endl;

    // Generate a random unsigned integer between 0 and UINT_MAX
    unsigned int randomUnsignedInt = random.getRandomUnsignedInt();
    std::cout << "Random Unsigned Integer: " << randomUnsignedInt << std::endl;

    return 0;
}
API
The libRandom library provides the following public methods:

Constructors
libRandom(): Constructs a libRandom object and initializes the random number generator with the current time down to the nanosecond.
Random Number Generation Methods
double getRandomDouble(double low = 0.0, double high = 1.0): Generates a random double within the specified range [low, high].
int getRandomInt(int low = 0, int high = 99): Generates a random integer within the specified range [low, high].
float getRandomFloat(float low = 0.0f, float high = 1.0f): Generates a random float within the specified range [low, high].
char getRandomChar(int low = 65, int high = 90): Generates a random character within the specified ASCII range [low, high].
unsigned int getRandomUnsignedInt(unsigned int low = 0, unsigned int high = UINT_MAX): Generates a random unsigned integer within the specified range [low, high].
unsigned long getRandomUnsignedLong(unsigned long low = 0, unsigned long high = ULONG_MAX): Generates a random unsigned long integer within the specified range [low, high].
unsigned long long getRandomUnsignedLongLong(unsigned long long low = 0, unsigned long long high = ULLONG_MAX): Generates a random unsigned long long integer within the specified range [low, high].
Contributing
Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request on GitHub.

License
This project is licensed under the MIT License. See the LICENSE file for details.