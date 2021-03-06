#ifndef SENTENCE_TOKENIZER_H
#define SENTENCE_TOKENIZER_H

#include"abstract_tokenizer.h"

class sentence_tokenizer : public abstract_tokenizer
{
public:
	sentence_tokenizer(std::string content, std::string delimiters = ".!?");
	~sentence_tokenizer();
	std::string peekNextToken() override; //returns the next token without removing it from the content
};

#endif