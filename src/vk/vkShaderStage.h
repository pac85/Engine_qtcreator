/**************************************************************************

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
                                                                  
                                                                      
**************************************************************************/
#ifndef VKSHADERSTAGE_H
#define VKSHADERSTAGE_H

#include"vkShaderModule.h"

class vkShaderStage
{
    public:
        vkShaderStage(vkShaderModule shader_module, VkShaderStageFlagBits stage, string mf_name = "main");
        virtual ~vkShaderStage();

    protected:

    private:
};

#endif // VKSHADERSTAGE_H
