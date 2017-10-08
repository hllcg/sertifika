#pragma once
enum HashAlgo : int
{
  SHA1_HASH=-128,
  SHA256_HASH,
  SHA384_HASH,
  SHA512_HASH,
  MD5_HASH
};
enum KeyAlgo : int
{
  ECC_P224=-256,
  ECC_P521,
  RSA_1024,
  RSA_2048,
  RSA_4096
};