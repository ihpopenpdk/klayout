
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
*  @file gsiDeclQAccessibleWidget.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleWidget>
#include <QAccessibleInterface>
#include <QAccessibleTableCellInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include <QWidget>
#include <QWindow>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleWidget

//  Constructor QAccessibleWidget::QAccessibleWidget(QWidget *o, QAccessible::Role r, const QString &name)


static void _init_ctor_QAccessibleWidget_5165 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<QWidget * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("r", true, "QAccessible::Client");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Role>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("name", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return_new<QAccessibleWidget> ();
}

static void _call_ctor_QAccessibleWidget_5165 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  const qt_gsi::Converter<QAccessible::Role>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QAccessible::Role>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QAccessible::Role>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QAccessible::Role>(heap, QAccessible::Client), heap);
  const QString &arg3 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QAccessibleWidget *> (new QAccessibleWidget (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Role>(arg2).cref(), arg3));
}


// QStringList QAccessibleWidget::actionNames()


static void _init_f_actionNames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_actionNames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QAccessibleWidget *)cls)->actionNames ());
}


// QColor QAccessibleWidget::backgroundColor()


static void _init_f_backgroundColor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_backgroundColor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QAccessibleWidget *)cls)->backgroundColor ());
}


// QAccessibleInterface *QAccessibleWidget::child(int index)


static void _init_f_child_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_child_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleWidget *)cls)->child (arg1));
}


// int QAccessibleWidget::childCount()


static void _init_f_childCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_childCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleWidget *)cls)->childCount ());
}


// void QAccessibleWidget::doAction(const QString &actionName)


static void _init_f_doAction_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("actionName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_doAction_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleWidget *)cls)->doAction (arg1);
}


// QAccessibleInterface *QAccessibleWidget::focusChild()


static void _init_f_focusChild_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_focusChild_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleWidget *)cls)->focusChild ());
}


// QColor QAccessibleWidget::foregroundColor()


static void _init_f_foregroundColor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_foregroundColor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QAccessibleWidget *)cls)->foregroundColor ());
}


// int QAccessibleWidget::indexOfChild(const QAccessibleInterface *child)


static void _init_f_indexOfChild_c3317 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<const QAccessibleInterface * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfChild_c3317 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAccessibleInterface *arg1 = gsi::arg_reader<const QAccessibleInterface * >() (args, heap);
  ret.write<int > ((int)((QAccessibleWidget *)cls)->indexOfChild (arg1));
}


// void *QAccessibleWidget::interface_cast(QAccessible::InterfaceType t)


static void _init_f_interface_cast_2970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::InterfaceType>::target_type & > (argspec_0);
  decl->set_return<void * > ();
}

static void _call_f_interface_cast_2970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::InterfaceType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::InterfaceType>::target_type & >() (args, heap);
  ret.write<void * > ((void *)((QAccessibleWidget *)cls)->interface_cast (qt_gsi::QtToCppAdaptor<QAccessible::InterfaceType>(arg1).cref()));
}


// bool QAccessibleWidget::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleWidget *)cls)->isValid ());
}


// QStringList QAccessibleWidget::keyBindingsForAction(const QString &actionName)


static void _init_f_keyBindingsForAction_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("actionName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_keyBindingsForAction_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStringList > ((QStringList)((QAccessibleWidget *)cls)->keyBindingsForAction (arg1));
}


// QAccessibleInterface *QAccessibleWidget::parent()


static void _init_f_parent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_parent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleWidget *)cls)->parent ());
}


// QRect QAccessibleWidget::rect()


static void _init_f_rect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_rect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QAccessibleWidget *)cls)->rect ());
}


// QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > QAccessibleWidget::relations(QFlags<QAccessible::RelationFlag> match)


static void _init_f_relations_c3543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("match", true, "QAccessible::AllRelations");
  decl->add_arg<QFlags<QAccessible::RelationFlag> > (argspec_0);
  decl->set_return<QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > > ();
}

static void _call_f_relations_c3543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QAccessible::RelationFlag> arg1 = args ? gsi::arg_reader<QFlags<QAccessible::RelationFlag> >() (args, heap) : gsi::arg_maker<QFlags<QAccessible::RelationFlag> >() (QAccessible::AllRelations, heap);
  ret.write<QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > > ((QVector<QPair<QAccessibleInterface*, QAccessible::Relation> >)((QAccessibleWidget *)cls)->relations (arg1));
}


// QAccessible::Role QAccessibleWidget::role()


static void _init_f_role_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAccessible::Role>::target_type > ();
}

static void _call_f_role_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAccessible::Role>::target_type > ((qt_gsi::Converter<QAccessible::Role>::target_type)qt_gsi::CppToQtAdaptor<QAccessible::Role>(((QAccessibleWidget *)cls)->role ()));
}


// QAccessible::State QAccessibleWidget::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessible::State > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessible::State > ((QAccessible::State)((QAccessibleWidget *)cls)->state ());
}


// QString QAccessibleWidget::text(QAccessible::Text t)


static void _init_f_text_c2060 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_text_c2060 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Text>::target_type & >() (args, heap);
  ret.write<QString > ((QString)((QAccessibleWidget *)cls)->text (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref()));
}


// QWindow *QAccessibleWidget::window()


static void _init_f_window_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWindow * > ();
}

static void _call_f_window_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWindow * > ((QWindow *)((QAccessibleWidget *)cls)->window ());
}


//  base class cast for QAccessibleObject

static void _init_f_QAccessibleWidget_as_QAccessibleObject (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleObject *> ();
}

static void _call_f_QAccessibleWidget_as_QAccessibleObject (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QAccessibleObject *> ((QAccessibleObject *)(QAccessibleWidget *)cls);
}

static void _init_f_QAccessibleWidget_as_const_QAccessibleObject (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QAccessibleObject *> ();
}

static void _call_f_QAccessibleWidget_as_const_QAccessibleObject (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QAccessibleObject *> ((const QAccessibleObject *)(const QAccessibleWidget *)cls);
}

//  base class cast for QAccessibleActionInterface

static void _init_f_QAccessibleWidget_as_QAccessibleActionInterface (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleActionInterface *> ();
}

static void _call_f_QAccessibleWidget_as_QAccessibleActionInterface (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QAccessibleActionInterface *> ((QAccessibleActionInterface *)(QAccessibleWidget *)cls);
}

static void _init_f_QAccessibleWidget_as_const_QAccessibleActionInterface (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QAccessibleActionInterface *> ();
}

static void _call_f_QAccessibleWidget_as_const_QAccessibleActionInterface (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QAccessibleActionInterface *> ((const QAccessibleActionInterface *)(const QAccessibleWidget *)cls);
}



namespace gsi
{

static gsi::Methods methods_QAccessibleWidget () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleWidget::QAccessibleWidget(QWidget *o, QAccessible::Role r, const QString &name)\nThis method creates an object of class QAccessibleWidget.", &_init_ctor_QAccessibleWidget_5165, &_call_ctor_QAccessibleWidget_5165);
  methods += new qt_gsi::GenericMethod ("actionNames", "@brief Method QStringList QAccessibleWidget::actionNames()\nThis is a reimplementation of QAccessibleActionInterface::actionNames", true, &_init_f_actionNames_c0, &_call_f_actionNames_c0);
  methods += new qt_gsi::GenericMethod ("backgroundColor", "@brief Method QColor QAccessibleWidget::backgroundColor()\nThis is a reimplementation of QAccessibleInterface::backgroundColor", true, &_init_f_backgroundColor_c0, &_call_f_backgroundColor_c0);
  methods += new qt_gsi::GenericMethod ("child", "@brief Method QAccessibleInterface *QAccessibleWidget::child(int index)\nThis is a reimplementation of QAccessibleInterface::child", true, &_init_f_child_c767, &_call_f_child_c767);
  methods += new qt_gsi::GenericMethod ("childCount", "@brief Method int QAccessibleWidget::childCount()\nThis is a reimplementation of QAccessibleInterface::childCount", true, &_init_f_childCount_c0, &_call_f_childCount_c0);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Method void QAccessibleWidget::doAction(const QString &actionName)\nThis is a reimplementation of QAccessibleActionInterface::doAction", false, &_init_f_doAction_2025, &_call_f_doAction_2025);
  methods += new qt_gsi::GenericMethod ("focusChild", "@brief Method QAccessibleInterface *QAccessibleWidget::focusChild()\nThis is a reimplementation of QAccessibleInterface::focusChild", true, &_init_f_focusChild_c0, &_call_f_focusChild_c0);
  methods += new qt_gsi::GenericMethod ("foregroundColor", "@brief Method QColor QAccessibleWidget::foregroundColor()\nThis is a reimplementation of QAccessibleInterface::foregroundColor", true, &_init_f_foregroundColor_c0, &_call_f_foregroundColor_c0);
  methods += new qt_gsi::GenericMethod ("indexOfChild", "@brief Method int QAccessibleWidget::indexOfChild(const QAccessibleInterface *child)\nThis is a reimplementation of QAccessibleInterface::indexOfChild", true, &_init_f_indexOfChild_c3317, &_call_f_indexOfChild_c3317);
  methods += new qt_gsi::GenericMethod ("interface_cast", "@brief Method void *QAccessibleWidget::interface_cast(QAccessible::InterfaceType t)\nThis is a reimplementation of QAccessibleInterface::interface_cast", false, &_init_f_interface_cast_2970, &_call_f_interface_cast_2970);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAccessibleWidget::isValid()\nThis is a reimplementation of QAccessibleObject::isValid", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("keyBindingsForAction", "@brief Method QStringList QAccessibleWidget::keyBindingsForAction(const QString &actionName)\nThis is a reimplementation of QAccessibleActionInterface::keyBindingsForAction", true, &_init_f_keyBindingsForAction_c2025, &_call_f_keyBindingsForAction_c2025);
  methods += new qt_gsi::GenericMethod ("parent", "@brief Method QAccessibleInterface *QAccessibleWidget::parent()\nThis is a reimplementation of QAccessibleInterface::parent", true, &_init_f_parent_c0, &_call_f_parent_c0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method QRect QAccessibleWidget::rect()\nThis is a reimplementation of QAccessibleObject::rect", true, &_init_f_rect_c0, &_call_f_rect_c0);
  methods += new qt_gsi::GenericMethod ("relations", "@brief Method QVector<QPair<QAccessibleInterface*, QAccessible::Relation> > QAccessibleWidget::relations(QFlags<QAccessible::RelationFlag> match)\nThis is a reimplementation of QAccessibleInterface::relations", true, &_init_f_relations_c3543, &_call_f_relations_c3543);
  methods += new qt_gsi::GenericMethod ("role", "@brief Method QAccessible::Role QAccessibleWidget::role()\nThis is a reimplementation of QAccessibleInterface::role", true, &_init_f_role_c0, &_call_f_role_c0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QAccessible::State QAccessibleWidget::state()\nThis is a reimplementation of QAccessibleInterface::state", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QAccessibleWidget::text(QAccessible::Text t)\nThis is a reimplementation of QAccessibleInterface::text", true, &_init_f_text_c2060, &_call_f_text_c2060);
  methods += new qt_gsi::GenericMethod ("window", "@brief Method QWindow *QAccessibleWidget::window()\nThis is a reimplementation of QAccessibleInterface::window", true, &_init_f_window_c0, &_call_f_window_c0);
  methods += new qt_gsi::GenericMethod ("asQAccessibleObject", "@brief Delivers the base class interface QAccessibleObject of QAccessibleWidget\nClass QAccessibleWidget is derived from multiple base classes. This method delivers the QAccessibleObject base class aspect.", false, &_init_f_QAccessibleWidget_as_QAccessibleObject, &_call_f_QAccessibleWidget_as_QAccessibleObject);
  methods += new qt_gsi::GenericMethod ("asConstQAccessibleObject", "@brief Delivers the base class interface QAccessibleObject of QAccessibleWidget\nClass QAccessibleWidget is derived from multiple base classes. This method delivers the QAccessibleObject base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QAccessibleWidget_as_const_QAccessibleObject, &_call_f_QAccessibleWidget_as_const_QAccessibleObject);
  methods += new qt_gsi::GenericMethod ("asQAccessibleActionInterface", "@brief Delivers the base class interface QAccessibleActionInterface of QAccessibleWidget\nClass QAccessibleWidget is derived from multiple base classes. This method delivers the QAccessibleActionInterface base class aspect.", false, &_init_f_QAccessibleWidget_as_QAccessibleActionInterface, &_call_f_QAccessibleWidget_as_QAccessibleActionInterface);
  methods += new qt_gsi::GenericMethod ("asConstQAccessibleActionInterface", "@brief Delivers the base class interface QAccessibleActionInterface of QAccessibleWidget\nClass QAccessibleWidget is derived from multiple base classes. This method delivers the QAccessibleActionInterface base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QAccessibleWidget_as_const_QAccessibleActionInterface, &_call_f_QAccessibleWidget_as_const_QAccessibleActionInterface);
  return methods;
}

gsi::Class<QAccessibleObject> &qtdecl_QAccessibleObject ();

gsi::Class<QAccessibleWidget> decl_QAccessibleWidget (qtdecl_QAccessibleObject (), "QtWidgets", "QAccessibleWidget",
  methods_QAccessibleWidget (),
  "@qt\n@brief Binding of QAccessibleWidget");


//  Additional base classes

gsi::Class<QAccessibleActionInterface> &qtdecl_QAccessibleActionInterface ();

gsi::ClassExt<QAccessibleWidget> base_class_QAccessibleActionInterface_in_QAccessibleWidget (qtdecl_QAccessibleActionInterface ());

GSI_QTWIDGETS_PUBLIC gsi::Class<QAccessibleWidget> &qtdecl_QAccessibleWidget () { return decl_QAccessibleWidget; }

}

