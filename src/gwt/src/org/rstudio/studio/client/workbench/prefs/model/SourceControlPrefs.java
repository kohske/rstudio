/*
 * SourceControlPrefs.java
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
package org.rstudio.studio.client.workbench.prefs.model;

import com.google.gwt.core.client.JavaScriptObject;

public class SourceControlPrefs extends JavaScriptObject
{
   protected SourceControlPrefs() {}

   // create source control prefs -- don't pass the have_rsa_public_key
   // parameter because that is a read-only rider for the prefs ui
   public static final native SourceControlPrefs create(boolean vcsEnabled,
                                                        String gitExePath,
                                                        String svnExePath,
                                                        String terminalPath,
                                                        boolean useGitBash) 
                                                                           /*-{
      var prefs = new Object();
      prefs.vcs_enabled = vcsEnabled;
      prefs.git_exe_path = gitExePath;
      prefs.svn_exe_path = svnExePath;
      prefs.terminal_path = terminalPath;
      prefs.use_git_bash = useGitBash;
      return prefs ;
   }-*/;

   public native final boolean getVcsEnabled() /*-{
      return this.vcs_enabled;
   }-*/;
   
   public native final String getGitExePath() /*-{
      return this.git_exe_path;
   }-*/;
   
   public native final String getSvnExePath() /*-{
      return this.svn_exe_path;
   }-*/;
   
   public native final String getTerminalPath() /*-{
      return this.terminal_path;
   }-*/;
   
   public native final boolean getUseGitBash() /*-{
      return this.use_git_bash;
   }-*/;
   
   public native final boolean haveRsaPublicKey() /*-{
      return this.have_rsa_public_key;
   }-*/;
}
