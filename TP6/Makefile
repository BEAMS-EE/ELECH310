all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech310_tp6_fr" "\def\french{} \input{elech310_tp6.tex}"
	pdflatex -shell-escape -jobname="elech310_tp6_fr" "\def\french{} \input{elech310_tp6.tex}"
	pdflatex -shell-escape -jobname="elech310_tp6_en" "\def\english{} \input{elech310_tp6.tex}"
	pdflatex -shell-escape -jobname="elech310_tp6_en" "\def\english{} \input{elech310_tp6.tex}"


correction: *.tex
	pdflatex -shell-escape -jobname=elech310_tp6_fr_correction "\def\correction{} \def\french{} \input{elech310_tp6.tex}"
	pdflatex -shell-escape -jobname=elech310_tp6_fr_correction "\def\correction{} \def\french{} \input{elech310_tp6.tex}"
	pdflatex -shell-escape -jobname=elech310_tp6_en_correction "\def\correction{} \def\english{} \input{elech310_tp6.tex}"
	pdflatex -shell-escape -jobname=elech310_tp6_en_correction "\def\correction{} \def\english{} \input{elech310_tp6.tex}"

clean:
	rm -f elech310_tp6_fr_correction.pdf rm elech310_tp6_fr.pdf elech310_tp6_en_correction.pdf rm elech310_tp6_en.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
