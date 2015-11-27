set(test_src
	#../src/offerModel.cpp
	tst_modelTest.cpp
)

set(test_header
	#../src/offerModel.h
	#tst_modelTest.h
)

add_executable(modelTest ${test_src} ${test_header})
target_link_libraries(modelTest Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Qml Qt5::Sql Qt5::Test)

add_test(testModel modelTest)
