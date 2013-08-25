// FullEngine. Brian Fuller. August 2013.
//
// FiniteStateMachine.h
// Header file for a finite state machine

#ifndef FSM_H
#define FSM_H 1

#include "State.h"

namespace FullEngine
{
   class FiniteStateMachine
   {
   public:
      //ctor
      FiniteStateMachine();

      //dtor
      ~FiniteStateMachine();

      void ChangeState(State* newState);
      void Update();

      inline const State* const GetState() { return currentState; }
      inline const State* const GetGlobalState() { return globalState; }

   private:

      State* globalState;
      State* currentState;
   };
}

#endif