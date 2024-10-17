#include "complex.h"
#include"iostream"
#include"math.h"
#include<cmath>


complex::complex()
{
	//std::cout << "constructeur sans parametre" << std::endl;
	this->re = 0;
	this->img = 0;
}

complex::complex(double reel, double imaginaire): re(reel),img(imaginaire)//le fait de ceer et d'initialiser au meme temps
{
	//std::cout << "constructeur sans parametre" << std::endl;
	/*this->re = reel;
	this->img = imaginaire;*/


}

complex::complex(const complex& c) :re(c.re), img(c.img)//le fait de ceer et d'initialiser au meme temps
{
	/*this->re = c.re;
	this->img = c.img;*/

}

void complex::afficher() const
{
	//std::cout << "la methode afficher" << std::endl;
	if (this->img > 0) {
		std::cout << "complex=" << this->re << "+" << this->img << "i" << std::endl;
	}
	else
		std::cout << "complex=" << this->re << this->img << "i" << std::endl;
}

void complex::afficher(double i) const
{
	std::cout << "le modulo=" << i << std::endl;
}

complex* complex::operator+(const double r)
{
	complex* Z2 = new complex();
	Z2->re = this->re + r;
	Z2->img = this->img;
	return Z2;
	
}

complex* complex::operator-(const complex& Z) const
{
	complex* Z2 = new complex();
	Z2->re = this->re - Z.re;
	Z2->img = this->img - Z.img;
	return Z2;
}

complex* complex::operator-(const double r)
{
	complex* Z = new complex();
	Z->re = this->re - r;
	Z->img = this->img;
	return Z;
}

complex* complex::operator*(const complex& Z) const
{
	complex* Z2 = new complex();
	Z2->re = this->re * Z.re + -(this->img*Z.img);
	Z2->img = this->img*Z.re + Z.img*this->re;
	return Z2;
	
}

double complex::modulo(const complex& R)
{
	double i;
	i = sqrt(pow(R.re,2)+pow(R.img,2));
	return i;
	
}

complex* complex::conjugee(const complex& Z)
{
	complex* Z1 = new complex();
	Z1->re = Z.re;
	Z1->img = -Z.img;
	return Z1;
}

complex* complex::operator/(const complex& R) const
{
	complex* Z1 = new complex();
	Z1->re = ((this->re * R.re) + (R.img * this->img)) / (sqrt(R.re) + sqrt(R.img));
	Z1->img = ((R.re * this->img) - (R.img * this->re)) / (sqrt(R.re) + sqrt(R.img)); 
	return Z1;
}

bool complex::operator==(const complex& R)
{
	if ((this->re == R.re) && (this->img == R.img))
		return true;
	return false;
	
}





complex* complex::operator+(const complex& Z) const
{
	complex* Z2 = new complex();
	Z2->re = this->re + Z.re;
	Z2->img = this->img + Z.img;
	return Z2;
	//return complex(this->re + Z.re , this->img + Z.img);

	//une autre methode
	/*this->re = this->re + Z.re;
	this->img=this->img + Z.img;
	return *this*///->>>>>mais il faut eliminer const
		
}

