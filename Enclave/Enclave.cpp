#include "Enclave_t.h"
#include <sgx_trts.h>
#include <sgx_tcrypto.h>

int ecall_test(const char *message, size_t message_len)
{
    sgx_sha256_hash_t *hash = (sgx_sha256_hash_t *)malloc(sizeof(sgx_sha256_hash_t));
    sgx_status_t status = sgx_sha256_msg((const uint8_t *)message, sizeof(message), (sgx_sha256_hash_t *)hash);
	ocall_print((int *)hash);

	return 31337;
}
