#ifndef _glfw3_extension_h_
#define _glfw3_extension_h_
#include "glfw3.h"

#ifdef __cplusplus
extern "C" {
#endif

/*! @brief Renaming a specific joystick.
 *
 *  This function assigns a new name to a specific joystick that already exists.
 *
 *  If the specified joystick is not present or the length of the new name exceeds the limit
 *  this function will return `GLFW_FALSE` but will not generate an error.  Call
 *  @ref glfwJoystickPresent to check whether it is present regardless of
 *  whether it has a mapping.
 *
 *  @param[in] jid The [joystick](@ref joysticks) to query.
    @param[in] new_name The valid name and length.
 *  @return If the rename is successful return GLFW_TRUE, else return GLFW_FALSE 
 *
 *  @errors Possible errors include @ref GLFW_NOT_INITIALIZED and @ref GLFW_INVALID_ENUM.
 *
 *  @thread_safety This function must only be called from the main thread.
 *
 *  @sa @ref gamepad
 *  @sa @ref glfwJoystickIsGamepad
 *
 *  @ingroup input
 */
GLFWAPI int glfwSetGamepadName(int jid, const char * new_name);

#ifdef __cplusplus
}
#endif

#endif
