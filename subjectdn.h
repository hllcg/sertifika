#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "certextension.h"
#include "certkey.h"

class SubjectDN
{
  std::string commonName_;
  std::string locality_;
  std::string country_;
  std::string organization_;
  std::string organizationalUnit_;
  std::string stateOrProvince_;
public:
  SubjectDN();
  ~SubjectDN();
  void setCommonName(std::string commonName);
  void setLocality(std::string locality);
  void setOrganization(std::string organization);
  void setOrganizationalUnit(std::string organizationalUnit);
  void setStateOrProvince(std::string stateOrProvince);
  std::string getCommonName();
  std::string getLocality();
  std::string getOrganization();
  std::string getOrganizationalUnit();
  std::string getStateOrProvince();
  
};
class CertDate
{
  uint year_;
  uint month_;
  uint day_;
  uint hour_;
  uint min_;
  uint sec_;
public:
  CertDate();
  void setDate(uint year,uint month,uint day );
  void setTime(uint hour,uint min,uint sec );
  
};

struct CertTemplate
{
  CertDate notBeforeDate,notAfterDate;
  SubjectDN subjectDn,issuerSubjectDn;
  CertKey algorithms;
  CertExtension extensions;
};