# Test sgx hash function
SGXのハッシュ関数について以下のことをテストしてみる
1. sgx_sha256_msgは実行するたびにことなるハッシュ値となるのか
2. sgx_sha256_init, sgx_sha256_update, sgx_sha256_finalを試す
    - sgx_sha256_init, sgx_sha256_updateを毎回してしまうとハッシュ値が変わるのかどうか
    - 初期化は一回だけにしたほうがいいのか
