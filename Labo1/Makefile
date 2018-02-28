all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#cd Figures; ./crop.sh;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname="elech310_labo1" elech310_labo1.tex
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname="elech310_labo1" elech310_labo1.tex


correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname=elech310_labo1_correction "\def\correction{} \input{elech310_labo1.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname=elech310_labo1_correction "\def\correction{} \input{elech310_labo1.tex}"

clean:
	rm -f elech310_labo1_correction.pdf rm elech310_labo1.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
