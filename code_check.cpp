#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int guessed_number;
    int random_number;
    int tries = 0; // Initialize tries to keep track of the number of attempts

    srand(time(NULL));
    random_number = rand() % 100 + 1;

    do {
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guessed_number;
        tries++;

        if (guessed_number > random_number) {
            std::cout << "Greater than the number.\n";
        } else if (guessed_number < random_number) {
            std::cout << "Less than the number.\n";
        } else {
            std::cout << "Yes, that's the number! " << guessed_number << "\n";
        }

    } while (random_number != guessed_number);

    std::cout << "You guessed the number in " << tries << " tries.\n";

    return 0;
}
