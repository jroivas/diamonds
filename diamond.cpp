#include <iostream>

/**
 * Get certain amount of spaces in a string
 *
 * \param amount Number of spaces to get
 * \returns String with given number of spaces
 */
std::string getSpaces(unsigned int amount)
{
    std::string tmp = "";
    while (amount--) tmp += " ";
    return tmp;
}

/**
 * Get a line of character diamond.
 * Purpose to form proper diamond line by line
 *
 * \param diff Difference of target letter to 'A', ie. A - C = 2
 * \param pos Current position
 * \returns String presenting line at position
 */
std::string getLine(unsigned int diff, unsigned int pos)
{
    std::string tmp = "";
    if (pos > diff) return "ERROR: Invalid position";

    tmp += getSpaces(diff - pos);
    tmp += (char)('A' + pos);

    if (pos > 0) {
        tmp += getSpaces(pos * 2 - 1);
        tmp += (char)('A' + pos);
    }

    return tmp;
}

/**
 * Get a diamond as string, size defined by letter.
 * Letter is difference to 'A', for example 'C' makes:
 *   A
 *  B B
 * C   C
 *  B B
 *   A
 *
 * \param letter Any letter from A to Z
 * \returns Letter diamond
 */
std::string diamond(char letter)
{
    std::string res = "";

    if (letter < 'A' or letter > 'Z') {
        return "Please give letter between 'A' and 'Z'.\n";
    }

    int diff = letter - 'A';

    for (int i=0; i<diff; i++) {
        res += getLine(diff, i) + '\n';
    }

    for (int i=diff; i>=0; --i) {
        res += getLine(diff, i) + '\n';
    }

    return res;
}
