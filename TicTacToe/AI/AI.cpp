#include <AI/AI.hpp>

namespace NordicArts {
    namespace Game {
        AI::AI(Grid *pGrid) : m_pGrid(pGrid) {
        }

        AI::~AI() {
            m_pGrid = nullptr;
        }

        void AI::doMove() {
        }
    };
};
