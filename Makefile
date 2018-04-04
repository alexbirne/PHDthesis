all:
	lualatex main.tex
	biber main
	lualatex main.tex
	lualatex main.tex
	rm -f *.log *.bak *.aux *.bbl *.blg *.idx *.toc *.out *~ *.synctex.gz *.bcf *.run.xml *.sta

clean:
	rm -f *.log *.bak *.aux *.bbl *.blg *.idx *.toc *.out *~ *.synctex.gz *.bcf *.run.xml *.sta

clean-all:
	rm -f *.dvi *.log *.bak *.aux *.bbl *.blg *.idx *.ps *.eps *.pdf *.toc *.out *~ *.synctex.gz *.bcf *.run.xml

