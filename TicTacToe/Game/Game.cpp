#include <Game/Game.hpp>
#include <Game/GameState.hpp>

#include <AI/AI.hpp>
#include <Grid/Grid.hpp>
#include <Game/GameState.hpp>

#include <NordicOS/Time/Time.hpp>
#include <Valkyrie/Player/Player.hpp>
#include <Valkyrie/Color/Color.hpp>

namespace NordicArts {
    namespace Game {
        void Game::pushState(GameState *pState) {
            m_sStates.push(pState);

            return;
        }
        void Game::popState() {
            delete this->m_sStates.top();
            
            this->m_sStates.pop();
    
            return;
        }
        void Game::changeState(GameState *pState) {
            if (!this->m_sStates.empty()) {
                popState();
            }

            pushState(pState);
            
            return;
        }
        
        GameState *Game::peekState() {
            if (this->m_sStates.empty()) {
                return nullptr;
            }

            return this->m_sStates.top();
        }

        Game::Game() {
            // Create Grid
            Grid  oGrid;
            Grid *pGrid = &oGrid;
            pGrid->createGrid(3, 3);

            // Create the AI Player
            AI  oAI(pGrid);
            AI *pAI = &oAI;
        }
        
        void Game::gameLoop() {
            NordicOS::Time oTime;

            int i = 5000;

            while (true) {
                int iDT = oTime.getSecond();

                // Make sure state is something
                if (peekState() == nullptr) {
                    continue;
                }

                peekState()->handleInput();
                peekState()->update(iDT);

                this->m_oWindow.clear(Valkyrie::Color::Black);

                peekState()->draw(iDT);

                this->m_oWindow.display();
            }
        }

        Game::~Game() {
            while (!this->m_sStates.empty()) {
                popState();
            }
        }
    };
};
