// Vectors

// Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".
// Rules: (1)There are no consonants. Only vowels excluding the letter y; (2)The u‘s and e‘s are extra long, so we must double them.

#include <iostream>
#include <vector>
#include <string>

int main() {

  // Whale, whale whale.
  // What have we got here?

  std::string input = "turpentine and turtles";
  std::vector<char> vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');
  std::vector<char> result;

  for (int i = 0; i < input.size(); i++) {

    for (int j = 0; j < vowels.size(); j++) {

      if (input[i] == vowels[j]) {

        result.push_back(input[i]);
      }
    }
    if (input[i] == 'e' || input[i] == 'u') {
      result.push_back(input[i]);
    }
  }
  for (int y = 0; y < result.size(); y++) {
    std::cout << result[y];
    }
    std::cout << "\n";
}
