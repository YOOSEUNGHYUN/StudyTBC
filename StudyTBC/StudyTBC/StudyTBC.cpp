#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	unsigned char option_viewd = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_liked = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flags = 0;

	
	//기사를 봤을 때
	if (my_article_flags | option_viewd)
	{
		my_article_flags |= option_viewd;
	}

	//기사의 좋아요를 다시 클릭했을 때
	if (my_article_flags & option_liked)
	{
		my_article_flags ^= option_liked;
	}
	else //기사의 좋아요를 클릭했을 때
	{
		my_article_flags |= option_liked;
	}

	//본 기사만 삭제할 때
	if (my_article_flags & option_viewd)
	{
		my_article_flags |= option_deleted;
	}
	
	return 0;
}


