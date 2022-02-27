#include "Piece.h"
class Chess::Piece::impl{
public:
impl(){}
public:
std::string m_Name;
};

Chess::Piece::Piece(const std::string& Name){
    m_impl = new impl();
    m_impl->m_Name = Name;
}