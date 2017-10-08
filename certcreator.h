#ifndef CERTCREATOR_H
#define CERTCREATOR_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <openssl/x509v3.h>
#include "subjectdn.h"
class CertCreator
{
public:
  CertCreator();
  CertCreator(CertTemplate template_);
  ~CertCreator();
  std::vector<unsigned char> getCert();
  void saveCertPem(std::string path);
  void saveCertDer(std::string path);
  void setSerial(unsigned long long serial);
  void setSerial(std::vector<unsigned char> serialVec);
  void setNotBeforeDate(CertDate notBeforeDate);
  void setNotAfterDate(CertDate notAfterDate);
  void setSubject(SubjectDN subjectDn);
  void setIssuerSubject(SubjectDN issuerSubjectDn);
  void writeToPath(std::vector< unsigned char > der, std::string path);
private:
  std::vector< unsigned char >  getCertDer(X509* cert);
};

#endif // CERTCREATOR_H
