all:
	lualatex main.tex
	biber main
	lualatex main.tex
	lualatex main.tex
	rm -f *.log *.bak *.aux *.bbl *.blg *.idx *.toc *.out *~ *.synctex.gz *.bcf *.run.xml *.sta
	cp main.pdf thesis.pdf

clean:
	rm -f *.log *.bak *.aux *.bbl *.blg *.idx *.toc *.out *~ *.synctex.gz *.bcf *.run.xml *.sta main.pdf

clean-all:
	rm -f *.dvi *.log *.bak *.aux *.bbl *.blg *.idx *.ps *.eps *.pdf *.toc *.out *~ *.synctex.gz *.bcf *.run.xml main.pdf thesis.pdf

