package tree_sitter_scenario_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_scenario "github.com/tree-sitter/tree-sitter-scenario/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_scenario.Language())
	if language == nil {
		t.Errorf("Error loading Scenario grammar")
	}
}
