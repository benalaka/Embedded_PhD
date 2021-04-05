// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <string>

void first()
{
	std::string f = "1 : Educative.blog\n";
	std::cout << f << std::endl;
}

void second()
{
	std::string s = "2 : Educative\n";
	std::cout << s << std::endl;
}

void third()
{
	std::string t = "3 : courses\n";
	std::cout << t << std::endl;
}

void fourth()
{
	std::string fr = "4 : are great\n";
	std::cout << fr << std::endl;
}

int main()
{
	std::thread first(first);     // spawn new thread that calls first()
	std::thread second(second);  // spawn new thread that calls second()
	std::thread third(third);  // spawn new thread that calls third()
	std::thread fourth(fourth);  // spawn new thread that calls fourth()

	std::cout << "main, 4 threads now execute concurrently..."<<std::endl;

	// synchronize threads:
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes
	third.join();               // pauses until third finishes
	fourth.join();               // pauses until fourth finishes


	std::cout << "Threads completed running...\n";

	return 0;
}