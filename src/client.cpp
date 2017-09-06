/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU General Public License version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE included in the
** packaging of this file. Please review the following information to
** ensure the GNU General Public License version 3 requirements will be
** met: https://www.gnu.org/licenses/gpl-3.0.html.
****************************************************************************/

/*
 * @file client.cpp
 * @author Filipe “FFY00” Lains <filipe.lains@gmail.com>
 * @author Luís “ljmf00” Ferreira <contact@lsferreira.net>
 * @since 1.0
 */

#include <AuroraFW/Aurora.h>

using namespace AuroraFW;

Application* App;

ArSlot_t slot_App_on_open()
{
	// code ...
}

int main(int argc, char* argv[])
{
    App = new Application(slot_App_on_open, argc, argv);
    delete App;

    return EXIT_SUCCESS;
}
