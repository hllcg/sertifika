#include "subjectdn.h"
using namespace std;
SubjectDN::SubjectDN()
{

}

SubjectDN::~SubjectDN()
{

}
string SubjectDN::getCommonName()
{
  return commonName_;
}
string SubjectDN::getLocality()
{
  return locality_;
}
string SubjectDN::getOrganization()
{
  return organization_;
}
string SubjectDN::getOrganizationalUnit()
{
  return organizationalUnit_;
}
string SubjectDN::getStateOrProvince()
{
  return stateOrProvince_;
}
void SubjectDN::setCommonName(string commonName)
{
  commonName_=commonName;
}
void SubjectDN::setLocality(string locality)
{
  locality_=locality;
}
void SubjectDN::setOrganization(string organization)
{
  organization_=organization;
}
void SubjectDN::setOrganizationalUnit(string organizationalUnit)
{
  organizationalUnit_=organizationalUnit;
}
void SubjectDN::setStateOrProvince(string stateOrProvince)
{
  stateOrProvince_=stateOrProvince;
}

CertDate::CertDate()
{
  year_=month_=day_=0;
  hour_=min_=sec_=0;
}
void CertDate::setDate(uint year, uint month, uint day)
{
  year_=year;
  month_=month;
  day_=day;
}
void CertDate::setTime(uint hour, uint min, uint sec)
{
  hour_=hour;
  min_=min;
  sec_=sec;
}

