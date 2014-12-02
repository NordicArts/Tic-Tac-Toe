#include <Main.hpp>
#include <Valkyrie/Player.hpp>

namespace NordicArts {
    namespace Game {
        int Main() {
            // Player
            Valkyrie::Player oPlayer;
            Valkyrie::Player *pPlayer = &oPlayer;
        
            return EXIT_SUCCESS;
        }
    };
};

int main() {
    return NordicArts::Game::Main();
}
