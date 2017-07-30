#include <iostream>
using namespace std;
class CMstring
{
public:
	CMstring(char *s)
	{
		len = strlen(s);
		contents = new char[len +1];
		strcpy(contents,s);
	}
	CMstring(CMstring &str)
	{
		len = str.len;
		contents = new char[len+1];
		strcpy(contents,str.contents);
	}
	static int set_total_len(CMstring str)
	{
		total_len += str.len;
		return total_len;
	}
	~CMstring()
	{
		delete []contents;
	}
	private:
		static int total_len;
		int len;
		char *contents;
};
int CMstring::total_len = 0;
int main()
{
	CMstring str1("this is the first string ");
	cout<<str1.set_total_len(str1)<<"\n";
	CMstring str2("this is the second string ");
	cout<<str2.set_total_len(str2)<<"\n";
	return 0;
}