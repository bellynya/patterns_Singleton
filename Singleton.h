//---------------------------------------------------------------------------

#ifndef SingletonH
#define SingletonH
#include <System.Classes.hpp>
#include <fstream>
//---------------------------------------------------------------------------

class Document
{
public:
	//Document(const Document&) = delete;
	static Document& Get()
	{
		static Document doc;
		return doc;
	}

	static void SaveToFile(AnsiString str){ Get().PSaveToFile(str); }
private:
	Document(){}

	void PSaveToFile(AnsiString text);

};
#endif
