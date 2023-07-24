#include <iostream>
#include <string>
// 순수 가상 함수, 추상 기본 클래스, 인터페이스 클래스

using namespace std;

class IErrorLog	// 인터페이스일 경우 I를 붙여준다.
{
public:
	virtual bool reportError(const char* errorMessage) = 0;	// pure virtual function

	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void doSomething(IErrorLog& log)
{
	log.reportError("Runtime error!!");
}

int main()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);

	return 0;
}