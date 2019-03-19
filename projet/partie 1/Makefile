all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech310_projet_partie1_en" elech310_projet_partie1_en.tex
	pdflatex -shell-escape -jobname="elech310_projet_partie1_en" elech310_projet_partie1_en.tex


correction: *.tex
	# pdflatex -shell-escape -jobname=elech310_projet_cahier-des-charges "\def\correction{} \input{elech310_projet_cahier-des-charges.tex}"
	# pdflatex -shell-escape -jobname=elech310_projet_cahier-des-charges "\def\correction{} \input{elech310_projet_cahier-des-charges.tex}"

clean:
	rm -f elech310_projet_partie1_en.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
