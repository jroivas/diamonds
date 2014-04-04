#include "diamond.h"
#include <cassert>
#include <iostream>

void test_getSpaces()
{
    assert( getSpaces(0) == "" );
    assert( getSpaces(1) == " " );
    assert( getSpaces(2) == "  " );
    assert( getSpaces(3) == "   " );
    assert( getSpaces(4) == "    " );
    assert( getSpaces(5) == "     " );
}

void test_getLine()
{
    assert( getLine(0, 0) == "A" );
    assert( getLine(1, 0) == " A" );
    assert( getLine(1, 1) == "B B" );
    assert( getLine(1, 2) == "ERROR: Invalid position" );
    assert( getLine(2, 2) == "C   C" );
    assert( getLine(5, 2) == "   C   C" );
    assert( getLine(5, 3) == "  D     D" );
    assert( getLine(5, 4) == " E       E" );
    assert( getLine(5, 5) == "F         F" );

}

void test_diamond()
{
    assert( diamond('A') == "A\n" );
    assert( diamond('B') == " A\n"
        "B B\n"
        " A\n"
         );
    assert( diamond('C') == "  A\n"
        " B B\n"
        "C   C\n"
        " B B\n"
        "  A\n"
         );
    assert( diamond('1') == "Please give letter between 'A' and 'Z'.\n" );
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    test_getSpaces();
    test_getLine();
    test_diamond();

    return 0;
}
