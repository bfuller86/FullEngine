// FullEngine. Brian Fuller. August 2013.
//
// main.cpp
// This is the application's starting point, and main game loop

#include <iostream>
#include "FullConsole.h"

using namespace std;

int Game_Update()
{


   return 0;
}

int Game_Draw()
{


   return 0;
}




int main()
{
   int returnVal = 0;
   bool gameIsRunning = true;



   // Main Game Loop...
   while(gameIsRunning)
   {
      // Update our game...
      if(returnVal > 0)
         returnVal = Game_Update();

#if DEBUG_LOG_GAME_LOOP
      // BPF TODO: print Game_Update return status with LogError()
#endif

      // Draw our game...
      if(returnVal > 0)
         returnVal = Game_Draw();

#if DEBUG_LOG_GAME_LOOP
      // BPF TODO:  print Game_Draw return status with LogError()
#endif

      // Update our flag based on the return value from our functions
      gameIsRunning = returnVal == 0;
   }



   return returnVal;
}