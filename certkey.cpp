#include "certkey.h"

CertKey::CertKey()
{

}
void CertKey::setHashAlgorithm(HashAlgo hashAlgorithm)
{
  hashAlgorithm_=hashAlgorithm;
}
void CertKey::setKeyAlgorithm(KeyAlgo keyalgorithm)
{
  keyalgorithm_=keyalgorithm;
}
