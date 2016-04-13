nullp0inter's presentation on buffer overflows
==============================================

About
------
This repository contains all of the files used in my presentation on buffer overflows for the club. You can use or modify the source code as you see fit, I encourage you practice as you need to understand this to do cooler harder stuff such as ROP chains.
All of my source code is in here as it existed at the time of the presentation, if I make any changes I will add the new source and binary with "_updated" in the name. The binaries are all compiled using the included script so feel free to use that. As mentioned in the slides, it is import to compile them with the `-fno-stack-protector` compiler flag otherwise it gets a lot harder as you have to beat the CANARY security.

Recommended Tools
-----------------
I would highly advise you grab peda for gdb and radare2. They can be quite intimidating to use and/or look at but they provide loads of great information about your binaries.

Recommended Research
--------------------
Nobody (sane) ever said that binary was easy, it isn't. So you are heavily encouraged to read up on a lot of information as you can. In addition to the resources mentioned in the powerpoint I highly recommend that you go through the slides of Saumil Shah on slideshare (just google it because links are a bitch in markdown) as they contain FANTASTIC information and better visuals of what is going on than I provided. I have personally gone through all of his slide decks and they are all fantastic.
