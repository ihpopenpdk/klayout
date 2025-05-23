
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

#if defined(HAVE_QT)

#ifndef HDR_edtPCellParametersPage
#define HDR_edtPCellParametersPage

#include "dbPCellDeclaration.h"
#include "tlDeferredExecution.h"

#include <QFrame>

class QGroupBox;
class QCheckBox;
class QLabel;
class QToolButton;
class QScrollArea;

namespace lay
{
  class LayoutViewBase;
  class Dispatcher;
}

namespace edt
{

/**
 *  @brief A QScrollArea that displays and allows editing PCell parameters
 */
class PCellParametersPage
  : public QFrame, public tl::Object
{
Q_OBJECT

public:
  struct State
  {
    State () : valid (false), hScrollPosition (0), vScrollPosition (0) { }

    bool valid;
    int hScrollPosition;
    int vScrollPosition;
    QString focusWidget;
  };

  /**
   *  @brief Default constructor
   *
   *  Use "setup" to configure the page.
   *
   *  @param dense Use a dense layout if true
   */
  PCellParametersPage (QWidget *parent, lay::Dispatcher *dispatcher, bool dense = false);

  /**
   *  @brief initialization
   *
   *  Use this method to setup when the arguments are not available in the constructor
   *
   *  @param layout The layout in which the PCell instance resides
   *  @param view The layout view from which to take layers for example
   *  @param cv_index The index of the cellview in "view"
   *  @param pcell_decl The PCell declaration
   *  @param parameters The parameter values to show (if empty, the default values are used)
   */
  void setup (lay::LayoutViewBase *view, int cv_index, const db::PCellDeclaration *pcell_decl, const db::pcell_parameters_type &parameters);

  /**
   *  @brief Gets the pages current state
   */
  State get_state ();

  /**
   *  @brief Restores the state
   */
  void set_state (const State &s);

  /**
   *  @brief Gets the current parameters
   *
   *  *ok is set to true, if there is no error. In case of an error it's set to false.
   *  The error is indicated in the error label in the editor page.
   *  If ok is null, an exception is thrown.
   */
  std::vector<tl::Variant> get_parameters (bool *ok = 0);

  /**
   *  @brief Gets the current parameters into a ParameterStates object
   *
   *  *ok is set to true, if there is no error. In case of an error it's set to false.
   *  The error is indicated in the error label in the editor page.
   *  If ok is null, an exception is thrown.
   *
   *  The value fields of the ParameterState members is set to the parameter value.
   *  The other attributes are not changed. Parameters not present inside the
   *  ParameterStates object are created with their corresponding name.
   */
  void get_parameters (db::ParameterStates &states, bool *ok = 0);

  /**
   *  @brief Gets the initial parameters
   */
  std::vector<tl::Variant> initial_parameters () const
  {
    return parameter_from_states (m_initial_states);
  }

  /**
   *  @brief Get the PCell declaration pointer
   */
  const db::PCellDeclaration *pcell_decl () const
  {
    return mp_pcell_decl.get ();
  }

  /**
   *  @brief Sets the given parameters as values
   */
  void set_parameters (const  std::vector<tl::Variant> &values);

  /**
   *  @brief Reimplementation of deleteLater
   */
  void deleteLater ();

signals:
  void edited ();

public slots:
  void show_parameter_names (bool f);
  void lazy_eval_mode (int);

private slots:
  void parameter_changed ();
  void update_button_pressed ();
  void lazy_eval_mode_slot ();

private:
  lay::Dispatcher *mp_dispatcher;
  QScrollArea *mp_parameters_area;
  QFrame *mp_main_frame;
  std::vector<QGroupBox *> mp_groups;
  QLabel *mp_error_label;
  QLabel *mp_error_icon;
  QLabel *mp_changed_label;
  QLabel *mp_changed_icon;
  QToolButton *mp_update_button;
  QFrame *mp_error_frame, *mp_update_frame;
  QAction *mp_show_parameter_names_action;
  QAction *mp_auto_lazy_eval_action;
  QAction *mp_always_lazy_eval_action;
  QAction *mp_never_lazy_eval_action;
  tl::weak_ptr<db::PCellDeclaration> mp_pcell_decl;
  std::vector<QWidget *> m_widgets;
  std::vector<QLabel *> m_icon_widgets;
  std::vector<std::vector<QWidget *> > m_all_widgets;
  lay::LayoutViewBase *mp_view;
  int m_cv_index;
  bool m_dense, m_show_parameter_names;
  int m_lazy_evaluation;
  tl::DeferredMethod<PCellParametersPage> dm_parameter_changed;
  db::ParameterStates m_current_states, m_initial_states;
  db::ParameterStates m_states;

  void init ();
  void do_parameter_changed ();
  bool lazy_evaluation ();
  void set_parameters_internal (const db::ParameterStates &states, bool tentatively);
  bool update_current_parameters ();
  void update_widgets_from_states (const db::ParameterStates &states, bool tentatively);
  void get_parameters_internal (db::ParameterStates &states, bool &edit_error);
  std::vector<tl::Variant> parameter_from_states (const db::ParameterStates &states) const;
  void states_from_parameters (db::ParameterStates &states, const std::vector<tl::Variant> &parameters);
  void check_range (const tl::Variant& value, const db::PCellParameterDeclaration &decl);
};

}

#endif

#endif
