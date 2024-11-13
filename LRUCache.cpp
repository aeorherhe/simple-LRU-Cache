#include "LRUCache.h"

int LRUCache::get(const int key) {
    if (uMap.find(key) == uMap.end()) {
        return -1;
    }

    cache.splice(cache.begin(), cache, uMap.at(key));
    return uMap.at(key)->second;
}

int LRUCache::set(int key, int value) {
    if (uMap.find(key) != uMap.end()) {
        cache.splice(cache.begin(), cache, uMap.at(key));
        uMap.at(key)->second = value;
        return 0;
    }

    if (cache.size() == capacity) {
        uMap.erase(cache.back().first);
        cache.pop_back();
    }

    cache.emplace_front(key, value);
    uMap[key] = cache.begin();
    return 0;
}

