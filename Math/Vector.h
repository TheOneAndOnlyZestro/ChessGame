struct Vector{
    public:
    Vector(unsigned int X, unsigned int Y)
    :x(X), y(Y)
    {}
    public:
    unsigned int x,y;
};

const Vector& operator+(const Vector& v1, const Vector& v2);
const Vector& operator-(const Vector& v1, const Vector& v2);