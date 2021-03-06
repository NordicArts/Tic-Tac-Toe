#include <Grid.hpp>

namespace NordicArts {
    namespace Game {
        Grid::Grid() {
        }

        std::vector<GridCell> Grid::createGrid() {
            return createGrid(3, 3);
        }
        std::vector<GridCell> Grid::createGrid(int iWidth, int iHeight) {
            std::vector<GridCell> vGrid;

            // Set the sizes
            m_vGridSize.x = iWidth;
            m_vGridSize.y = iHeight;

            for (int i = 0; i < iWidth; i++) {
                for (int j = 0; j < iHeight; j++) {
                    GridCell sGrid(i, j, 0);

                    vGrid.insert(vGrid.end(), sGrid);
                }
            }

            m_vGrid = vGrid;
            return vGrid;
        }

        std::vector<GridCell> Grid::getGrid() const {
            return m_vGrid;
        }

        glm::vec2 Grid::getGridSize() const {
            return m_vGridSize;
        }        
    };
};
