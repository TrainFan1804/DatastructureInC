/*
 * The used type cast operator 'static_cast<type> (exp)' is used to cast the
 * enum to an integer (in this case you just get the saved integer value that
 * is saved in the enum itself directly)
 */
#include <iostream>

enum class Direction
{
    NORTH,
    EAST,
    SOUTH = 5,  // Next enum will be 6
    WEST
};

int main()
{
    Direction dir{ Direction::NORTH };
    std::cout << "Value of dir: " << static_cast<int> (dir) << "\n";

    std::cout << "North: " << static_cast<int> (Direction::NORTH) << "\n";
    std::cout << "East: " << static_cast<int> (Direction::EAST) << "\n";
    std::cout << "South: " << static_cast<int> (Direction::SOUTH) << "\n";
    std::cout << "West: " << static_cast<int> (Direction::WEST) << "\n";

    return 0;
}
