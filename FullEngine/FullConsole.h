// FullEngine. Brian Fuller. August 2013.
//
// FullConsole.h
// Header file for the console

#ifndef FULL_CONSOLE
#define FULL_CONSOLE 1

#include <iostream>

using namespace std;

namespace FullEngine
{
    void LogError(char* reporter, int returnCode)
    {
#if DEBUG_SHOW_ERRORS
        // print the given error to our console
#endif
    }
}
#endif