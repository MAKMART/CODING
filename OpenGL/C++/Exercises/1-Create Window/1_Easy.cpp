#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main(){

  glfwInit();
  glfwWindowHint(GLFW_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_VERSION_MINOR, 6);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow* window = glfwCreateWindow(1920, 1080, "My Window", NULL, NULL);
  if (window == NULL)
  {
    std::wcout << "Failed to create GLFW window!\n";
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);
  gladLoadGL();
  glViewport(0, 0, 1920, 1080);

  glClearColor(0.98f, 0.68f, 0.36f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  glfwSwapBuffers(window);
  while (!glfwWindowShouldClose(window))
  {
    glfwPollEvents();
  }
  
  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}