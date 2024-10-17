#pragma once





class complex
{
private:
	double re;//vaiable d'instance
	double img;//vaiable d'instance
public:
	complex();
	complex(double, double);
	complex(const complex&);
	void afficher() const;
	void afficher(double) const;
	complex* operator+(const complex& Z) const;
	complex* operator+(const double r);
	complex* operator-(const complex& M) const;
	complex* operator-(const double r);
	complex* operator*(const complex& R) const;
	double modulo(const complex& R);
	complex* conjugee(const complex& Z);
	complex* operator/(const complex& R) const;
	bool operator==(const complex & R);
	//complex operator+(double& d, complex& Z);//le plus est une opertaeur binaire il prend 2 argument et on a deja this c'est un parametre 


	friend complex operator+(double& d, complex& Z) {

		complex C;
		C.re = d + Z.re;
		C.img = d + Z.img;
		return C;
	}
	friend complex operator-(double& d, complex& Z) {

		complex C;
		C.re = d - Z.re;
		C.img = d - Z.img;
		return C;
	}
};
