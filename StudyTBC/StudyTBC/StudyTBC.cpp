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

	
	//��縦 ���� ��
	if (my_article_flags | option_viewd)
	{
		my_article_flags |= option_viewd;
	}

	//����� ���ƿ並 �ٽ� Ŭ������ ��
	if (my_article_flags & option_liked)
	{
		my_article_flags ^= option_liked;
	}
	else //����� ���ƿ並 Ŭ������ ��
	{
		my_article_flags |= option_liked;
	}

	//�� ��縸 ������ ��
	if (my_article_flags & option_viewd)
	{
		my_article_flags |= option_deleted;
	}
	
	return 0;
}


