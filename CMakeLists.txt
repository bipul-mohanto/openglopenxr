# CMakeList.txt : CMake project for openxrOptix, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.22.1)

project ("openxrOptix")



include_directories("C:/vcpkg/installed/x64-windows/include")
include_directories("C:/Users/local-admin/Desktop/openxrOptix/glew-2.1.0-win32/glew-2.1.0/include")
include_directories("C:/vcpkg/installed/x64-windows/include/glm")
include_directories("C:/Users/local-admin/Desktop/openxrOptix/glfw/include")




# Add source to this project's executable.
add_executable (openxrOptix     openxrOptix.cpp 
							    openxrOptix.h
								GLSLShader.h
								GLSLShader.cpp
								shaders/simple.fragment.glsl
								shaders/simple.vertex.glsl
								)


target_link_libraries(openxrOptix   "C:/Users/local-admin/Desktop/openxrOptix/glew-2.1.0-win32/glew-2.1.0/lib/Release/x64/glew32s.lib"
									"C:/vcpkg/installed/x64-windows/lib/OpenGL32.lib"
									"C:/vcpkg/installed/x64-windows/lib/GlU32.lib"
									#"C:/vcpkg/installed/x64-windows/lib/glfw3dll.lib"
								  )



