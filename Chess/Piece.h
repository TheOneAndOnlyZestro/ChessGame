#pragma once
#include <string>
namespace Chess{
    class Piece{
        public:
        Piece();
        ~Piece();

        private:
        class impl;
        impl* m_impl;
    };
}