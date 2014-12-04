#ifndef NordicArts_TicTacToe_Game_GameState_Start_H
#define NordicArts_TicTacToe_Game_GameState_Start_H

#include <Includes.hpp>
#include <Game/GameState.hpp>

namespace NordicArts {
    namespace Game {
        class GameStateStart : public GameState {
        // Variables    
        public:
        protected:
        private:

        // Methods
        public:
            virtual void draw(const int iDT);
            virtual void update(const int iDT);
            virtual void handleInput();

            GameStateStart(Game *pGame);

        protected:
        private:
            void loadGame();

        };
    };
};

#endif
