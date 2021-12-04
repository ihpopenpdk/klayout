
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQCborError.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCborError>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QCborError

//  Constructor QCborError::QCborError()


static void _init_ctor_QCborError_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCborError> ();
}

static void _call_ctor_QCborError_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCborError *> (new QCborError ());
}


// QString QCborError::toString()


static void _init_f_toString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCborError *)cls)->toString ());
}



namespace gsi
{

static gsi::Methods methods_QCborError () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCborError::QCborError()\nThis method creates an object of class QCborError.", &_init_ctor_QCborError_0, &_call_ctor_QCborError_0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QCborError::toString()\n", true, &_init_f_toString_c0, &_call_f_toString_c0);
  return methods;
}

gsi::Class<QCborError> decl_QCborError ("QtCore", "QCborError",
  methods_QCborError (),
  "@qt\n@brief Binding of QCborError");


GSI_QTCORE_PUBLIC gsi::Class<QCborError> &qtdecl_QCborError () { return decl_QCborError; }

}
