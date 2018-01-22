all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech310_tp2_fr" "\def\french{} \input{elech310_tp2.tex}"
	pdflatex -shell-escape -jobname="elech310_tp2_fr" "\def\french{} \input{elech310_tp2.tex}"
	pdflatex -shell-escape -jobname="elech310_tp2_en" "\def\english{} \input{elech310_tp2.tex}"
	pdflatex -shell-escape -jobname="elech310_tp2_en" "\def\english{} \input{elech310_tp2.tex}"


correction: *.tex
	pdflatex -shell-escape -jobname=elech310_tp2_fr_correction "\def\correction{} \def\french{} \input{elech310_tp2.tex}"
	pdflatex -shell-escape -jobname=elech310_tp2_fr_correction "\def\correction{} \def\french{} \input{elech310_tp2.tex}"
	pdflatex -shell-escape -jobname=elech310_tp2_en_correction "\def\correction{} \def\english{} \input{elech310_tp2.tex}"
	pdflatex -shell-escape -jobname=elech310_tp2_en_correction "\def\correction{} \def\english{} \input{elech310_tp2.tex}"

clean:
	rm -f elech310_tp2_fr_correction.pdf rm elech310_tp2_fr.pdf elech310_tp2_en_correction.pdf rm elech310_tp2_en.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
