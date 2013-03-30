
//
// hash.c
//
// Copyright (c) 2013 TJ Holowaychuk <tj@vision-media.ca>
//

#include "hash.h"

/*
 * Set hash `key` to `val`.
 */

inline void
luna_hash_set(khash_t(value) *self, char *key, luna_object_t *val) {
  int ret;
  khiter_t k = kh_put(value, self, key, &ret);
  kh_value(self, k) = val;
}

/*
 * Get hash `key`, or NULL.
 */

inline luna_object_t *
luna_hash_get(khash_t(value) *self, char *key) {
  khiter_t k = kh_get(value, self, key);
  return k == kh_end(self) ? NULL : kh_value(self, k);
}

/*
 * Check if hash `key` exists.
 */

inline int
luna_hash_has(khash_t(value) *self, char *key) {
  khiter_t k = kh_get(value, self, key);
  return kh_exist(self, k);
}

/*
 * Remove hash `key`.
 */

void
luna_hash_remove(khash_t(value) *self, char *key) {
  khiter_t k = kh_get(value, self, key);
  kh_del(value, self, k);
}