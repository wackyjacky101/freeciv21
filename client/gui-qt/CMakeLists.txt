set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
include_directories( ${CMAKE_BINARY_DIR} )
add_library(
  gui-qt
  STATIC
  canvas.cpp
  chatline.cpp
  citydlg.cpp
  cityrep.cpp
  colors.cpp
  connectdlg.cpp
  dialogs.cpp
  diplodlg.cpp
  endgamereport.cpp
  economyreport.cpp
  fc_client.cpp
  fonts.cpp
  gotodlg.cpp
  graphics.cpp
  gui_main.cpp
  helpdlg.cpp
  hudwidget.cpp
  idlecallback.cpp
  icons.cpp
  luaconsole.cpp
  mapctrl.cpp
  mapview.cpp
  menu.cpp
  messageoptions.cpp
  messagewin.cpp
  minimap.cpp
  notifyreport.cpp
  optiondlg.cpp
  page_game.cpp
  page_main.cpp
  page_load.cpp
  page_network.cpp
  page_scenario.cpp
  page_pregame.cpp
  plrdlg.cpp
  pregameoptions.cpp
  qtg_cxxside.cpp
  ratesdlg.cpp
  shortcuts.cpp
  sidebar.cpp
  sciencedlg.cpp
  spaceshipdlg.cpp
  sprite.cpp
  themes.cpp
  tradecalculation.cpp
  tooltips.cpp
  unitreport.cpp
  unitselect.cpp
  voteinfo_bar.cpp
  widgetdecorations.cpp
)

target_include_directories(gui-qt PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(gui-qt PRIVATE client)
target_link_libraries(gui-qt PRIVATE Qt5::Widgets)
