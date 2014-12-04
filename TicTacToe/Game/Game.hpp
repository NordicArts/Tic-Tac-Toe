#ifndef NordicArts_TicTacToe_Game_H
#define NordicArts_TicTacToe_Game_H

#include <Includes.hpp>

namespace NordicArts {
    namespace Game {
        class GameState;

        class Game {
        // Variables    
        public:
            std::stack<GameState *> m_sStates;
        
        protected:
        private:

        // Methods
        public:
            void pushState(GameState *pState);
            void popState();
            void changeState(GameState *pState);
            void gameLoop();

            GameState *peekState();

            Game();
            ~Game();

        protected:
        private:

        };
    };
};

#endif
