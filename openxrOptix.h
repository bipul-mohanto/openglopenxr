//#pragma warning(disable : 26812) //The enum type 'XrResult' is unscoped.Prefer 'enum class' over 'enum' (Enum.3)

#include <stdio.h>
#include <vector>
//#define XR_NO_PROTOTYPES 1
#include "openxr/openxr.h"
//#define XR_USE_GRAPHICS_API_VULKAN 1
#define XR_USE_GRAPHICS_API_OPENGL 1
#define XR_USE_PLATFORM_WIN32 1
#include <Windows.h>
#include "openxr/openxr_platform.h"


#include <GL/glew.h>
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32 1
#define GLFW_EXPOSE_NATIVE_WGL 1
#include <GLFW/glfw3native.h>

#include "GLSLShader.h"

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/quaternion.hpp>
#include <gtc/type_ptr.hpp>