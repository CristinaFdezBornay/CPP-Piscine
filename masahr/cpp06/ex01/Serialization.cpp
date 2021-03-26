#include "Serialization.hpp"

std::string Serialization::gen_random(const int len) {
    char s[] = "01234567";

    for (int i = 0; i < len; ++i) {
        s[i] = 'a' + i;
    }

    s[len] = 0;
    std::string str(s);
    return (str);
}

Serialization::Serialization( void )
{
    // srand(time(NULL));
    // this->data.s1 = gen_random(8);
    // this->data.n = rand();
    // this->data.s2 = gen_random(8); 
    // std::cout << "# raw data\n";
    // std::cout << "s1 = " << this->data.s1 << std::endl;
    // std::cout << "n = "<< this->data.n << std::endl;
    // std::cout << "s2 = " << this->data.s2 << std::endl;
}

Serialization::~Serialization( void )
{

}

Serialization::Serialization( Serialization const & s)
{
    *this = s;
    return ;
}

Serialization & Serialization::operator=(Serialization const & s)
{
    this->data = s.data;
    return (*this);
}

void*           Serialization::serialize( void )
{
    this->data.s1 = gen_random(7);
    this->data.n = 89;
    this->data.s2 = gen_random(7);
    std::cout << "# raw data\n";
    std::cout << "s1 = " << this->data.s1 << std::endl;
    std::cout << "n = "<< this->data.n << std::endl;
    std::cout << "s2 = " << this->data.s2 << std::endl;
    return (void*)&(this->data);
}

Serialization::Data* Serialization::deserialize(void *raw)
{
	// Serialization::Data *data = new Serialization::Data;

	// data->s1 = std::string(static_cast<char *>(raw), 8);
	// data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	// data->s2 = std::string(static_cast<char *>(raw) + 12, 8);
    // return(data);

	return (reinterpret_cast<Serialization::Data *>(raw));
}