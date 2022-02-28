#include "Piece.h"
class Chess::Piece::impl{
public:
impl(){}

public:
std::string m_Name;
VMath::Vector m_Position;
std::function<VMath::Vector ()> m_Move;
};

Chess::Piece::Piece(const std::string& Name, const VMath::Vector& Position,
const std::function<VMath::Vector()>& Move){
    m_impl = new impl();
    m_impl->m_Name = Name;
    m_impl->m_Position = Position;
    m_impl->m_Move = Move;
}

void Chess::Piece::MakeMove()
{
    m_impl->m_Position += m_impl->m_Move();
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

#ifdef DEBUG_MODE
    void Chess::Piece::Debug(){
        std::cout << "<--------     CHESS PIECE DATA    --------> \n" <<
        "NAME:      " << m_impl->m_Name << "    \n"<<
        "POSITION:      "<<"( " << m_impl->m_Position.x << " , " << m_impl->m_Position.y<< " )"<<"\n";
    }
#endif