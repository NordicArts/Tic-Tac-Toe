#include <Game/GameState.hpp>
#include <Game/GameState/Editor.hpp>

namespace NordicArts {
    namespace Game {
        void GameStateEditor::draw(const int iDT) {
            return;
        }
        void GameStateEditor::update(const int iDT) {
            return;
        }
        void GameStateEditor::handleInput() {
            return;
        }

        GameStateEditor::GameStateEditor(Game *pGame) {
            this->m_pGame = pGame;

            this->m_eActionState = ActionState::NONE;
        }
    };
};
