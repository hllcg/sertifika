#include <iostream>
#include "certcreator.h"
//TODO 1- sertifika olusturulacak
//TODO 6- sertifikaya anahtar ve imza eklenecek
//TODO 7- testler yazilacak



int main(int argc, char **argv) {
    CertCreator creater;
    auto der=creater.getCert();
    creater.writeToPath(der,"/home/hll/sertifikaCalisma/test.der");
    return 0;
}
