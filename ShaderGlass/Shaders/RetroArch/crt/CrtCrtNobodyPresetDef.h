/*
ShaderGlass preset crt / crt-nobody imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/crt/crt-nobody.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtNobodyPresetDef : public PresetDef
{
public:
	CrtCrtNobodyPresetDef() : PresetDef{}
	{
		Name = "crt-nobody";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtNobodyShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
