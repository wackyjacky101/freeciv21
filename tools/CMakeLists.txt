if (FREECIV_ENABLE_RULEDIT OR FREECIV_ENABLE_RULEUP)
  add_subdirectory(ruleutil)
endif()
if (FREECIV_ENABLE_CIVMANUAL OR FREECIV_ENABLE_RULEUP)
  add_subdirectory(shared)
endif()

if (FREECIV_ENABLE_FCMP_CLI OR FREECIV_ENABLE_FCMP_QT)
  add_subdirectory(fcmp)
endif()

if (FREECIV_ENABLE_RULEDIT)
  add_subdirectory(ruledit)
endif()

if (FREECIV_ENABLE_CIVMANUAL)
  add_executable(freeciv-manual civmanual.cpp)
  target_link_libraries(freeciv-manual server)
  target_link_libraries(freeciv-manual client)
  target_link_libraries(freeciv-manual tools_shared)
  install(TARGETS freeciv-manual
          RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
endif()

if (FREECIV_ENABLE_RULEUP)
  add_executable(freeciv-ruleup ruleup.cpp)
  target_link_libraries(freeciv-ruleup server)
  target_link_libraries(freeciv-ruleup tools_shared)
  target_link_libraries(freeciv-ruleup tools_ruleutil)
  install(TARGETS freeciv-ruleup
          RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
endif()

