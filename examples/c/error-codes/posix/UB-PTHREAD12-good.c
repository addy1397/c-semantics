#include <pthread.h>

pthread_key_t key;

int main() {
      pthread_key_create(&key, NULL);
      pthread_key_delete(key);
}
