namespace VMath{
struct Vector{
    public:
    Vector(unsigned int X, unsigned int Y)
    :x(X), y(Y)
    {}
    Vector()
    :x(0),y(0)
    {} 
    public:
    unsigned int x,y;
};

Vector& operator+(const Vector& v1, const Vector& v2);
Vector& operator-(const Vector& v1, const Vector& v2);

Vector& operator+=(Vector& v1, const Vector& v2);
Vector& operator-=(Vector& v1, const Vector& v2);

}
