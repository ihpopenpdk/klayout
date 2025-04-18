
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQVideoFrame_PaintOptions.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoFrame>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QVideoFrame::PaintOptions

//  Constructor QVideoFrame::PaintOptions::PaintOptions()


static void _init_ctor_QVideoFrame_PaintOptions_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVideoFrame::PaintOptions> ();
}

static void _call_ctor_QVideoFrame_PaintOptions_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoFrame::PaintOptions *> (new QVideoFrame::PaintOptions ());
}



namespace gsi
{

static gsi::Methods methods_QVideoFrame_PaintOptions () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoFrame::PaintOptions::PaintOptions()\nThis method creates an object of class QVideoFrame::PaintOptions.", &_init_ctor_QVideoFrame_PaintOptions_0, &_call_ctor_QVideoFrame_PaintOptions_0);
  return methods;
}

gsi::Class<QVideoFrame::PaintOptions> decl_QVideoFrame_PaintOptions ("QtMultimedia", "QVideoFrame_PaintOptions",
  methods_QVideoFrame_PaintOptions (),
  "@qt\n@brief Binding of QVideoFrame::PaintOptions");

gsi::ClassExt<QVideoFrame> decl_QVideoFrame_PaintOptions_as_child (decl_QVideoFrame_PaintOptions, "PaintOptions");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QVideoFrame::PaintOptions> &qtdecl_QVideoFrame_PaintOptions () { return decl_QVideoFrame_PaintOptions; }

}

