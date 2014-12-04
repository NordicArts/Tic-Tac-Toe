#ifndef NordicArts_TicTacToe_Game_GameState_Editor_H
#define NordicArts_TicTacToe_Game_GameState_Editor_H

#include <Includes.hpp>
#include <Game/GameState.hpp>
#include <Grid/Grid.hpp>

namespace NordicArts {
    namespace Game {
        enum class ActionState {
            NONE,
            PLAYING,
            AI_PLAYING
        };

        class GameStateEditor : public GameState {
        // Variables
        public:
        protected:
        private:
            Grid            m_oGrid;

            ActionState     m_eActionState;

        // Methods
        public:
            virtual void draw(const int iDT);
            virtual void update(const int iDT);
            virtual void handleInput();

            GameStateEditor(Game *pGame);

        protected:
        private:

        };
    };
};

#endif
