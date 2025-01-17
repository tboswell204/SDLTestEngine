//---------------------------------------------------------------------//
// Testing program													   //
//																	   //
// By: Tommy Boswell												   //
// (Credit and big thanks to Ather Omar for his SDL tutorial)		   //
//---------------------------------------------------------------------//
#include "GameManager.h"

int main(int argc, char* argv[]) {

	QuickSDL::GameManager* game = QuickSDL::GameManager::Instance();

	game->Run();

	QuickSDL::GameManager::Release();
	game = NULL;

	return 0;
}