#ifndef NordicArts_TicTacToe_AI_H
#define NordicArts_TicTacToe_AI_H

#include <Grid/Grid.hpp>
#include <Valkyrie/Player/Player.hpp>

namespace NordicArts {
    namespace Game {
        class AI : public Valkyrie::Player {
        // Variables
        public:
        protected:
        private:
            Grid *m_pGrid;

        //Methods
        public:
            AI(Grid *pGrid);
            virtual ~AI();

            void doMove();

        protected:
        private:

        };
    };
};

#endif
