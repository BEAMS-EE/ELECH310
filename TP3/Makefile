all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#cd Figures; ./crop.sh;cd ..
	# cd figures; make;cd ..
	# cd mesures; make;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname="elech301_tp3" elech301_tp3.tex
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname="elech301_tp3" elech301_tp3.tex


correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	# cd figures; make;cd ..
	# cd mesures; make;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname=elech301_tp3_correction "\def\correction{} \input{elech301_tp3.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname=elech301_tp3_correction "\def\correction{} \input{elech301_tp3.tex}"

clean:
	rm -f elech301_tp3_correction.pdf rm elech301_tp3.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
