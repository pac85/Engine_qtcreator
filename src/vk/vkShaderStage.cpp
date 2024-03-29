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
#include "vkShaderStage.h"

vkShaderStage::vkShaderStage(vkShaderModule shader_module, VkShaderStageFlagBits stage, string mf_name)
{
    VkPipelineShaderStageCreateInfo vertex_shader_index = {};

    vertex_shader_index.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    vertex_shader_index.stage = stage;
    vertex_shader_index.module = shader_module.get_shader_module();
    vertex_shader_index.pName = mf_name.c_str();

}

vkShaderStage::~vkShaderStage()
{
    //dtor
}
