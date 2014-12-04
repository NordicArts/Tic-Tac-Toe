#include <Main.hpp>
#include <Valkyrie/Player/Player.hpp>
#include <AI/AI.hpp>
#include <Grid/Grid.hpp>

namespace NordicArts {
    namespace Game {
        int Main() {
            // Player
            Valkyrie::Player oPlayer(12);
            Valkyrie::Player *pPlayer = &oPlayer;

            // Grid
            Grid  oGrid;
            Grid *pGrid = &oGrid;
            pGrid->createGrid();

            // AI
            AI  oAI(pGrid);
            AI *pAI = &oAI;
            pAI->setName("AI");

            printIt(pAI->getName());
        
            return EXIT_SUCCESS;
        }
    };
};

int main() {
    return NordicArts::Game::Main();
}
