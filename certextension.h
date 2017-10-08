#pragma once
#include <vector>
#include <iostream>
#include <cstdint>


class CertExtension
{
  bool basiCa_;
  std::vector<unsigned char> pubKey_,issuerPubkey_;
  uint keyUsage_,extentedKeyUsage_;
public:
  CertExtension();
  void setBasicConstraint(bool basiCa=false);
  void setSubKeyId(std::vector<unsigned char> pubKey);
  void setAutKeyId(std::vector<unsigned char> IssuerPubkey);
  
};
