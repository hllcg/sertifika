#pragma once
#include <vector>
#include <iostream>
#include "certDefines.h"

class CertKey
{
  KeyAlgo keyalgorithm_;
  HashAlgo hashAlgorithm_;
  std::vector<unsigned char> keyDer_;
public:
  CertKey();
  void setKeyAlgorithm(KeyAlgo keyalgorithm);
  void setHashAlgorithm(HashAlgo hashAlgorithm);
  std::vector<unsigned char > generateKey();
  void setKey(std::vector<unsigned char> keyDer);
  std::vector<unsigned char > getPemFormat();
};

