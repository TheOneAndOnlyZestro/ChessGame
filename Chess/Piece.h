#pragma once
#include "Math/Vector.h"

#include <iostream>
#include <string>
#include <functional>

#define DEBUG_MODE
namespace Chess{
    class Piece{
        public:
        Piece(const std::string& Name, const VMath::Vector& Position,
        const std::function<VMath::Vector()>& Move);

        void MakeMove();

        //Rule Of Three
        ~Piece();
        Piece& operator=(const Piece& rtside);
        Piece(const Piece& rtside);

        #ifdef DEBUG_MODE
            void Debug();
        #endif
        private:
        class impl;
        impl* m_impl;
    };
}