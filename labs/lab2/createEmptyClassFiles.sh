#!/bin/sh
cat << end > $1.hh
#ifndef $1.hh
#define $1.hh

class $1
{
    public:
      $1();
      ~$1();

    private:
};
#endif
end

cat << end > $1.cc
#include "./$1.hh"

$1::$1()
{}

$1::~$1()
{}
end
