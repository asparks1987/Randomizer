import random
from datetime import datetime

class LibRandom:
    def __init__(self):
        self.seed_generator()

    def seed_generator(self):
        """
        Seeds the generator with the current time down to the microsecond.
        """
        # Seed with current time in a high-resolution manner
        seed = datetime.now().microsecond
        random.seed(seed)

    def get_random_double(self, low=0.0, high=1.0):
        """
        Generates a random double between the specified range [low, high].
        """
        if low > high:
            raise ValueError("Invalid range: low > high")
        return random.uniform(low, high)

    def get_random_int(self, low=0, high=99):
        """
        Generates a random integer between the specified range [low, high].
        """
        if low > high:
            raise ValueError("Invalid range: low > high")
        return random.randint(low, high)

    def get_random_float(self, low=0.0, high=1.0):
        """
        Generates a random float between the specified range [low, high].
        """
        if low > high:
            raise ValueError("Invalid range: low > high")
        return random.uniform(low, high)

    def get_random_char(self, low=65, high=90):
        """
        Generates a random character from the ASCII range specified.
        """
        if low > high or low < 32 or high > 126:
            raise ValueError("Invalid ASCII range: low > high or out of printable ASCII range")
        return chr(random.randint(low, high))

    def get_random_unsigned_int(self, low=0, high=2**32 - 1):
        """
        Generates a random unsigned integer between the specified range [low, high].
        """
        if low > high:
            raise ValueError("Invalid range: low > high")
        return random.randint(low, high)

    def get_random_unsigned_long(self, low=0, high=2**64 - 1):
        """
        Generates a random unsigned long integer between the specified range [low, high].
        """
        if low > high:
            raise ValueError("Invalid range: low > high")
        return random.randint(low, high)

    def get_random_unsigned_long_long(self, low=0, high=2**128 - 1):
        """
        Generates a random unsigned long long integer between the specified range [low, high].
        """
        if low > high:
            raise ValueError("Invalid range: low > high")
        return random.randint(low, high)
