all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech310_projet_cahier-des-charges_en" elech310_projet_cahier-des-charges_en.tex
	pdflatex -shell-escape -jobname="elech310_projet_cahier-des-charges_en" elech310_projet_cahier-des-charges_en.tex
	pdflatex -shell-escape -jobname="elech310_projet_cahier-des-charges_en" elech310_projet_cahier-des-charges_en.tex



correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	#cp ~/Documents/SIES2013add.bib .
	# pdflatex -shell-escape -jobname=elech310_projet_cahier-des-charges_en "\def\correction{} \input{elech310_projet_cahier-des-charges_en.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	# pdflatex -shell-escape -jobname=elech310_projet_cahier-des-charges_en "\def\correction{} \input{elech310_projet_cahier-des-charges_en.tex}"

clean:
	rm -f elech310_projet_cahier-des-charges_en.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
