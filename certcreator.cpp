#include "certcreator.h"
#include <fstream>

using namespace std;
CertCreator::CertCreator()
{
  
}

CertCreator::~CertCreator()
{

}
std::vector< unsigned char > CertCreator::getCert()
{
  X509 *cert = X509_new();
  X509_NAME *nn = X509_get_subject_name(cert);
  ASN1_INTEGER_set(X509_get_serialNumber(cert), 1);
  X509_gmtime_adj(X509_get_notBefore(cert), 0);
  X509_gmtime_adj(X509_get_notAfter(cert), 31536000L);
  
  X509_NAME_add_entry_by_txt(nn, "C",  MBSTRING_ASC,
                           (unsigned char *)"CA", -1, -1, 0);
  X509_NAME_add_entry_by_txt(nn, "O",  MBSTRING_ASC,
                           (unsigned char *)"MyCompany Inc.", -1, -1, 0);
  X509_NAME_add_entry_by_txt(nn, "CN", MBSTRING_ASC,
                           (unsigned char *)"localhost", -1, -1, 0);
  
  return getCertDer(cert);
}
std::vector< unsigned char >  CertCreator::getCertDer(X509* cert)
{
  auto size=i2d_X509(cert,nullptr);
  std::vector<unsigned char> retVec(size);
  unsigned char *pp = retVec.data();
  i2d_X509(cert,&pp);
  return retVec;
}
void CertCreator::writeToPath(std::vector< unsigned char > der, std::string path)
{
  ofstream of;
  of.open(path);
  of.write((char*)(der.data()),der.size());
  of.close();
}



