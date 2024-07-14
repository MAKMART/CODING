#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main(){
    glfwInit(); //Initializes GLFW
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);  //Tells glfw the major version of OpenGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);  //Tells glfw the minor version of OpenGL
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  //Tells glfw the OpenGL profile(core)
    GLFWwindow* window = glfwCreateWindow(1920, 1080, "My First Window", nullptr, nullptr);     //Creates a window
    if (window == NULL)
    {
        std::wcout << "Failed to creater GLFW window!\n";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window); //Make the window the current context(context = OpenGL space..)
    gladLoadGL();   //Tells glad to load the current OpenGL configuration
    glViewport(0, 0, 1920, 1080);   //Tells OpenGL the viewport space to use

    glClearColor(0.0f, 0.13f, 0.17f, 1.0f);     //Creates a back buffer with color
    glClear(GL_COLOR_BUFFER_BIT);   //Cleans the back buffer and assigns a new color to it
    glfwSwapBuffers(window);    //Swaps the front buffer with the back buffer
    while (!glfwWindowShouldClose(window))  //Function to know if a window has been closed
    {
        glfwPollEvents();   //Tells glfw to process the events happening in the window

    }
    
    glfwDestroyWindow(window);  //Destroys the window
    glfwTerminate();    //Terminates GLFW
    return 0;
}