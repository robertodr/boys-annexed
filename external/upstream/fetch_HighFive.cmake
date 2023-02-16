enable_language(C)
find_package(HighFive 2.5 CONFIG QUIET
  NO_CMAKE_PATH
  NO_CMAKE_PACKAGE_REGISTRY
  )

if(TARGET HighFive)
  message(STATUS "Using HighFive version ${HighFive_VERSION}")
else()
  message(STATUS "Suitable HighFive could not be located. Fetching!")
  include(FetchContent)

  FetchContent_Declare(HighFive
    QUIET
    URL
      https://github.com/BlueBrain/HighFive/archive/v2.6.2.zip
    )

  set(HIGHFIVE_EXAMPLES OFF CACHE BOOL "" FORCE)
  set(HIGHFIVE_UNIT_TESTS OFF CACHE BOOL "" FORCE)
  set(HIGHFIVE_PARALLEL_HDF5 OFF CACHE BOOL "" FORCE)
  set(HIGHFIVE_USE_INSTALL_DEPS ON CACHE BOOL "" FORCE)
  set(HIGHFIVE_USE_BOOST OFF CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(HighFive)
endif()
