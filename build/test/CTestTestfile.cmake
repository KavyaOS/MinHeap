# CMake generated Testfile for 
# Source directory: F:/SDSU/Fall 2020/CS635/Assignment1/Assignment1_Kavya_Onkarappa_Sunanda_825893660/test
# Build directory: F:/SDSU/Fall 2020/CS635/Assignment1/Assignment1_Kavya_Onkarappa_Sunanda_825893660/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(minHeapTests "F:/SDSU/Fall 2020/CS635/Assignment1/Assignment1_Kavya_Onkarappa_Sunanda_825893660/build/test/Debug/minHeapTests.exe")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(minHeapTests "F:/SDSU/Fall 2020/CS635/Assignment1/Assignment1_Kavya_Onkarappa_Sunanda_825893660/build/test/Release/minHeapTests.exe")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(minHeapTests "F:/SDSU/Fall 2020/CS635/Assignment1/Assignment1_Kavya_Onkarappa_Sunanda_825893660/build/test/MinSizeRel/minHeapTests.exe")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(minHeapTests "F:/SDSU/Fall 2020/CS635/Assignment1/Assignment1_Kavya_Onkarappa_Sunanda_825893660/build/test/RelWithDebInfo/minHeapTests.exe")
else()
  add_test(minHeapTests NOT_AVAILABLE)
endif()
