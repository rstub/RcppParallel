// Auto-generated functors for functions provided by Boost.SIMD.
// See 'gen/simd-functors.R' for implementation.

namespace boost {
namespace simd {
namespace functors {

struct sum {
template <typename T>
inline T operator()(const T& data) {
    return boost::simd::sum(data);
}
};

struct plus {
template <typename T>
inline T operator()(const T& lhs, const T& rhs) {
    return lhs + rhs;
}
};

struct minus {
template <typename T>
inline T operator()(const T& lhs, const T& rhs) {
    return lhs - rhs;
}
};

struct times {
template <typename T>
inline T operator()(const T& lhs, const T& rhs) {
    return lhs * rhs;
}
};

struct divide {
template <typename T>
inline T operator()(const T& lhs, const T& rhs) {
    return lhs / rhs;
}
};


} // namespace functors
} // namespace simd
} // namespace boost
