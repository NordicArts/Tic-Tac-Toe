#include <Main.hpp>
#include <Valkyrie/Player/Player.hpp>

namespace NordicArts {
    namespace Game {
        int Main() {
            // Player
            Valkyrie::Player oPlayer(12);
            Valkyrie::Player *pPlayer = &oPlayer;

            printIt(pPlayer->getLife());
        
            return EXIT_SUCCESS;
        }
    };
};

int main() {
    return NordicArts::Game::Main();
}
