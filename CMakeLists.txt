cmake_minimum_required(VERSION 3.12)
project(genie-cmake-link)

function(add_genie_target gname)
  #message(STATUS "Adding library Genie::${gname}")
  add_library(Genie::${gname} SHARED IMPORTED GLOBAL) # or STATIC instead of SHARED
  set_target_properties(Genie::${gname} PROPERTIES
    IMPORTED_LOCATION "/usr/local/lib/lib${gname}.so"
    INTERFACE_INCLUDE_DIRECTORIES "/usr/local/include/GENIE"
  )
endfunction()

if(NOT DEFINED GENIE_LIBS)
  find_package(ROOT CONFIG REQUIRED)
  add_genie_target(GFwMsg)
  target_link_libraries(Genie::GFwMsg INTERFACE log4cpp)
  add_genie_target(GFwReg)
  add_genie_target(GFwAlg)
  add_genie_target(GFwInt)
  add_genie_target(GFwGHEP)
  add_genie_target(GFwNum)
  add_genie_target(GFwUtl)
  target_link_libraries(Genie::GFwUtl INTERFACE Genie::GFwInt Genie::GFwNum)
  add_genie_target(GFwParDat)
  add_genie_target(GFwEG)
  add_genie_target(GFwNtp)
  
  add_genie_target(GPhCmn)
  add_genie_target(GPhDcy)
  add_genie_target(GPhHadTens)
  add_genie_target(GPhMEL)
  add_genie_target(GPhPDF)
  add_genie_target(GPhXSIg)
  add_genie_target(GPhNuclSt)
  add_genie_target(GPhDeEx)
  add_genie_target(GPhHadnz)
  add_genie_target(GPhHadTransp)
  add_genie_target(GPhAMNGXS)
  add_genie_target(GPhAMNGEG)
  add_genie_target(GPhChmXS)
  add_genie_target(GPhCohXS)
  add_genie_target(GPhCohEG)
  add_genie_target(GPhDISXS)
  add_genie_target(GPhDISEG)
  add_genie_target(GPhDfrcXS)
  add_genie_target(GPhDfrcEG)
  add_genie_target(GPhHELptnXS)
  add_genie_target(GPhHELptnEG)
  add_genie_target(GPhIBDXS)
  add_genie_target(GPhIBDEG)
  add_genie_target(GPhMNucXS)
  add_genie_target(GPhMNucEG)
  add_genie_target(GPhNuElXS)
  add_genie_target(GPhNuElEG)
  add_genie_target(GPhQELXS)
  add_genie_target(GPhQELEG)
  add_genie_target(GPhResXS)
  add_genie_target(GPhResEG)
  add_genie_target(GPhStrXS)
  add_genie_target(GPhStrEG)
  add_genie_target(GPhHEDISXS)
  add_genie_target(GPhHEDISEG)
  add_genie_target(GTlFlx)
  add_genie_target(GTlGeo)
  
  add_genie_target(GRwFwk)
  add_genie_target(GRwIO)
  add_genie_target(GRwClc)
  
  set(GENIE_LIBS
     log4cpp
     gsl
     Genie::GRwFwk
     Genie::GRwClc
     Genie::GRwIO
     Genie::GFwInt
     Genie::GFwNum
     Genie::GFwUtl
     Genie::GFwParDat
     Genie::GFwEG
     Genie::GFwAlg
     Genie::GFwGHEP
     Genie::GFwMsg
     xml2
     Genie::GFwReg
     ROOT::EG
     ROOT::EGPythia8
     pythia8
     Genie::GFwNtp
     Genie::GPhXSIg
     Genie::GPhPDF
     Genie::GPhNuclSt
     Genie::GPhCmn
     Genie::GPhDcy
     Genie::GPhHadTransp
     Genie::GPhHadnz
     Genie::GPhHadTens
     Genie::GPhDeEx
     Genie::GPhAMNGXS
     Genie::GPhAMNGEG
     Genie::GPhChmXS
     Genie::GPhCohXS
     Genie::GPhCohEG
     Genie::GPhDISXS
     Genie::GPhDISEG
     Genie::GPhDfrcXS
     Genie::GPhDfrcEG
     Genie::GPhHELptnXS
     Genie::GPhHELptnEG
     Genie::GPhIBDXS
     Genie::GPhIBDEG
     Genie::GPhMNucXS
     Genie::GPhMNucEG
     Genie::GPhMEL
     Genie::GPhNuElXS
     Genie::GPhNuElEG
     Genie::GPhQELXS
     Genie::GPhQELEG
     Genie::GPhResXS
     Genie::GPhResEG
     Genie::GPhStrXS
     Genie::GPhStrEG
     LHAPDF
     Genie::GPhHEDISXS
     Genie::GPhHEDISEG
     ROOT::Geom
     Genie::GTlGeo
     Genie::GTlFlx
     ROOT::MathCore
     ROOT::MathMore)
   message(STATUS "Found GENIE")
endif()

add_executable(main main.cxx)
target_include_directories(main PRIVATE "/usr/local/include/GENIE")
target_link_libraries(main PRIVATE ${GENIE_LIBS} ROOT::Core ROOT::MathCore)
