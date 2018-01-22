all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech310_tp1_fr" "\def\french{} \input{elech310_tp1.tex}"
	pdflatex -shell-escape -jobname="elech310_tp1_fr" "\def\french{} \input{elech310_tp1.tex}"
	pdflatex -shell-escape -jobname="elech310_tp1_en" "\def\english{} \input{elech310_tp1.tex}"
	pdflatex -shell-escape -jobname="elech310_tp1_en" "\def\english{} \input{elech310_tp1.tex}"


correction: *.tex
	pdflatex -shell-escape -jobname=elech310_tp1_fr_correction "\def\correction{} \def\french{} \input{elech310_tp1.tex}"
	pdflatex -shell-escape -jobname=elech310_tp1_fr_correction "\def\correction{} \def\french{} \input{elech310_tp1.tex}"
	pdflatex -shell-escape -jobname=elech310_tp1_en_correction "\def\correction{} \def\english{} \input{elech310_tp1.tex}"
	pdflatex -shell-escape -jobname=elech310_tp1_en_correction "\def\correction{} \def\english{} \input{elech310_tp1.tex}"

clean:
	rm -f elech310_tp1_fr_correction.pdf rm elech310_tp1_fr.pdf elech310_tp1_en_correction.pdf rm elech310_tp1_en.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
