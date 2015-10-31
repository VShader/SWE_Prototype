cmake_minimum_required(VERSION 3.3)
project(SWE_Prototype)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(src
    src/swe_prototype
    src/offerModel.cpp
)

set(header
    src/offerModel.h
)

set(qml
    gui/interface.qml
    gui/interfaceForm.ui.qml
    scripts/itemCreation.js
)

set(resourceFiles
    resources.qrc
)

set(resources
    ${resourceFiles}
    ${qml}
	icons/ic_add_shopping_cart.svg
	icons/ic_check.svg
	icons/ic_close.svg
	icons/ic_menu.svg
	icons/ic_shopping_cart.svg
)



find_package(Qt5 REQUIRED Core Gui Widgets Qml Sql)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

QT5_ADD_RESOURCES(resources ${resourceFiles})

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DQT_QML_DEBUG")
SET(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -DQT_QML_DEBUG")

add_executable(${PROJECT_NAME} ${src} ${resources})
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Qml Qt5::Sql)
