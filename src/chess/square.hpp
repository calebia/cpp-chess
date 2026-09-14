#pragma once

namespace chess{
    class Square {
        public:
            Square(int row, int col);
            int col() const;
            int row() const;

        private:
            int row_;
            int col_;
    };
}