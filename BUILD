cc_library(
    name = "cppcoro-includes",
    srcs = glob(["include/**/*.hpp"]),
    includes = ["include"],
    defines = ["CPPCORO_COMPILER_SUPPORTS_COROUTINE"],
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
    linkopts = ["-lpthread"],
    deps = [
        ":cppcoro-includes",
    ]
)

cc_library(
    name = "doctest",
    srcs = ["test/doctest/doctest.h"],
    strip_include_prefix = "test",
)

cc_test(
    name = "cppcoro-test",
    srcs = [
        'test/main.cpp',
        'test/counted.cpp',
        'test/generator_tests.cpp',
        'test/recursive_generator_tests.cpp',
        'test/async_generator_tests.cpp',
        'test/async_auto_reset_event_tests.cpp',
        'test/async_manual_reset_event_tests.cpp',
        'test/async_mutex_tests.cpp',
        'test/async_latch_tests.cpp',
        'test/cancellation_token_tests.cpp',
        'test/task_tests.cpp',
        'test/sequence_barrier_tests.cpp',
        'test/shared_task_tests.cpp',
        'test/sync_wait_tests.cpp',
        'test/single_consumer_async_auto_reset_event_tests.cpp',
        'test/single_producer_sequencer_tests.cpp',
        'test/multi_producer_sequencer_tests.cpp',
        'test/when_all_tests.cpp',
        'test/when_all_ready_tests.cpp',
        'test/ip_address_tests.cpp',
        'test/ip_endpoint_tests.cpp',
        'test/ipv4_address_tests.cpp',
        'test/ipv4_endpoint_tests.cpp',
        'test/ipv6_address_tests.cpp',
        'test/ipv6_endpoint_tests.cpp',
        'test/static_thread_pool_tests.cpp',
    ] + glob([
        "test/**/*.hpp",
    ]),
    deps = [
        ":cppcoro-lib",
        ":doctest",
    ]
)
