
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
*  @file gsiDeclQPrintEngine.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPrintEngine>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPrintEngine

// bool QPrintEngine::abort()


static void _init_f_abort_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_abort_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrintEngine *)cls)->abort ());
}


// int QPrintEngine::metric(QPaintDevice::PaintDeviceMetric)


static void _init_f_metric_c3445 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_metric_c3445 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & >() (args, heap);
  ret.write<int > ((int)((QPrintEngine *)cls)->metric (qt_gsi::QtToCppAdaptor<QPaintDevice::PaintDeviceMetric>(arg1).cref()));
}


// bool QPrintEngine::newPage()


static void _init_f_newPage_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_newPage_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrintEngine *)cls)->newPage ());
}


// QPrinter::PrinterState QPrintEngine::printerState()


static void _init_f_printerState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPrinter::PrinterState>::target_type > ();
}

static void _call_f_printerState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPrinter::PrinterState>::target_type > ((qt_gsi::Converter<QPrinter::PrinterState>::target_type)qt_gsi::CppToQtAdaptor<QPrinter::PrinterState>(((QPrintEngine *)cls)->printerState ()));
}


// QVariant QPrintEngine::property(QPrintEngine::PrintEnginePropertyKey key)


static void _init_f_property_c4045 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_property_c4045 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QPrintEngine *)cls)->property (qt_gsi::QtToCppAdaptor<QPrintEngine::PrintEnginePropertyKey>(arg1).cref()));
}


// void QPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey key, const QVariant &value)


static void _init_f_setProperty_6056 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setProperty_6056 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPrintEngine *)cls)->setProperty (qt_gsi::QtToCppAdaptor<QPrintEngine::PrintEnginePropertyKey>(arg1).cref(), arg2);
}


namespace gsi
{

static gsi::Methods methods_QPrintEngine () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("abort", "@brief Method bool QPrintEngine::abort()\n", false, &_init_f_abort_0, &_call_f_abort_0);
  methods += new qt_gsi::GenericMethod ("metric", "@brief Method int QPrintEngine::metric(QPaintDevice::PaintDeviceMetric)\n", true, &_init_f_metric_c3445, &_call_f_metric_c3445);
  methods += new qt_gsi::GenericMethod ("newPage", "@brief Method bool QPrintEngine::newPage()\n", false, &_init_f_newPage_0, &_call_f_newPage_0);
  methods += new qt_gsi::GenericMethod ("printerState", "@brief Method QPrinter::PrinterState QPrintEngine::printerState()\n", true, &_init_f_printerState_c0, &_call_f_printerState_c0);
  methods += new qt_gsi::GenericMethod ("property", "@brief Method QVariant QPrintEngine::property(QPrintEngine::PrintEnginePropertyKey key)\n", true, &_init_f_property_c4045, &_call_f_property_c4045);
  methods += new qt_gsi::GenericMethod ("setProperty", "@brief Method void QPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey key, const QVariant &value)\n", false, &_init_f_setProperty_6056, &_call_f_setProperty_6056);
  return methods;
}

gsi::Class<QPrintEngine> decl_QPrintEngine ("QtGui", "QPrintEngine_Native",
  methods_QPrintEngine (),
  "@hide\n@alias QPrintEngine");

GSI_QTGUI_PUBLIC gsi::Class<QPrintEngine> &qtdecl_QPrintEngine () { return decl_QPrintEngine; }

}


class QPrintEngine_Adaptor : public QPrintEngine, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPrintEngine_Adaptor();

  //  [adaptor ctor] QPrintEngine::QPrintEngine()
  QPrintEngine_Adaptor() : QPrintEngine()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QPrintEngine::abort()
  bool cbs_abort_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("abort");
  }

  virtual bool abort()
  {
    if (cb_abort_0_0.can_issue()) {
      return cb_abort_0_0.issue<QPrintEngine_Adaptor, bool>(&QPrintEngine_Adaptor::cbs_abort_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("abort");
    }
  }

  //  [adaptor impl] int QPrintEngine::metric(QPaintDevice::PaintDeviceMetric)
  int cbs_metric_c3445_0(const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1) const
  {
    __SUPPRESS_UNUSED_WARNING (arg1);
    throw qt_gsi::AbstractMethodCalledException("metric");
  }

  virtual int metric(QPaintDevice::PaintDeviceMetric arg1) const
  {
    if (cb_metric_c3445_0.can_issue()) {
      return cb_metric_c3445_0.issue<QPrintEngine_Adaptor, int, const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type &>(&QPrintEngine_Adaptor::cbs_metric_c3445_0, qt_gsi::CppToQtAdaptor<QPaintDevice::PaintDeviceMetric>(arg1));
    } else {
      throw qt_gsi::AbstractMethodCalledException("metric");
    }
  }

  //  [adaptor impl] bool QPrintEngine::newPage()
  bool cbs_newPage_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("newPage");
  }

  virtual bool newPage()
  {
    if (cb_newPage_0_0.can_issue()) {
      return cb_newPage_0_0.issue<QPrintEngine_Adaptor, bool>(&QPrintEngine_Adaptor::cbs_newPage_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("newPage");
    }
  }

  //  [adaptor impl] QPrinter::PrinterState QPrintEngine::printerState()
  qt_gsi::Converter<QPrinter::PrinterState>::target_type cbs_printerState_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("printerState");
  }

  virtual QPrinter::PrinterState printerState() const
  {
    if (cb_printerState_c0_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QPrinter::PrinterState>(cb_printerState_c0_0.issue<QPrintEngine_Adaptor, qt_gsi::Converter<QPrinter::PrinterState>::target_type>(&QPrintEngine_Adaptor::cbs_printerState_c0_0)).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("printerState");
    }
  }

  //  [adaptor impl] QVariant QPrintEngine::property(QPrintEngine::PrintEnginePropertyKey key)
  QVariant cbs_property_c4045_0(const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & key) const
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("property");
  }

  virtual QVariant property(QPrintEngine::PrintEnginePropertyKey key) const
  {
    if (cb_property_c4045_0.can_issue()) {
      return cb_property_c4045_0.issue<QPrintEngine_Adaptor, QVariant, const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type &>(&QPrintEngine_Adaptor::cbs_property_c4045_0, qt_gsi::CppToQtAdaptor<QPrintEngine::PrintEnginePropertyKey>(key));
    } else {
      throw qt_gsi::AbstractMethodCalledException("property");
    }
  }

  //  [adaptor impl] void QPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey key, const QVariant &value)
  void cbs_setProperty_6056_0(const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & key, const QVariant &value)
  {
    __SUPPRESS_UNUSED_WARNING (key);
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("setProperty");
  }

  virtual void setProperty(QPrintEngine::PrintEnginePropertyKey key, const QVariant &value)
  {
    if (cb_setProperty_6056_0.can_issue()) {
      cb_setProperty_6056_0.issue<QPrintEngine_Adaptor, const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type &, const QVariant &>(&QPrintEngine_Adaptor::cbs_setProperty_6056_0, qt_gsi::CppToQtAdaptor<QPrintEngine::PrintEnginePropertyKey>(key), value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setProperty");
    }
  }

  gsi::Callback cb_abort_0_0;
  gsi::Callback cb_metric_c3445_0;
  gsi::Callback cb_newPage_0_0;
  gsi::Callback cb_printerState_c0_0;
  gsi::Callback cb_property_c4045_0;
  gsi::Callback cb_setProperty_6056_0;
};

QPrintEngine_Adaptor::~QPrintEngine_Adaptor() { }

//  Constructor QPrintEngine::QPrintEngine() (adaptor class)

static void _init_ctor_QPrintEngine_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPrintEngine_Adaptor> ();
}

static void _call_ctor_QPrintEngine_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPrintEngine_Adaptor *> (new QPrintEngine_Adaptor ());
}


// bool QPrintEngine::abort()

static void _init_cbs_abort_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_abort_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrintEngine_Adaptor *)cls)->cbs_abort_0_0 ());
}

static void _set_callback_cbs_abort_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPrintEngine_Adaptor *)cls)->cb_abort_0_0 = cb;
}


// int QPrintEngine::metric(QPaintDevice::PaintDeviceMetric)

static void _init_cbs_metric_c3445_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_metric_c3445_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1 = args.read<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (heap);
  ret.write<int > ((int)((QPrintEngine_Adaptor *)cls)->cbs_metric_c3445_0 (arg1));
}

static void _set_callback_cbs_metric_c3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QPrintEngine_Adaptor *)cls)->cb_metric_c3445_0 = cb;
}


// bool QPrintEngine::newPage()

static void _init_cbs_newPage_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_newPage_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrintEngine_Adaptor *)cls)->cbs_newPage_0_0 ());
}

static void _set_callback_cbs_newPage_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPrintEngine_Adaptor *)cls)->cb_newPage_0_0 = cb;
}


// QPrinter::PrinterState QPrintEngine::printerState()

static void _init_cbs_printerState_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPrinter::PrinterState>::target_type > ();
}

static void _call_cbs_printerState_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPrinter::PrinterState>::target_type > ((qt_gsi::Converter<QPrinter::PrinterState>::target_type)((QPrintEngine_Adaptor *)cls)->cbs_printerState_c0_0 ());
}

static void _set_callback_cbs_printerState_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPrintEngine_Adaptor *)cls)->cb_printerState_c0_0 = cb;
}


// QVariant QPrintEngine::property(QPrintEngine::PrintEnginePropertyKey key)

static void _init_cbs_property_c4045_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_cbs_property_c4045_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & arg1 = args.read<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & > (heap);
  ret.write<QVariant > ((QVariant)((QPrintEngine_Adaptor *)cls)->cbs_property_c4045_0 (arg1));
}

static void _set_callback_cbs_property_c4045_0 (void *cls, const gsi::Callback &cb)
{
  ((QPrintEngine_Adaptor *)cls)->cb_property_c4045_0 = cb;
}


// void QPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey key, const QVariant &value)

static void _init_cbs_setProperty_6056_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_setProperty_6056_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & arg1 = args.read<const qt_gsi::Converter<QPrintEngine::PrintEnginePropertyKey>::target_type & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPrintEngine_Adaptor *)cls)->cbs_setProperty_6056_0 (arg1, arg2);
}

static void _set_callback_cbs_setProperty_6056_0 (void *cls, const gsi::Callback &cb)
{
  ((QPrintEngine_Adaptor *)cls)->cb_setProperty_6056_0 = cb;
}


namespace gsi
{

gsi::Class<QPrintEngine> &qtdecl_QPrintEngine ();

static gsi::Methods methods_QPrintEngine_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPrintEngine::QPrintEngine()\nThis method creates an object of class QPrintEngine.", &_init_ctor_QPrintEngine_Adaptor_0, &_call_ctor_QPrintEngine_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("abort", "@brief Virtual method bool QPrintEngine::abort()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_abort_0_0, &_call_cbs_abort_0_0);
  methods += new qt_gsi::GenericMethod ("abort", "@hide", false, &_init_cbs_abort_0_0, &_call_cbs_abort_0_0, &_set_callback_cbs_abort_0_0);
  methods += new qt_gsi::GenericMethod ("metric", "@brief Virtual method int QPrintEngine::metric(QPaintDevice::PaintDeviceMetric)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("metric", "@hide", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0, &_set_callback_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("newPage", "@brief Virtual method bool QPrintEngine::newPage()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_newPage_0_0, &_call_cbs_newPage_0_0);
  methods += new qt_gsi::GenericMethod ("newPage", "@hide", false, &_init_cbs_newPage_0_0, &_call_cbs_newPage_0_0, &_set_callback_cbs_newPage_0_0);
  methods += new qt_gsi::GenericMethod ("printerState", "@brief Virtual method QPrinter::PrinterState QPrintEngine::printerState()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_printerState_c0_0, &_call_cbs_printerState_c0_0);
  methods += new qt_gsi::GenericMethod ("printerState", "@hide", true, &_init_cbs_printerState_c0_0, &_call_cbs_printerState_c0_0, &_set_callback_cbs_printerState_c0_0);
  methods += new qt_gsi::GenericMethod ("property", "@brief Virtual method QVariant QPrintEngine::property(QPrintEngine::PrintEnginePropertyKey key)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_property_c4045_0, &_call_cbs_property_c4045_0);
  methods += new qt_gsi::GenericMethod ("property", "@hide", true, &_init_cbs_property_c4045_0, &_call_cbs_property_c4045_0, &_set_callback_cbs_property_c4045_0);
  methods += new qt_gsi::GenericMethod ("setProperty", "@brief Virtual method void QPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey key, const QVariant &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setProperty_6056_0, &_call_cbs_setProperty_6056_0);
  methods += new qt_gsi::GenericMethod ("setProperty", "@hide", false, &_init_cbs_setProperty_6056_0, &_call_cbs_setProperty_6056_0, &_set_callback_cbs_setProperty_6056_0);
  return methods;
}

gsi::Class<QPrintEngine_Adaptor> decl_QPrintEngine_Adaptor (qtdecl_QPrintEngine (), "QtGui", "QPrintEngine",
  methods_QPrintEngine_Adaptor (),
  "@qt\n@brief Binding of QPrintEngine");

}


//  Implementation of the enum wrapper class for QPrintEngine::PrintEnginePropertyKey
namespace qt_gsi
{

static gsi::Enum<QPrintEngine::PrintEnginePropertyKey> decl_QPrintEngine_PrintEnginePropertyKey_Enum ("QtGui", "QPrintEngine_PrintEnginePropertyKey",
    gsi::enum_const ("PPK_CollateCopies", QPrintEngine::PPK_CollateCopies, "@brief Enum constant QPrintEngine::PPK_CollateCopies") +
    gsi::enum_const ("PPK_ColorMode", QPrintEngine::PPK_ColorMode, "@brief Enum constant QPrintEngine::PPK_ColorMode") +
    gsi::enum_const ("PPK_Creator", QPrintEngine::PPK_Creator, "@brief Enum constant QPrintEngine::PPK_Creator") +
    gsi::enum_const ("PPK_DocumentName", QPrintEngine::PPK_DocumentName, "@brief Enum constant QPrintEngine::PPK_DocumentName") +
    gsi::enum_const ("PPK_FullPage", QPrintEngine::PPK_FullPage, "@brief Enum constant QPrintEngine::PPK_FullPage") +
    gsi::enum_const ("PPK_NumberOfCopies", QPrintEngine::PPK_NumberOfCopies, "@brief Enum constant QPrintEngine::PPK_NumberOfCopies") +
    gsi::enum_const ("PPK_Orientation", QPrintEngine::PPK_Orientation, "@brief Enum constant QPrintEngine::PPK_Orientation") +
    gsi::enum_const ("PPK_OutputFileName", QPrintEngine::PPK_OutputFileName, "@brief Enum constant QPrintEngine::PPK_OutputFileName") +
    gsi::enum_const ("PPK_PageOrder", QPrintEngine::PPK_PageOrder, "@brief Enum constant QPrintEngine::PPK_PageOrder") +
    gsi::enum_const ("PPK_PageRect", QPrintEngine::PPK_PageRect, "@brief Enum constant QPrintEngine::PPK_PageRect") +
    gsi::enum_const ("PPK_PageSize", QPrintEngine::PPK_PageSize, "@brief Enum constant QPrintEngine::PPK_PageSize") +
    gsi::enum_const ("PPK_PaperRect", QPrintEngine::PPK_PaperRect, "@brief Enum constant QPrintEngine::PPK_PaperRect") +
    gsi::enum_const ("PPK_PaperSource", QPrintEngine::PPK_PaperSource, "@brief Enum constant QPrintEngine::PPK_PaperSource") +
    gsi::enum_const ("PPK_PrinterName", QPrintEngine::PPK_PrinterName, "@brief Enum constant QPrintEngine::PPK_PrinterName") +
    gsi::enum_const ("PPK_PrinterProgram", QPrintEngine::PPK_PrinterProgram, "@brief Enum constant QPrintEngine::PPK_PrinterProgram") +
    gsi::enum_const ("PPK_Resolution", QPrintEngine::PPK_Resolution, "@brief Enum constant QPrintEngine::PPK_Resolution") +
    gsi::enum_const ("PPK_SelectionOption", QPrintEngine::PPK_SelectionOption, "@brief Enum constant QPrintEngine::PPK_SelectionOption") +
    gsi::enum_const ("PPK_SupportedResolutions", QPrintEngine::PPK_SupportedResolutions, "@brief Enum constant QPrintEngine::PPK_SupportedResolutions") +
    gsi::enum_const ("PPK_WindowsPageSize", QPrintEngine::PPK_WindowsPageSize, "@brief Enum constant QPrintEngine::PPK_WindowsPageSize") +
    gsi::enum_const ("PPK_FontEmbedding", QPrintEngine::PPK_FontEmbedding, "@brief Enum constant QPrintEngine::PPK_FontEmbedding") +
    gsi::enum_const ("PPK_SuppressSystemPrintStatus", QPrintEngine::PPK_SuppressSystemPrintStatus, "@brief Enum constant QPrintEngine::PPK_SuppressSystemPrintStatus") +
    gsi::enum_const ("PPK_Duplex", QPrintEngine::PPK_Duplex, "@brief Enum constant QPrintEngine::PPK_Duplex") +
    gsi::enum_const ("PPK_PaperSources", QPrintEngine::PPK_PaperSources, "@brief Enum constant QPrintEngine::PPK_PaperSources") +
    gsi::enum_const ("PPK_CustomPaperSize", QPrintEngine::PPK_CustomPaperSize, "@brief Enum constant QPrintEngine::PPK_CustomPaperSize") +
    gsi::enum_const ("PPK_PageMargins", QPrintEngine::PPK_PageMargins, "@brief Enum constant QPrintEngine::PPK_PageMargins") +
    gsi::enum_const ("PPK_PaperSize", QPrintEngine::PPK_PaperSize, "@brief Enum constant QPrintEngine::PPK_PaperSize") +
    gsi::enum_const ("PPK_CustomBase", QPrintEngine::PPK_CustomBase, "@brief Enum constant QPrintEngine::PPK_CustomBase"),
  "@qt\n@brief This class represents the QPrintEngine::PrintEnginePropertyKey enum");

static gsi::QFlagsClass<QPrintEngine::PrintEnginePropertyKey > decl_QPrintEngine_PrintEnginePropertyKey_Enums ("QtGui", "QPrintEngine_QFlags_PrintEnginePropertyKey",
  "@qt\n@brief This class represents the QFlags<QPrintEngine::PrintEnginePropertyKey> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPrintEngine> inject_QPrintEngine_PrintEnginePropertyKey_Enum_in_parent (decl_QPrintEngine_PrintEnginePropertyKey_Enum.defs ());
static gsi::ClassExt<QPrintEngine> decl_QPrintEngine_PrintEnginePropertyKey_Enum_as_child (decl_QPrintEngine_PrintEnginePropertyKey_Enum, "PrintEnginePropertyKey");
static gsi::ClassExt<QPrintEngine> decl_QPrintEngine_PrintEnginePropertyKey_Enums_as_child (decl_QPrintEngine_PrintEnginePropertyKey_Enums, "QFlags_PrintEnginePropertyKey");

}

