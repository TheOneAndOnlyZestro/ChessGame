#include "Piece.h"
class Chess::Piece::impl{
public:
impl(){}

public:
std::string m_Name;
VMath::Vector m_Position;
std::function<std::vector<VMath::Vector>(const VMath::Vector&)> m_CheckoutFunction;
};

Chess::Piece::Piece(const std::string& Name, const VMath::Vector& Position,
std::function<std::vector<VMath::Vector>(const VMath::Vector&)> CheckoutFunction){
    m_impl = new impl();
    m_impl->m_Name = Name;
    m_impl->m_Position = Position;
    m_impl->m_CheckoutFunction = CheckoutFunction;
}

std::vector<VMath::Vector> Chess::Piece::CheckoutPossibleMoves()
{
	std::vector<VMath::Vector> vec = m_impl->m_CheckoutFunction(m_impl->m_Position);
   #ifdef DEBUG_MODE
  	for(unsigned int i =0; i< vec.size(); i++){
		std::cout << vec[i].x << " , " << vec[i].y << std::endl;
	} 

   #endif
	return vec;
}

Chess::Piece::Piece(const Piece& rtside)
{
    m_impl = new impl(*(rtside.m_impl));
}

Chess::Piece::~Piece(){
    delete m_impl;
}

Chess::Piece& Chess::Piece::operator=(const Piece& rtside)
{
    m_impl = new impl(*(rtside.m_impl));
    return *this;
}

