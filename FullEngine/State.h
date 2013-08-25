// FullEngine. Brian Fuller. August 2013.
//
// State.h
// Header file for a state

#ifndef STATE_H
#define STATE_H 1

#include <iostream>

namespace FullEngine
{
   class State
   {
   public:
      //ctor
      State();

      //dtor
      ~State();

      virtual void BeginState() = 0;
      virtual void UpdateState() = 0;
      virtual void EndState() = 0;

   private:

   };

}
#endif