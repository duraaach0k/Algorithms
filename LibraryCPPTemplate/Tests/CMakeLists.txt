add_executable(TestArrayCPPTemplate array.cpp)
target_include_directories(TestArrayCPPTemplate PUBLIC ..)
add_test(TestArrayCPPTemplate TestArrayCPPTemplate)

add_executable(TestListCPPTemplate list.cpp)
target_include_directories(TestListCPPTemplate PUBLIC ..)
add_test(TestListCPPTemplate TestListCPPTemplate)

add_executable(TestQueueCPPTemplate queue.cpp)
target_include_directories(TestQueueCPPTemplate PUBLIC ..)
add_test(TestQueueCPPTemplate TestQueueCPPTemplate)
set_tests_properties(TestQueueCPPTemplate PROPERTIES TIMEOUT 10)

add_executable(TestStackCPPTemplate stack.cpp)
target_include_directories(TestStackCPPTemplate PUBLIC ..)
add_test(TestStackCPPTemplate TestStackCPPTemplate)

add_executable(TestVectorCPPTemplate vector.cpp)
target_include_directories(TestVectorCPPTemplate PUBLIC ..)
add_test(TestVectorCPPTemplate TestVectorCPPTemplate)

add_executable(TestgraphmatrCPPTemplate graphmatr.cpp)
target_include_directories(TestgraphmatrCPPTemplate PUBLIC ..)
add_test(TestgraphmatrCPPTemplate TestgraphmatrCPPTemplate)
set_tests_properties(TestgraphmatrCPPTemplate PROPERTIES TIMEOUT 10)
