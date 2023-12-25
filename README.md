# LibRandom

LibRandom is a simple Python library that provides functions for generating random values of different types within specified ranges. It uses the `random` module and the current time down to the microsecond as a seed for the random number generator.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Functions](#functions)
- [Contributing](#contributing)
- [License](#license)

## Features

- Generate random double, integer, float, character, unsigned integer, unsigned long, and unsigned long long values.
- Specify custom ranges for each type of random value.
- High-resolution seeding based on the current time.

### Installation

Clone the repository:

```bash
git clone https://github.com/your-username/LibRandom.git
Change into the project directory:
cd LibRandom

# Import the LibRandom class and create an instance:
from LibRandom import LibRandom

# Create an instance of LibRandom
lib_random = LibRandom()
Use the available functions to generate random values:

# Example: Generate a random double between 0.0 and 1.0
random_double = lib_random.get_random_double()

# Example: Generate a random integer between 10 and 20
random_int = lib_random.get_random_int(10, 20)


seed_generator(): Seeds the generator with the current time down to the microsecond.
get_random_double(low=0.0, high=1.0): Generates a random double between the specified range [low, high].
get_random_int(low=0, high=99): Generates a random integer between the specified range [low, high].
get_random_float(low=0.0, high=1.0): Generates a random float between the specified range [low, high].
get_random_char(low=65, high=90): Generates a random character from the ASCII range specified.
get_random_unsigned_int(low=0, high=2**32 - 1): Generates a random unsigned integer between the specified range [low, high].
get_random_unsigned_long(low=0, high=2**64 - 1): Generates a random unsigned long integer between the specified range [low, high].
get_random_unsigned_long_long(low=0, high=2**128 - 1): Generates a random unsigned long long integer between the specified range [low, high].
Contributing
Contributions are welcome! Feel free to open issues or submit pull requests.

License
This project is licensed under the MIT License.






