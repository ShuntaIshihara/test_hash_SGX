# Test sgx hash function
SGXのハッシュ関数について以下のことをテストしてみる
1. sgx_sha256_msgは実行するたびにことなるハッシュ値となるのか
```bash
Execute ECALL.

Output from OCALL: 
1176122782
=============================================================================
SGX_SUCCESS
Exited SGX function successfully.
=============================================================================

Returned integer from ECALL is: 31337

Whole operations have been executed correctly.
```
    何回実行しても値は変化しなかった。
2. sgx_sha256_init, sgx_sha256_update, sgx_sha256_finalを試す
    - sgx_sha256_init, sgx_sha256_updateを毎回してしまうとハッシュ値が変わるのかどうか
    - 初期化は一回だけにしたほうがいいのか
