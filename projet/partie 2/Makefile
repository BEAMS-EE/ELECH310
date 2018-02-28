all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#cd Figures; ./crop.sh;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname="elech310_projet_partie2" elech310_projet_partie2.tex
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname="elech310_projet_partie2" elech310_projet_partie2.tex


correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	#cp ~/Documents/SIES2013add.bib .
	# pdflatex -shell-escape -jobname=elech310_projet_cahier-des-charges "\def\correction{} \input{elech310_projet_cahier-des-charges.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	# pdflatex -shell-escape -jobname=elech310_projet_cahier-des-charges "\def\correction{} \input{elech310_projet_cahier-des-charges.tex}"

clean:
	rm -f elech310_projet_partie2.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
