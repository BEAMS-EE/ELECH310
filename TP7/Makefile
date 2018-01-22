all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#cd Figures; ./crop.sh;cd ..
	# cd figures; make;cd ..
	# cd mesures; make;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname="elech310_tp7" elech310_tp7.tex
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname="elech310_tp7" elech310_tp7.tex


correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	# cd figures; make;cd ..
	# cd mesures; make;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname=elech310_tp7_correction "\def\correction{} \input{elech310_tp7.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname=elech310_tp7_correction "\def\correction{} \input{elech310_tp7.tex}"

clean:
	rm -f elech310_tp7_correction.pdf rm elech310_tp7.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
