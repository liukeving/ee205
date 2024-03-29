#ifndef EE205_STRING_CONVERSION_HPP
#define EE205_STRING_CONVERSION_HPP

#include <string>
#include <vector>
#include <sstream>

template <typename T>
std::string lexical_cast(T obj) {
    // Create a std::stringstream
    std::stringstream stream;
    // Using operator<<, output the object to it
    stream << obj;
    // Take the std::string from the stringstream
    std::string var = stream.str();
    return var;
}

template <typename T>
std::string vector_to_string(std::vector<T>& items) {
    std::stringstream stream;
    if(items.size() < 1) {
        return "";
    }
    else {
        stream << items[0];
    }
    // For each item in the vector
    for(int i = 1; i < items.size(); i++) {
    // Get the string representation of it
    // Put a comma after it if it's not the last element
        stream << "," << items[i];
    // Accumuate that string into a final result
    }
    return stream.str();
}

#endif // EE205_STRING_CONVERSION_HPP
