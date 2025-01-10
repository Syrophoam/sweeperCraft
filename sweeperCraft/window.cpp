//
//  window.cpp
//  sweeperCraft
//
//  Created by syro Fullerton on 09/01/2025.
//

#include "window.hpp"

void window::makeWindow(){
    
    std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));  // <- one second
   GLFWwindow* window;

   glfwSetErrorCallback(error_callback);

   if (!glfwInit())
       exit(EXIT_FAILURE);

   glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
   glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

   window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);
   if (!window)
   {
       glfwTerminate();
       exit(EXIT_FAILURE);
   }

   glfwSetKeyCallback(window, key_callback);

   glfwMakeContextCurrent(window);
   glfwSwapInterval(1);

}
 

void window::runLoop(){
    
    while (!glfwWindowShouldClose(window))
    {
        float ratio;
        int width, height;
//
//        glfwGetFramebufferSize(window, &width, &height);
//        ratio = width / (float) height;
//
//        glViewport(0, 0, width, height);
//        glClear(GL_COLOR_BUFFER_BIT);
//        

//        glfwSwapBuffers(window);
        glfwPollEvents();
        std::this_thread::sleep_for(std::chrono::nanoseconds(16'666'667)); // <- 60 fps
    }
}

void window::close(){
    
    glfwDestroyWindow(window);

    glfwTerminate();
    exit(EXIT_SUCCESS);
    
}
