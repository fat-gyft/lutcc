// Copyright (c) 2015 FAT-GYFT, MIT License

#ifndef SRC_TOKEN_H_
#define SRC_TOKEN_H_

#include <iostream>
#include <string>
#include <cstring>

#include "boost/regex.hpp"

class Token {
 public:
    Token();

 private:	
  
};

class SimpleOperator : Token {
 public:
    SimpleOperator();

 private:

};

class Keyword : Token {
 public:
    Keyword();

 private:

};


#endif  // SRC_TOKEN_H_
