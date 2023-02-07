//---------------------------------------------------------------------------

#pragma hdrstop

#include "Singleton.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Document::PSaveToFile(AnsiString text)
{
	std::string str = "myFile.txt";

	ofstream fout;

	fout.open(str, std::fstream::app);

	if (!fout.is_open())
	{
		ShowMessage("Fail in file openning");
	}
	else
	{
		fout << text;
        fout.close();
	}
}
