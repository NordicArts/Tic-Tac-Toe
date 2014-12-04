#ifndef NordicArts_TicTacToe_Grid_H
#define NordicArts_TicTacToe_Grid_H

#include <Includes.hpp>

namespace NordicArts {
    namespace Game {
        // Grid Cell
        struct GridCell {
            int x;
            int y;
            int value;
        
            GridCell(int iX, int iY, int iValue) : x(iX), y(iY), value(iValue) {}
        };

        class Grid {
        // Variables
        public:
        protected:
        private:
            std::vector<GridCell> m_vGrid;

            int m_iWidth;
            int m_iHeight;

        // Methods
        public:
            Grid();

            std::vector<GridCell> createGrid();            
            std::vector<GridCell> createGrid(int iWidth, int iHeight);
            std::vector<GridCell> getGrid() const;

            

        protected:
        private:

        };
    };
};

#endif
