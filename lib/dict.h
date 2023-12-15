// 딕셔너리를 이용한 데이터프레임 생성

#include <vector>
#include <string>
#include <map>

// Simple KeyValue dictionary
template <typename K, typename V>
class Dictionary {
    public:
        void insert(const K& key, const V& value) {
            data[key] = value;
        }

        bool contains(const K& key) const {
            return data.find(key) != data.end();
        }

        V& operator[](const K& key) {
            return data[key];
        }

    private:
        std::map<K, V> data;
};