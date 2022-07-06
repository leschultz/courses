# Generate summary table.
results.txt : isles.dat abyss.dat last.dat
	python3 testzipf.py $^ > $@

# Count words.
.PHONY : dats
dats : isles.dat abyss.dat last.dat

isles.dat : books/isles.txt
	python3 countwords.py $< $@

abyss.dat : books/abyss.txt
	python3 countwords.py $< $@

last.dat : books/last.txt
	python3 countwords.py $< $@

.PHONY : clean
clean :
		rm -rf *.dat
