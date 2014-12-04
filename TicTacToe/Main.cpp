#include <Main.hpp>
#include <Game/Game.hpp>
#include <Game/GameState/Start.hpp>

namespace NordicArts {
    namespace Game {
        int Main() {
            // Game State
            Game oGame;
            oGame.pushState(new GameStateStart(&oGame));
            oGame.gameLoop();

            return EXIT_SUCCESS;
        }
    };
};

int main() {
    return NordicArts::Game::Main();
}
