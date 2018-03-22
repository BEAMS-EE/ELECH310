all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#pdflatex -shell-escape -jobname="elech310_labo2" elech310_labo2.tex
	#pdflatex -shell-escape -jobname="elech310_labo2" elech310_labo2.tex
	
	pdflatex -shell-escape -jobname="elech310_labo2_en" elech310_labo2_en.tex
	pdflatex -shell-escape -jobname="elech310_labo2_en" elech310_labo2_en.tex


correction: *.tex
	#pdflatex -shell-escape -jobname=elech310_labo2_correction "\def\correction{} \input{elech310_labo2.tex}"
	#pdflatex -shell-escape -jobname=elech310_labo2_correction "\def\correction{} \input{elech310_labo2.tex}"
	pdflatex -shell-escape -jobname=elech310_labo2_correction_en "\def\correction{} \input{elech310_labo2_en.tex}"
	pdflatex -shell-escape -jobname=elech310_labo2_correction_en "\def\correction{} \input{elech310_labo2_en.tex}"

clean:
	rm -f elech310_labo2_correction.pdf rm elech310_labo2.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
