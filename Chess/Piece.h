#pragma once
#include "Math/Vector.h"

#include <string>
#include <ctime>
namespace Chess{
    class Piece{
        public:
        Piece(const std::string& Name);
        ~Piece();

        private:
        class impl;
        impl* m_impl;
    };
}