#include "certextension.h"

CertExtension::CertExtension()
{

}

void CertExtension::setAutKeyId(std::vector< unsigned char > IssuerPubkey)
{
  issuerPubkey_=IssuerPubkey;
}
void CertExtension::setBasicConstraint(bool basiCa)
{
  basiCa_=basiCa;
}
void CertExtension::setSubKeyId(std::vector< unsigned char > pubKey)
{
  pubKey_=pubKey;
}

