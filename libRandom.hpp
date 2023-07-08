#ifndef LIBRANDOM_H
#define LIBRANDOM_H

#include <random>
#include <chrono>
#include <stdexcept>

class libRandom
{
public:
    /**
     * @brief Constructs a libRandom object.
     */
    libRandom()
    {
    }

    /**
     * @brief Generates a random double between the specified range [low, high].
     * @param low The lower bound of the range (inclusive).
     * @param high The upper bound of the range (inclusive).
     * @return Random double within the specified range.
     * @throw std::invalid_argument if the specified range is invalid (low > high).
     */
    double getRandomDouble(double low = 0.0, double high = 1.0)
    {
        if (low > high)
            throw std::invalid_argument("Invalid range: low > high");

        seedGenerator();
        std::uniform_real_distribution<double> distribution(low, high);
        return distribution(generator);
    }

    /**
     * @brief Generates a random integer between the specified range [low, high].
     * @param low The lower bound of the range (inclusive).
     * @param high The upper bound of the range (inclusive).
     * @return Random integer within the specified range.
     * @throw std::invalid_argument if the specified range is invalid (low > high).
     */
    int getRandomInt(int low = 0, int high = 99)
    {
        if (low > high)
            throw std::invalid_argument("Invalid range: low > high");

        seedGenerator();
        std::uniform_int_distribution<int> distribution(low, high);
        return distribution(generator);
    }

    /**
     * @brief Generates a random float between the specified range [low, high].
     * @param low The lower bound of the range (inclusive).
     * @param high The upper bound of the range (inclusive).
     * @return Random float within the specified range.
     * @throw std::invalid_argument if the specified range is invalid (low > high).
     */
    float getRandomFloat(float low = 0.0f, float high = 1.0f)
    {
        if (low > high)
            throw std::invalid_argument("Invalid range: low > high");

        seedGenerator();
        std::uniform_real_distribution<float> distribution(low, high);
        return distribution(generator);
    }

    /**
     * @brief Generates a random character from the ASCII range specified.
     * @param low The lower bound of the ASCII range (inclusive).
     * @param high The upper bound of the ASCII range (inclusive).
     * @return Random character within the specified ASCII range.
     * @throw std::invalid_argument if the specified ASCII range is invalid (low > high or out of printable ASCII range).
     */
    char getRandomChar(int low = 65, int high = 90)
    {
        if (low > high || low < 32 || high > 126)
            throw std::invalid_argument("Invalid ASCII range: low > high or out of printable ASCII range");

        seedGenerator();
        std::uniform_int_distribution<int> distribution(low, high);
        return static_cast<char>(distribution(generator));
    }

    /**
     * @brief Generates a random unsigned integer between the specified range [low, high].
     * @param low The lower bound of the range (inclusive).
     * @param high The upper bound of the range (inclusive).
     * @return Random unsigned integer within the specified range.
     * @throw std::invalid_argument if the specified range is invalid (low > high).
     */
    unsigned int getRandomUnsignedInt(unsigned int low = 0, unsigned int high = UINT_MAX)
    {
        if (low > high)
            throw std::invalid_argument("Invalid range: low > high");

        seedGenerator();
        std::uniform_int_distribution<unsigned int> distribution(low, high);
        return distribution(generator);
    }

    /**
     * @brief Generates a random unsigned long integer between the specified range [low, high].
     * @param low The lower bound of the range (inclusive).
     * @param high The upper bound of the range (inclusive).
     * @return Random unsigned long integer within the specified range.
     * @throw std::invalid_argument if the specified range is invalid (low > high).
     */
    unsigned long getRandomUnsignedLong(unsigned long low = 0, unsigned long high = ULONG_MAX)
    {
        if (low > high)
            throw std::invalid_argument("Invalid range: low > high");

        seedGenerator();
        std::uniform_int_distribution<unsigned long> distribution(low, high);
        return distribution(generator);
    }

    /**
     * @brief Generates a random unsigned long long integer between the specified range [low, high].
     * @param low The lower bound of the range (inclusive).
     * @param high The upper bound of the range (inclusive).
     * @return Random unsigned long long integer within the specified range.
     * @throw std::invalid_argument if the specified range is invalid (low > high).
     */
    unsigned long long getRandomUnsignedLongLong(unsigned long long low = 0, unsigned long long high = ULLONG_MAX)
    {
        if (low > high)
            throw std::invalid_argument("Invalid range: low > high");

        seedGenerator();
        std::uniform_int_distribution<unsigned long long> distribution(low, high);
        return distribution(generator);
    }

private:
    // Use Mersenne Twister as the random number generator
    std::mt19937_64 generator;

    /**
     * @brief Seeds the generator with the current time down to the nanosecond.
     */
    void seedGenerator()
    {
        // Seed with current time in a high-resolution manner
        auto now = std::chrono::high_resolution_clock::now();
        auto duration = now.time_since_epoch();
        auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);
        generator.seed(nanoseconds.count());
    }
};

#endif // LIBRANDOM_H
