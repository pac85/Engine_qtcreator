/**************************************************************************/
/*
  Copyright (C) 2017 Antonino Maniscalco (alias pac85)

  This file is part of Engine.

  Engine is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Engine is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Engine.  If not, see http://www.gnu.org/licenses/

*/
/**************************************************************************/
#include "vkSurface.h"
#include"../Settings.h"
#include "../logger.h"

vkSurface:: vkSurface(GLFWwindow* window, vkInstance &instance) : surface{instance.instance, vkDestroySurfaceKHR}
{
    if(glfwCreateWindowSurface(instance.instance, window, nullptr, surface.replace()) != VK_SUCCESS )
    {
        slog << err("could't create surface");
    }
}

vkSurface::~vkSurface()
{
    //nothing to do here, VDeleter takes care of everything
}
