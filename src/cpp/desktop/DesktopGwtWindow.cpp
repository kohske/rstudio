/*
 * DesktopGwtWindow.cpp
 *
 * Copyright (C) 2009-11 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#include "DesktopGwtWindow.hpp"



namespace desktop {

GwtWindow::GwtWindow(bool showToolbar,
                     bool adjustTitle,
                     QUrl baseUrl,
                     QWidget* pParent) :
   BrowserWindow(showToolbar, adjustTitle, baseUrl, pParent)
{
}

bool GwtWindow::event(QEvent* pEvent)
{
   if (pEvent->type() == QEvent::WindowActivate)
      onActivated();

   return BrowserWindow::event(pEvent);
}


} // namespace desktop