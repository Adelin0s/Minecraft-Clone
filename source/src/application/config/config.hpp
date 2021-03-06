/****************************************************************************************
 * @ Author: Cucorianu Eusebiu Adelin                                                   *
 * @ Create Time: 22-08-2021 13:41:09                                                   *
 * @ Modified by: Cucorianu Eusebiu Adelin                                              *
 * @ Modified time: 07-12-2021 20:51:44                                                 *
 * @ Description:                                                                       *
 ****************************************************************************************/

#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>

namespace Nocturn::Config
{
	/* Directory Constants */
	const std::string CRootDir			 = "../../";
	const std::string CDirModels		 = CRootDir + "assets/models/";
	const std::string CDirShaders		 = CRootDir + "assets/shaders/";
	const std::string CDirTextures		 = CRootDir + "assets/textures/";
	const std::string CDirBlockStates	 = CRootDir + "assets/blockstates/";
	const std::string CDirTexturesSkybox = CDirTextures + "skybox/";
	const std::string CDirTexturesBlock	 = CDirTextures + "block/";

	constexpr const char *const CSkyboxVertexShader	  = "../../assets/shaders/skybox_vertex.glsl";
	constexpr const char *const CSkyboxFragmentShader = "../../assets/shaders/skybox_fragment.glsl";
	constexpr const char *const CChunkVertexShader	  = "../../assets/shaders/block_vertex.glsl";
	constexpr const char *const CChunkFragmentShader  = "../../assets/shaders/block_fragment.glsl";
	constexpr const char *const CLineVertexShader	  = "../../assets/shaders/line_vertex.glsl";
	constexpr const char *const CLineFragmentShader	  = "../../assets/shaders/line_fragment.glsl";

	/* Entity Constants */
	constexpr float CFov  = 45.0f;
	constexpr float CNear = 0.1f;
	constexpr float CFar  = 500.0f;

	/* World Constants */
	constexpr uint32_t loadDistance = 10;
} // namespace Nocturn::Config

#endif