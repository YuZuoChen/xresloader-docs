# Minimal makefile for Sphinx documentation
#

# You can set these variables from the command line.
SPHINXOPTS    =
SPHINXBUILD   = sphinx-build
SPHINXPROJ    = xresloader-document
SOURCEDIR     = source
BUILDDIR      = build

# Put it first so that "make" without argument is like "make help".
help:
	@$(SPHINXBUILD) -M help "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)

.PHONY: help Makefile

# COPY_FILES = $(SOURCEDIR)/LICENSE.txt $(SOURCEDIR)/LICENSE.md
# 
# all: $(COPY_FILES)
# 
# $(SOURCEDIR)/LICENSE.txt: LICENSE.txt
# $(SOURCEDIR)/LICENSE.md: LICENSE.md
# 
# $(SOURCEDIR)/%:
#     cp -f $< $@

# Catch-all target: route all unknown targets to Sphinx using the new
# "make mode" option.  $(O) is meant as a shortcut for $(SPHINXOPTS).
%: Makefile # COPY_FILES
	@$(SPHINXBUILD) -M $@ "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)