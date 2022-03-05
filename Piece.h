#pragma once
#include "Vector.h"

#include <vector>
#include <iostream>
#include <string>
#include <functional>

#define DEBUG_MODE
namespace Chess{
    class Piece{
        public:
        Piece(const std::string& Name, const VMath::Vector& Position,
        const std::function<std::vector<VMath::Vector>(const VMath::Vector&)> CheckoutFunction);

	std::vector<VMath::Vector> CheckoutPossibleMoves();

        //Rule Of Three
        ~Piece();
        Piece& operator=(const Piece& rtside);
        Piece(const Piece& rtside);

        private:
        class impl;
        impl* m_impl;
    };
}
