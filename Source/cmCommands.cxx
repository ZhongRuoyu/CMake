/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Insight Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
// This file is used to compile all the commands
// that CMake knows about at compile time.
// This is sort of a boot strapping approach since you would
// like to have CMake to build CMake.   
#include "cmCommands.h"
#include "cmAbstractFilesCommand.cxx"
#include "cmAddCustomCommandCommand.cxx"
#include "cmAddCustomTargetCommand.cxx"
#include "cmAddDefinitionsCommand.cxx"
#include "cmAddDependenciesCommand.cxx"
#include "cmAddExecutableCommand.cxx"
#include "cmAddLibraryCommand.cxx"
#include "cmAddTestCommand.cxx"
#include "cmAuxSourceDirectoryCommand.cxx"
#include "cmBuildCommand.cxx"
#include "cmBuildNameCommand.cxx"
#include "cmCMakeMinimumRequired.cxx"
#include "cmConfigureFileCommand.cxx"
#include "cmCreateTestSourceList.cxx"
#include "cmElseCommand.cxx"
#include "cmEnableTestingCommand.cxx"
#include "cmEndForEachCommand.cxx"
#include "cmEndIfCommand.cxx"
#include "cmExecProgramCommand.cxx"
#include "cmFindFileCommand.cxx"
#include "cmFindLibraryCommand.cxx"
#include "cmFindPathCommand.cxx"
#include "cmFindProgramCommand.cxx"
#include "cmForEachCommand.cxx"
#include "cmFLTKWrapUICommand.cxx"
#include "cmGetFilenameComponentCommand.cxx"
#include "cmGetSourceFilePropertyCommand.cxx"
#include "cmIfCommand.cxx"
#include "cmIncludeCommand.cxx"
#include "cmIncludeDirectoryCommand.cxx"
#include "cmIncludeExternalMSProjectCommand.cxx"
#include "cmIncludeRegularExpressionCommand.cxx"
#include "cmInstallFilesCommand.cxx"
#include "cmInstallProgramsCommand.cxx"
#include "cmInstallTargetsCommand.cxx"
#include "cmLinkDirectoriesCommand.cxx"
#include "cmLinkLibrariesCommand.cxx"
#include "cmLoadCacheCommand.cxx"
#include "cmMakeDirectoryCommand.cxx"
#include "cmMarkAsAdvancedCommand.cxx"
#include "cmMessageCommand.cxx"
#include "cmOptionCommand.cxx"
#include "cmOutputRequiredFilesCommand.cxx"
#include "cmProjectCommand.cxx"
#include "cmRemoveCommand.cxx"
#include "cmSetCommand.cxx"
#include "cmSetSourceFilesPropertiesCommand.cxx"
#include "cmSiteNameCommand.cxx"
#include "cmSourceFilesCommand.cxx"
#include "cmSourceFilesRemoveCommand.cxx"
#include "cmSourceGroupCommand.cxx"
#include "cmSubdirCommand.cxx"
#include "cmSubdirDependsCommand.cxx"
#include "cmTargetLinkLibrariesCommand.cxx"
#include "cmUseMangledMesaCommand.cxx"
#include "cmUtilitySourceCommand.cxx"
#include "cmVariableRequiresCommand.cxx"
#include "cmVTKMakeInstantiatorCommand.cxx"
#include "cmVTKWrapJavaCommand.cxx"
#include "cmVTKWrapPythonCommand.cxx"
#include "cmVTKWrapTclCommand.cxx"
#include "cmQTWrapCPPCommand.cxx"
#include "cmQTWrapUICommand.cxx"
#include "cmWrapExcludeFilesCommand.cxx"

void GetPredefinedCommands(std::list<cmCommand*>& commands)
{
  commands.push_back(new cmAbstractFilesCommand);
  commands.push_back(new cmAddCustomCommandCommand);
  commands.push_back(new cmAddCustomTargetCommand);
  commands.push_back(new cmAddDefinitionsCommand);
  commands.push_back(new cmAddDependenciesCommand);
  commands.push_back(new cmAddExecutableCommand);
  commands.push_back(new cmAddLibraryCommand);
  commands.push_back(new cmAddTestCommand);
  commands.push_back(new cmAuxSourceDirectoryCommand);
  commands.push_back(new cmBuildCommand);
  commands.push_back(new cmBuildNameCommand);
  commands.push_back(new cmCMakeMinimumRequired);
  commands.push_back(new cmConfigureFileCommand);
  commands.push_back(new cmCreateTestSourceList);
  commands.push_back(new cmElseCommand);
  commands.push_back(new cmEnableTestingCommand);  
  commands.push_back(new cmEndForEachCommand);
  commands.push_back(new cmEndIfCommand);
  commands.push_back(new cmExecProgramCommand);
  commands.push_back(new cmFindFileCommand);
  commands.push_back(new cmFindLibraryCommand);
  commands.push_back(new cmFindPathCommand);
  commands.push_back(new cmFindProgramCommand);
  commands.push_back(new cmForEachCommand);
  commands.push_back(new cmFLTKWrapUICommand);
  commands.push_back(new cmGetFilenameComponentCommand);
  commands.push_back(new cmGetSourceFilePropertyCommand);
  commands.push_back(new cmIfCommand);
  commands.push_back(new cmIncludeCommand);
  commands.push_back(new cmIncludeDirectoryCommand);
  commands.push_back(new cmIncludeExternalMSProjectCommand);
  commands.push_back(new cmIncludeRegularExpressionCommand);
  commands.push_back(new cmInstallFilesCommand);
  commands.push_back(new cmInstallProgramsCommand);
  commands.push_back(new cmInstallTargetsCommand);
  commands.push_back(new cmLinkDirectoriesCommand);
  commands.push_back(new cmLinkLibrariesCommand);
  commands.push_back(new cmLoadCacheCommand);
  commands.push_back(new cmMakeDirectoryCommand);
  commands.push_back(new cmMarkAsAdvancedCommand);
  commands.push_back(new cmMessageCommand);
  commands.push_back(new cmOptionCommand);
  commands.push_back(new cmOutputRequiredFilesCommand);  
  commands.push_back(new cmProjectCommand);
  commands.push_back(new cmRemoveCommand);
  commands.push_back(new cmSetCommand);
  commands.push_back(new cmSetSourceFilesPropertiesCommand);
  commands.push_back(new cmSiteNameCommand);
  commands.push_back(new cmSourceFilesCommand);
  commands.push_back(new cmSourceFilesRemoveCommand);
  commands.push_back(new cmSourceGroupCommand);
  commands.push_back(new cmSubdirCommand);
  commands.push_back(new cmSubdirDependsCommand);
  commands.push_back(new cmTargetLinkLibrariesCommand);
  commands.push_back(new cmUseMangledMesaCommand);
  commands.push_back(new cmUtilitySourceCommand);
  commands.push_back(new cmVariableRequiresCommand);
  commands.push_back(new cmVTKMakeInstantiatorCommand);
  commands.push_back(new cmVTKWrapJavaCommand);
  commands.push_back(new cmVTKWrapPythonCommand);
  commands.push_back(new cmVTKWrapTclCommand);
  commands.push_back(new cmQTWrapCPPCommand);
  commands.push_back(new cmQTWrapUICommand);
  commands.push_back(new cmWrapExcludeFilesCommand);
}
