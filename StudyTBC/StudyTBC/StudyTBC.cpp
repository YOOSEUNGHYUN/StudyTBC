#include <iostream>	
#include <string>
#include <boost/asio.hpp>

//	TCP/IP 네트워킹 맛보기 
//	Boost.asio
//	Socket IOStream

//	Streaming style
//	http://www.boost.org/doc/libs/1_68_0/doc/html/boost_asio/overview/networking/iostreams.html
using boost::asio::ip::tcp;

//	127.0.0.1 은 내 컴퓨터다.
int main(int argc, char* argv[])	// argument로 서버의 주소를 입력 받고있다.
{
	try
	{
		if (argc != 2)
		{
			std::cerr << "Usage: client <host>" << std::endl;
			return 1;
		}

		tcp::iostream stream(argv[1], std::to_string(int(13)));	//	port number 13
		if (!stream)
		{
			std::cout << "Unable to connect: " << stream.error().message() << std::endl;
			return 1;
		}

		//	send message to server
		stream << "Hello from client";
		stream << std::endl;	//	send new-line to end receiver'stream getline

		//	receive message from server
		std::string line;
		std::getline(stream, line);
		std::cout << line << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}