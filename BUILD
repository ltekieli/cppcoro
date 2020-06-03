cc_library(
    name = "cppcoro-includes",
    srcs = glob(["include/**/*.hpp"]),
    includes = ["include"],
)

cc_library(
    name = "cppcoro-lib",
    srcs = [
        'lib/async_auto_reset_event.cpp',
        'lib/async_manual_reset_event.cpp',
        'lib/async_mutex.cpp',
        'lib/cancellation_state.cpp',
        'lib/cancellation_token.cpp',
        'lib/cancellation_source.cpp',
        'lib/cancellation_registration.cpp',
        'lib/lightweight_manual_reset_event.cpp',
        'lib/ip_address.cpp',
        'lib/ip_endpoint.cpp',
        'lib/ipv4_address.cpp',
        'lib/ipv4_endpoint.cpp',
        'lib/ipv6_address.cpp',
        'lib/ipv6_endpoint.cpp',
        'lib/static_thread_pool.cpp',
        'lib/auto_reset_event.cpp',
        'lib/spin_wait.cpp',
        'lib/spin_mutex.cpp',
    ] + glob([
        "lib/**/*.hpp"
    ]),
    strip_include_prefix = "lib",
    deps = [
        ":cppcoro-includes",
    ]
)
