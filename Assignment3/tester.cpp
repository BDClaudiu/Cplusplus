#include"abstract_tokenizer.h"
#include"sentence_tokenizer.h"
#include<string>
#include<fstream>
#include<iostream>
#include<sstream>

using namespace std;

int main()
{
	
	ifstream ifs("test_file.txt");
	if (!ifs)
	{
		cerr << "Failed to open " << "test_file.txt" << endl;
		return 0;
	}
	string line;
	string content;
	while (getline(ifs, line))
	{
		content += line;
	}
	ifs.close();

	sentence_tokenizer tk(content);
	while (tk.hasNextToken())
		cout << tk.nextToken() << endl;
	while (true);
	

	return 0;
}

