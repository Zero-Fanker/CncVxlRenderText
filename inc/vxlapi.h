#pragma once

#include <macro.h>

namespace thomas {
	class vxlfile;
	class vplfile;
}

extern "C" 
{
	extern thomas::vxlfile* CncImgCurrentVXL;
	extern thomas::vplfile* CncImgCurrentVPL;

	VX_LIB_EXPORT void* WINAPI CncImgMalloc(unsigned int sz);
	VX_LIB_EXPORT void WINAPI CncImgFree(void* ptr);

	VX_LIB_EXPORT void WINAPI CncImgCreate();
	VX_LIB_EXPORT void WINAPI CncImgRelease();

	VX_LIB_EXPORT void WINAPI CncImgSetMaxFacing(unsigned int nFacingCount);
	VX_LIB_EXPORT unsigned int WINAPI CncImgGetMaxFacing();

	VX_LIB_EXPORT bool WINAPI CncImgLoadVPLFile(const unsigned char* pBuffer);
	VX_LIB_EXPORT bool WINAPI CncImgLoadVXLFile(const unsigned char* pBuffer);
	VX_LIB_EXPORT bool WINAPI CncImgLoadHVAFile(const unsigned char* pBuffer);

	VX_LIB_EXPORT bool WINAPI CncImgPrepareVXLCache(unsigned int nFacing, int F, int L, int H);
	VX_LIB_EXPORT int WINAPI CncImgGetImageWidth(unsigned int nFacing);
	VX_LIB_EXPORT int WINAPI CncImgGetImageHeight(unsigned int nFacing);
	VX_LIB_EXPORT void WINAPI CncImgGetImageFrame(unsigned int nFacing, int* width, int* height, int* x, int* y);
	VX_LIB_EXPORT void WINAPI CncImgGetImageSize(unsigned int nFacing, int* width, int* height);
	VX_LIB_EXPORT bool WINAPI CncImgGetImageData(unsigned int nFacing, unsigned char** ppBuffer);

	VX_LIB_EXPORT void WINAPI CncImgClearCurrentVXL();
	VX_LIB_EXPORT bool WINAPI CncImgIsVXLLoaded();
	VX_LIB_EXPORT bool WINAPI CncImgIsVPLLoaded();
}