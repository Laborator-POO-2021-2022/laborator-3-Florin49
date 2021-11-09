#include "fractie.hpp"

Fractie::Fractie(int aa, int bb)
{
    this->a=aa;
    this->b=bb;
}
Fractie::Fractie(const Fractie& F)
{
    this->a=F.a;
    this->b=F.b;
}
Fractie& Fractie::operator=(const Fractie & F)
{
    this->a=F.a;
    this->b=F.b;
    return *this;
}
Fractie::~Fractie()
{
    a=b=0;
}
double Fractie::getValoare()
{
    return (double)a/b;
}
Fractie Fractie::getInv()
{
    Fractie F;
    F.a=this->b;
    F.b=this->a;
    return F;
}
void Fractie::setdata(int sus,int jos)
{
    this->a=sus;
    this->b=jos;
}
float Fractie::getA()
{
    return (float)this->a;
}
float Fractie::getB()
{
    return (float)this->b;
}

ostream& operator<<(ostream& out, const Fractie& F)
{
    if(F.b==0)
        cout<<"Fractie nedeterminata";
    else
        cout<<"Fractia este:"<<F.a<<"/"<<F.b;
    
    out<<"\nNumarator: "<<F.a;
    out<<"\nNumitor: "<<F.b<<"\n";
    out<<" ------------------------------\n";
    return out;
}
/*
ostream& Fractie::operator<<(ostream& out)
{
   out<<"Fractia este: "<<this->getA()<<"/"<<this->getB()<<".";
   return out;
}
*/
Fractie operator+(const Fractie& F1, const Fractie& F2)
{
    Fractie F(1,1);
    F.a=F1.a*F2.b+F2.a*F1.b;
    F.b=F1.b*F2.b;
    return F;
}
Fractie operator-(const Fractie& F1, const Fractie& F2)
{
    Fractie F(1,1);
    F.a=F1.a*F2.b-F2.a*F1.b;
    F.b=F1.b*F2.b;
    return F;
}
Fractie operator*(const Fractie& F1, const Fractie& F2)
{
    Fractie F;
    F.a=F1.a*F2.a;
    F.b=F1.b*F2.b;
    return F;
}
Fractie operator/(const Fractie& F1, const Fractie& F2)
{
    
    
    Fractie F;
    F.a=F1.a*F2.b;
    F.b=F1.b*F2.a;
    return F;
}

Fractie operator-(const Fractie& F)
{
    Fractie f;
    f.setdata(-F.a,F.b);
    return f;
}
Fractie& Fractie::operator +=( const Fractie& a)
{
    *this=*this+a;
    return *this;
}
Fractie& Fractie::operator -=( const Fractie&)
{
    *this=*this-a;
    return *this;
}
Fractie& Fractie::operator *=( const Fractie&)
{
    *this=*this*a;
    return *this;
}
Fractie& Fractie::operator /=( const Fractie&)
{
    *this=*this/a;
    return *this;
}
bool Fractie::operator ==(const Fractie & F)
{
    if(this->a*F.b==this->b*F.a)
         return true;
    return false;
}
bool Fractie::operator !=(const Fractie & F)
{
    return !(*this==F);
}
bool Fractie::operator <(const Fractie& F)
{
    if(this->a*F.b<this->b*F.a)
         return true;
    return false;
}
bool Fractie::operator >=(const Fractie&F)
{
    return !(*this<F);
}
bool Fractie::operator >(const Fractie& F)
{
    if(this->a*F.b>this->b*F.a)
         return true;
    return false;
}
bool Fractie::operator <=(const Fractie& F)
{
    return !(*this>F);
}