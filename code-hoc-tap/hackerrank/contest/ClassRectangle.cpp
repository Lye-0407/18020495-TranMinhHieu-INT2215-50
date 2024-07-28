class Box 
{
    public: 
    int length, breadth, height;
    
    Box() : length(0) , breadth(0), height(0) {}
    
    Box (int l, int b, int h) : length(l), breadth(b), height(h) {}
    
    Box (const Box& other) : length(other.length), breadth(other.breadth), height(other.height) {}

    int getLength() const {return length;}
    
    int getBreadth() const {return breadth;}
    
    int getHeight() const {return height;}
    
    long long CalculateVolume() const
    {
        return static_cast<long long>(length) * breadth * height;
    }
    
    bool operator<(const Box& other) const {
        if (length < other.length) return true;
        if (length == other.length && breadth < other.breadth) return true;
        if (length == other.length && breadth == other.breadth && height < other.height) return true;
        return false;
    }

    friend ostream& operator<<(ostream& os, const Box& b) {
        os << b.length << " " << b.breadth << " " << b.height;
        return os;
    }
};