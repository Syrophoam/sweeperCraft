//
//  window.hpp
//  sweeperCraft
//
//  Created by syro Fullerton on 09/01/2025.
//

#ifndef window_hpp
#define window_hpp

#include <OpenGL/gl.h>
#include <GLFW/glfw3.h>
#include <thread>

//#include "linmath.h"

#include <stdlib.h>
#include <stdio.h>

class window {
 
    
public:
    void makeWindow();
    void runLoop();
    void close();
    
    static void error_callback(int error, const char* description)
    {fprintf(stderr, "Error: %s\n", description); }

    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
    {if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) glfwSetWindowShouldClose(window, GLFW_TRUE); }
    
private:
    GLFWwindow* window; 
    
};


#endif /* window_hpp */
