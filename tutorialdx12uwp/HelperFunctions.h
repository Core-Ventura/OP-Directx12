#pragma once
#include "pch.h"

using namespace DirectX;

unsigned  int CalcConstantBufferByteSize(unsigned int bytesize);
void readfile(char const* fn, std::vector<char> &vbytes);
DirectX::XMVECTOR RandomVector();
float RandomNumber(float Min, float Max);