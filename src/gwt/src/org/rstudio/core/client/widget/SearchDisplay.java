package org.rstudio.core.client.widget;

import org.rstudio.core.client.events.HasSelectionCommitHandlers;

import com.google.gwt.event.logical.shared.HasValueChangeHandlers;
import com.google.gwt.user.client.ui.HasText;

public interface SearchDisplay extends HasValueChangeHandlers<String>,
                               HasSelectionCommitHandlers<String>,
                               HasText
{
}