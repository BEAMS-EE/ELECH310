all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#pdflatex -shell-escape -jobname="elech310_labo1" elech310_labo1.tex
	#pdflatex -shell-escape -jobname="elech310_labo1" elech310_labo1.tex
	
	pdflatex -shell-escape -jobname="elech310_labo1_en" elech310_labo1_en.tex
	pdflatex -shell-escape -jobname="elech310_labo1_en" elech310_labo1_en.tex


correction: *.tex
	#pdflatex -shell-escape -jobname=elech310_labo1_correction "\def\correction{} \input{elech310_labo1.tex}"
	#pdflatex -shell-escape -jobname=elech310_labo1_correction "\def\correction{} \input{elech310_labo1.tex}"
	
	pdflatex -shell-escape -jobname="elech310_labo1_correction_en" "\def\correction{} \input{elech310_labo1_en.tex}"
	pdflatex -shell-escape -jobname="elech310_labo1_correction_en" "\def\correction{} \input{elech310_labo1_en.tex}"

clean:
	rm -f elech310_labo1_correction.pdf rm elech310_labo1.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
