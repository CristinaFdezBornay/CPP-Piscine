#include <iostream>

struct			Data
{
	std::string s1;
	int         n;
	std::string s2;
};

struct			Data2
{
	char 		*s1;
	int         n;
	char		*s2;
};

void*			serialize(void)
{
	Data *data = new Data;

    data->s1 = std::string("hellohello");
    data->n = 1234567;
    data->s2 = std::string("abcdefgh");
    return (void*)data;
}

void*			serialize2(void)
{
	Data2 *data = new Data2;

    data->s1 = "hellohello";
    data->n = 1234567;
    data->s2 = "abcdefgh";
    return (void*)data;
}

Data*			deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}

Data2*			deserialize2(void *raw)
{
	return reinterpret_cast<Data2 *>(raw);
}

int 			main()
{
    // void *raw = serialize();
	// Data *data = deserialize(raw);

	void *raw = serialize2();
	Data2 *data = deserialize2(raw);

	std::cout << "D addr  = " << data << " | size = " << sizeof(data) << std::endl;
	std::cout << "s1 = " << data->s1 << " | size = " << sizeof(data->s1) << " | addr = " << &data->s1 << std::endl;
	std::cout << "n = " << data->n << " | size = " << sizeof(data->n) << " | addr = " << &data->n << std::endl;
	std::cout << "s2 = " << data->s2 << " | size = " << sizeof(data->s2) << " | addr = " << &data->s2 << std::endl;
}

    // std::cout << "# raw data\n";
	// std::cout << "\nR size  = " << sizeof(&data) << std::endl;
	// std::cout << "R addr  = " << data << std::endl;
	// std::cout << "R addr  = " << &data << std::endl;
	// std::cout << "s1      = " << data->s1 << std::endl;
	// std::cout << "s1 size = " << sizeof(data->s1) << std::endl;
	// std::cout << "s1 addr = " << &data->s1 << std::endl;
	// std::cout << "\nn       = " << data->n << std::endl;
	// std::cout << "n size  = " << sizeof(data->n) << std::endl;
	// std::cout << "n addr  = " << &data->n << std::endl;
	// std::cout << "\ns2      = " << data->s2 << std::endl;
	// std::cout << "s2 size = " << sizeof(data->s2) << std::endl;
	// std::cout << "s2 addr = " << &data->s2 << std::endl;

	// std::cout << "\n===== static_cast ===== " << std::endl;
	// std::cout << "R addr  = " << raw << std::endl;
	// std::cout << "R addr  = " << &raw << std::endl;

	// std::cout << "\n\n# recovered data" << std::endl;
	// std::cout << "R addr  = " << raw << std::endl;
	// std::cout << "R addr  = " << &raw << std::endl;


	// std::cout << "R addr  = " << &raw << std::endl;
	// std::cout << "\nD size  = " << sizeof(&data) << std::endl;
	// std::cout << "D addr  = " << data << std::endl;
	// std::cout << "D addr  = " << &data << std::endl;
	// std::cout << "\ns1      = " << data->s1 << std::endl;
	// std::cout << "s1 size = " << sizeof(data->s1) << std::endl;
	// std::cout << "s1 addr = " << &data->s1 << std::endl;
	// std::cout << "\nn       = " << data->n << std::endl;
	// std::cout << "n size  = " << sizeof(data->n) << std::endl;
	// std::cout << "n addr  = " << &data->n << std::endl;
	// std::cout << "\ns2      = " << data->s2 << std::endl;
	// std::cout << "s2 size = " << sizeof(data->s2) << std::endl;
	// std::cout << "s2 addr = " << &data->s2 << std::endl;