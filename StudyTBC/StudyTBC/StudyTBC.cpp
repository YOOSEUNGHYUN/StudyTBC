#include <iostream>	
#include <ctime>
#include <string>
#include <boost/asio.hpp>

//	TCP/IP 네트워킹 맛보기 
//	Boost.asio
//	Socket IOStream

//	Examples are based on
//	http://www.boost.org/doc/libs/1_68_0/doc/html/boost_asio/examples.html#boost_asio.examples.iostreams
using namespace std;
using boost::asio::ip::tcp;

int main()
{
	try
	{
		boost::asio::io_service io_service;

		tcp::endpoint endpoint(tcp::v4(), 13);	//	13 포트 넘버 : 채널 개념
		tcp::acceptor acceptor(io_service, endpoint);

		std::cout << "Server started" << std::endl;

		for (;;)	// while(true) 무한루프
		{
			const std::string message_to_send = "Hello From Server";

			boost::asio::ip::tcp::iostream stream;

			std::cout << "check 1" << std::endl;

			boost::system::error_code ec;
			acceptor.accept(*stream.rdbuf(), ec);

			std::cout << "check 2" << std::endl;

			if (!ec)	// TODO: How to take care of multiple clients? Multi-threading?
			{
				//	receive message from client
				std::string line;
				std::getline(stream, line);
				std::cout << line << std::endl;

				//	send message to client
				stream << message_to_send;
				stream << std::endl;			//	send std::endl to end getline of client
			}
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}