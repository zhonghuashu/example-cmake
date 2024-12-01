include("../Step12_build_release/CPackConfig.cmake")

set(CPACK_INSTALL_CMAKE_PROJECTS
    "../Step12_build_debug;Tutorial;ALL;/"
    "../Step12_build_release;Tutorial;ALL;/"
    )