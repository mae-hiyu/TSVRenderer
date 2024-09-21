cmake_minimum_required(VERSION 3.0)

macro(BuildDocument)
  find_package(Doxygen)
  if(DOXYGEN_FOUND)
    if(DOXYGEN_DOT_FOUND)
      set(doxygen_has_dot "YES")
    else()
      set(doxygen_has_dot "NO")
    endif()
    configure_file(${PROJECT_SOURCE_DIR}/documents/Doxyfile.in
                   ${PROJECT_BINARY_DIR}/documents/Doxyfile)
    file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/documents/reference)
    set(doxygen_html_index_file 
        ${PROJECT_BINARY_DIR}/documents/reference/html/index.html)
    add_custom_command(OUTPUT ${doxygen_html_index_file}
                       COMMAND ${DOXYGEN_EXECUTABLE} 
                       ${PROJECT_BINARY_DIR}/documents/Doxyfile
                       MAIN_DEPENDENCY ${PROJECT_SOURCE_DIR}/documents/Doxyfile.in
                       WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/documents)
    add_custom_target(Document ALL DEPENDS ${doxygen_html_index_file})
  endif()
endmacro(BuildDocument)
