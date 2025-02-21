#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> generateLetterArt(char letter) {
    std::vector<std::string> art;
    switch (toupper(letter)) {
    case 'B':
        art = {
            "BBBBBB ",
            "B     B",
            "BBBBBB ",
            "B     B",
            "BBBBBB "
        };
        break;
    case 'Y':
        art = {
            "Y   Y",
            " Y Y ",
            "  Y  ",
            "  Y  ",
            "  Y  "
        };
        break;
    case 'F':
        art = {
            "FFFFFF",
            "F     ",
            "FFFFFF",
            "F     ",
            "F     "
        };
        break;
    case 'O':
        art = {
           " OOOOO ",
           "O     O",
           "O     O",
           "O     O",
           " OOOOO "
        };
        break;
    case 'R':
        art = {
            "RRRRRR ",
            "R     R",
            "RRRRRR ",
            "R R    ",
            "R   R  "
        };
        break;
    case 'T':
        art = {
            "TTTTTTT",
            "   T   ",
            "   T   ",
            "   T   ",
            "   T   "
        };
        break;
    case 'H':
        art = {
            "H   H",
            "H   H",
            "HHHHH",
            "H   H",
            "H   H"
        };
        break;
    case 'A':
        art = {
            "  AAA  ",
            " A   A ",
            " AAAAA ",
            "A     A",
            "A     A"
        };
        break;
    case 'N':
        art = {
            "N   N",
            "NN  N",
            "N N N",
            "N  NN",
            "N   N"
        };
        break;
    case 'G':
        art = {
            " GGGGG ",
            "G     G",
            "G  GGG ",
            "G     G",
            " GGGGG "
        };
        break;
    default:
        art = {
            "      ",
            "      ",
            "      ",
            "      ",
            "      "
        };
        break;
    }
    return art;
}
int add(int a, int b);
int substraction(int a, int b);

int main() {
    std::string text = "by forthang";
    std::vector<std::vector<std::string>> lettersArt;

    for (char c : text) {
        lettersArt.push_back(generateLetterArt(c));
    }

    for (size_t i = 0; i < 5; ++i) {
        for (const auto& letterArt : lettersArt) {
            std::cout << letterArt[i] << " "; 
        }
        std::cout << std::endl; 
    }
    std::cout << std::endl;
    int a = 5;
    int b = 10;


    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Substraction: " << substraction(a,b) << std::endl;

    return 0;
}