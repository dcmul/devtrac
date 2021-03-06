<?php
// $Id: environment_context_condition.inc,v 1.1.2.1 2010/12/15 16:24:26 grayside Exp $

/**
 * Defines a context condition for the current environment state.
 */
class environment_context_condition extends context_condition {
  /**
   * Override for context_condition::condition_values().
   */
  function condition_values() {
    return _environment_options();
  }

  /**
   * Override for context_condition::execute().
   */
  function execute($environment) {
    if ($this->condition_used()) {
      foreach($this->get_contexts($environment) as $context) {
        $this->condition_met($context, $environment);
      }
    }
  }
}
