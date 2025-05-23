
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
*  @file gsiDeclQAbstractExtensionManager.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractExtensionManager>
#include <QAbstractExtensionFactory>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtDesignerCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractExtensionManager

// QObject *QAbstractExtensionManager::extension(QObject *object, const QString &iid)


static void _init_f_extension_c3219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QObject * > ();
}

static void _call_f_extension_c3219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QObject * > ((QObject *)((QAbstractExtensionManager *)cls)->extension (arg1, arg2));
}


// void QAbstractExtensionManager::registerExtensions(QAbstractExtensionFactory *factory, const QString &iid)


static void _init_f_registerExtensions_5125 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factory");
  decl->add_arg<QAbstractExtensionFactory * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_registerExtensions_5125 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractExtensionFactory *arg1 = gsi::arg_reader<QAbstractExtensionFactory * >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractExtensionManager *)cls)->registerExtensions (arg1, arg2);
}


// void QAbstractExtensionManager::unregisterExtensions(QAbstractExtensionFactory *factory, const QString &iid)


static void _init_f_unregisterExtensions_5125 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factory");
  decl->add_arg<QAbstractExtensionFactory * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_unregisterExtensions_5125 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractExtensionFactory *arg1 = gsi::arg_reader<QAbstractExtensionFactory * >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractExtensionManager *)cls)->unregisterExtensions (arg1, arg2);
}


namespace gsi
{

static gsi::Methods methods_QAbstractExtensionManager () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("extension", "@brief Method QObject *QAbstractExtensionManager::extension(QObject *object, const QString &iid)\n", true, &_init_f_extension_c3219, &_call_f_extension_c3219);
  methods += new qt_gsi::GenericMethod ("registerExtensions", "@brief Method void QAbstractExtensionManager::registerExtensions(QAbstractExtensionFactory *factory, const QString &iid)\n", false, &_init_f_registerExtensions_5125, &_call_f_registerExtensions_5125);
  methods += new qt_gsi::GenericMethod ("unregisterExtensions", "@brief Method void QAbstractExtensionManager::unregisterExtensions(QAbstractExtensionFactory *factory, const QString &iid)\n", false, &_init_f_unregisterExtensions_5125, &_call_f_unregisterExtensions_5125);
  return methods;
}

gsi::Class<QAbstractExtensionManager> decl_QAbstractExtensionManager ("QtDesigner", "QAbstractExtensionManager_Native",
  methods_QAbstractExtensionManager (),
  "@hide\n@alias QAbstractExtensionManager");

GSI_QTDESIGNER_PUBLIC gsi::Class<QAbstractExtensionManager> &qtdecl_QAbstractExtensionManager () { return decl_QAbstractExtensionManager; }

}


class QAbstractExtensionManager_Adaptor : public QAbstractExtensionManager, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractExtensionManager_Adaptor();

  //  [adaptor ctor] QAbstractExtensionManager::QAbstractExtensionManager()
  QAbstractExtensionManager_Adaptor() : QAbstractExtensionManager()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QObject *QAbstractExtensionManager::extension(QObject *object, const QString &iid)
  QObject * cbs_extension_c3219_0(QObject *object, const QString &iid) const
  {
    __SUPPRESS_UNUSED_WARNING (object);
    __SUPPRESS_UNUSED_WARNING (iid);
    throw qt_gsi::AbstractMethodCalledException("extension");
  }

  virtual QObject * extension(QObject *object, const QString &iid) const
  {
    if (cb_extension_c3219_0.can_issue()) {
      return cb_extension_c3219_0.issue<QAbstractExtensionManager_Adaptor, QObject *, QObject *, const QString &>(&QAbstractExtensionManager_Adaptor::cbs_extension_c3219_0, object, iid);
    } else {
      throw qt_gsi::AbstractMethodCalledException("extension");
    }
  }

  //  [adaptor impl] void QAbstractExtensionManager::registerExtensions(QAbstractExtensionFactory *factory, const QString &iid)
  void cbs_registerExtensions_5125_0(QAbstractExtensionFactory *factory, const QString &iid)
  {
    __SUPPRESS_UNUSED_WARNING (factory);
    __SUPPRESS_UNUSED_WARNING (iid);
    throw qt_gsi::AbstractMethodCalledException("registerExtensions");
  }

  virtual void registerExtensions(QAbstractExtensionFactory *factory, const QString &iid)
  {
    if (cb_registerExtensions_5125_0.can_issue()) {
      cb_registerExtensions_5125_0.issue<QAbstractExtensionManager_Adaptor, QAbstractExtensionFactory *, const QString &>(&QAbstractExtensionManager_Adaptor::cbs_registerExtensions_5125_0, factory, iid);
    } else {
      throw qt_gsi::AbstractMethodCalledException("registerExtensions");
    }
  }

  //  [adaptor impl] void QAbstractExtensionManager::unregisterExtensions(QAbstractExtensionFactory *factory, const QString &iid)
  void cbs_unregisterExtensions_5125_0(QAbstractExtensionFactory *factory, const QString &iid)
  {
    __SUPPRESS_UNUSED_WARNING (factory);
    __SUPPRESS_UNUSED_WARNING (iid);
    throw qt_gsi::AbstractMethodCalledException("unregisterExtensions");
  }

  virtual void unregisterExtensions(QAbstractExtensionFactory *factory, const QString &iid)
  {
    if (cb_unregisterExtensions_5125_0.can_issue()) {
      cb_unregisterExtensions_5125_0.issue<QAbstractExtensionManager_Adaptor, QAbstractExtensionFactory *, const QString &>(&QAbstractExtensionManager_Adaptor::cbs_unregisterExtensions_5125_0, factory, iid);
    } else {
      throw qt_gsi::AbstractMethodCalledException("unregisterExtensions");
    }
  }

  gsi::Callback cb_extension_c3219_0;
  gsi::Callback cb_registerExtensions_5125_0;
  gsi::Callback cb_unregisterExtensions_5125_0;
};

QAbstractExtensionManager_Adaptor::~QAbstractExtensionManager_Adaptor() { }

//  Constructor QAbstractExtensionManager::QAbstractExtensionManager() (adaptor class)

static void _init_ctor_QAbstractExtensionManager_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractExtensionManager_Adaptor> ();
}

static void _call_ctor_QAbstractExtensionManager_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractExtensionManager_Adaptor *> (new QAbstractExtensionManager_Adaptor ());
}


// QObject *QAbstractExtensionManager::extension(QObject *object, const QString &iid)

static void _init_cbs_extension_c3219_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QObject * > ();
}

static void _call_cbs_extension_c3219_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QObject * > ((QObject *)((QAbstractExtensionManager_Adaptor *)cls)->cbs_extension_c3219_0 (arg1, arg2));
}

static void _set_callback_cbs_extension_c3219_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractExtensionManager_Adaptor *)cls)->cb_extension_c3219_0 = cb;
}


// void QAbstractExtensionManager::registerExtensions(QAbstractExtensionFactory *factory, const QString &iid)

static void _init_cbs_registerExtensions_5125_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factory");
  decl->add_arg<QAbstractExtensionFactory * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_registerExtensions_5125_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractExtensionFactory *arg1 = args.read<QAbstractExtensionFactory * > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractExtensionManager_Adaptor *)cls)->cbs_registerExtensions_5125_0 (arg1, arg2);
}

static void _set_callback_cbs_registerExtensions_5125_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractExtensionManager_Adaptor *)cls)->cb_registerExtensions_5125_0 = cb;
}


// void QAbstractExtensionManager::unregisterExtensions(QAbstractExtensionFactory *factory, const QString &iid)

static void _init_cbs_unregisterExtensions_5125_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factory");
  decl->add_arg<QAbstractExtensionFactory * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_unregisterExtensions_5125_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractExtensionFactory *arg1 = args.read<QAbstractExtensionFactory * > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractExtensionManager_Adaptor *)cls)->cbs_unregisterExtensions_5125_0 (arg1, arg2);
}

static void _set_callback_cbs_unregisterExtensions_5125_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractExtensionManager_Adaptor *)cls)->cb_unregisterExtensions_5125_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractExtensionManager> &qtdecl_QAbstractExtensionManager ();

static gsi::Methods methods_QAbstractExtensionManager_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractExtensionManager::QAbstractExtensionManager()\nThis method creates an object of class QAbstractExtensionManager.", &_init_ctor_QAbstractExtensionManager_Adaptor_0, &_call_ctor_QAbstractExtensionManager_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("extension", "@brief Virtual method QObject *QAbstractExtensionManager::extension(QObject *object, const QString &iid)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_extension_c3219_0, &_call_cbs_extension_c3219_0);
  methods += new qt_gsi::GenericMethod ("extension", "@hide", true, &_init_cbs_extension_c3219_0, &_call_cbs_extension_c3219_0, &_set_callback_cbs_extension_c3219_0);
  methods += new qt_gsi::GenericMethod ("registerExtensions", "@brief Virtual method void QAbstractExtensionManager::registerExtensions(QAbstractExtensionFactory *factory, const QString &iid)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_registerExtensions_5125_0, &_call_cbs_registerExtensions_5125_0);
  methods += new qt_gsi::GenericMethod ("registerExtensions", "@hide", false, &_init_cbs_registerExtensions_5125_0, &_call_cbs_registerExtensions_5125_0, &_set_callback_cbs_registerExtensions_5125_0);
  methods += new qt_gsi::GenericMethod ("unregisterExtensions", "@brief Virtual method void QAbstractExtensionManager::unregisterExtensions(QAbstractExtensionFactory *factory, const QString &iid)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_unregisterExtensions_5125_0, &_call_cbs_unregisterExtensions_5125_0);
  methods += new qt_gsi::GenericMethod ("unregisterExtensions", "@hide", false, &_init_cbs_unregisterExtensions_5125_0, &_call_cbs_unregisterExtensions_5125_0, &_set_callback_cbs_unregisterExtensions_5125_0);
  return methods;
}

gsi::Class<QAbstractExtensionManager_Adaptor> decl_QAbstractExtensionManager_Adaptor (qtdecl_QAbstractExtensionManager (), "QtDesigner", "QAbstractExtensionManager",
  methods_QAbstractExtensionManager_Adaptor (),
  "@qt\n@brief Binding of QAbstractExtensionManager");

}

