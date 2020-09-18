@echo off
set UE4RootPath=D:\UnrealEngine-4.24.2-release\
set ProjectRootPath=D:\SaveMap\
set PackageRootPath=E:\WindowsNoEditor\

set UE4BinPath=%UE4RootPath%Engine\Binaries\Win64\
set UE4PluginPath=%UE4RootPath%Engine\Plugins\
set ProjectBinPath=%ProjectRootPath%Binaries\Win64\
set ProjectPluginPath=%ProjectRootPath%Plugins\
set PackageEngineBinPath=%PackageRootPath%Engine\Binaries\Win64\
set PackageEnginePluginPath=%PackageRootPath%Engine\Plugins\
set PackageBinPath=%PackageRootPath%SaveMap\Binaries\Win64\
set PackagePluginPath=%PackageRootPath%SaveMap\Plugins\

xcopy /e /y %ProjectBinPath%UE4Editor-SaveMap-Win64-Debug.dll		 		%PackageBinPath%
xcopy /e /y %ProjectBinPath%UE4Editor-SaveMap-Win64-Debug.pdb		 		%PackageBinPath%

pause
