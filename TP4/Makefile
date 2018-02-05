all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech310_tp4_fr" "\def\french{} \input{elech310_tp4.tex}"
	pdflatex -shell-escape -jobname="elech310_tp4_fr" "\def\french{} \input{elech310_tp4.tex}"
	pdflatex -shell-escape -jobname="elech310_tp4_en" "\def\english{} \input{elech310_tp4.tex}"
	pdflatex -shell-escape -jobname="elech310_tp4_en" "\def\english{} \input{elech310_tp4.tex}"


correction: *.tex
	pdflatex -shell-escape -jobname=elech310_tp4_fr_correction "\def\correction{} \def\french{} \input{elech310_tp4.tex}"
	pdflatex -shell-escape -jobname=elech310_tp4_fr_correction "\def\correction{} \def\french{} \input{elech310_tp4.tex}"
	pdflatex -shell-escape -jobname=elech310_tp4_en_correction "\def\correction{} \def\english{} \input{elech310_tp4.tex}"
	pdflatex -shell-escape -jobname=elech310_tp4_en_correction "\def\correction{} \def\english{} \input{elech310_tp4.tex}"

clean:
	rm -f elech310_tp4_fr_correction.pdf rm elech310_tp4_fr.pdf elech310_tp4_en_correction.pdf rm elech310_tp4_en.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
