#ifndef NordicArts_TicTacToe_Game_GameState_H
#define NordicArts_TicTacToe_Game_GameState_H

#include <Game/Game.hpp>

namespace NordicArts {
    namespace Game {
        class GameState {
        // Variables
        public:
            Game *m_pGame;

        protected:
        private:

        // Methods
        public:
            virtual void draw(const int iDT) = 0;
            virtual void update(const int iDT) = 0;
            virtual void handleInput() = 0;

            virtual ~GameState() {
                m_pGame = nullptr;
            }

        protected:
        private:

        };
    };
};

#endif
