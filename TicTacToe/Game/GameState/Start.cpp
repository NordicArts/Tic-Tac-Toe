#include <Game/GameState.hpp>
#include <Game/GameState/Start.hpp>
#include <Game/GameState/Editor.hpp>

namespace NordicArts {
    namespace Game {
        void GameStateStart::draw(const int fDT) {
            return;
        };

        void GameStateStart::update(const int fDT) {
        };

        void GameStateStart::handleInput() {
        }

        void GameStateStart::loadGame() {
            this->m_pGame->pushState(new GameStateEditor(this->m_pGame));
        
            return;
        }

        GameStateStart::GameStateStart(Game *pGame) {
            this->m_pGame = pGame;
        }
    };
};
