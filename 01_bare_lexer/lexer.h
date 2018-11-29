// flex-bison-playground -- 01_bare_lexer/lexer.h
// author: johannst

#pragma once

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

namespace nAppa {
   class Lexer: public yyFlexLexer {
    public:
      Lexer(std::istream& is): yyFlexLexer(&is) {}

      virtual int yylex() override;
   };
}

// vim:et:ft=cpp
