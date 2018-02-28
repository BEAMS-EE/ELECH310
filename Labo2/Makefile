all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#cd Figures; ./crop.sh;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname="elech310_labo2" elech310_labo2.tex
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname="elech310_labo2" elech310_labo2.tex


correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname=elech310_labo2_correction "\def\correction{} \input{elech310_labo2.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname=elech310_labo2_correction "\def\correction{} \input{elech310_labo2.tex}"

clean:
	rm -f elech310_labo2_correction.pdf rm elech310_labo2.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
