// Copyright (c) 2015 FAT-GYFT, MIT License

#include "./token.h"

#include <map>
#include <string>

const std::map<Token::Id, std::string> Token::ID_NAMES = {
    {Token::A, "A"}, {Token::P, "P"}, {Token::Ld, "Ld"}, {Token::Li, "Li"},
    {Token::D, "D"}, {Token::Lv, "Lv"}, {Token::Lc, "Lc"}, {Token::I, "I"},
    {Token::E, "E"},

    {Token::con, "const"}, {Token::var, "var"}, {Token::ecr, "ecrire"},
    {Token::lir, "lire"}, {Token::aff, ":="}, {Token::plu, "+"},
    {Token::min, "-"}, {Token::mul, "*"}, {Token::quo, "/"}, {Token::opp, "("},
    {Token::com, ","}, {Token::clo, ")"}, {Token::col, ";"}, {Token::equ, "="},
    {Token::idv, "id"}, {Token::num, "num"}
};

std::ostream & operator<<(std::ostream & stream, const Token & token) {
    stream << Token::ID_NAMES.find(token.m_id)->second;
    return stream;
}
