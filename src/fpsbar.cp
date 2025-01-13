embed "cplus.System";
embed "cplus.Design.InlineCSS";

embed "abstract.cp", "measurefps.cp";

// Since abstract.cp is used, the location of the bar will be set

float fps;

fps(fps);

printf(fps) : main;

inlinecss css = File.content("https://github.com/adaves1/fpsbar/tree/master/src/TEMPLATES/temp0.css", "HTTPSERVER");
css.main.-webkit-text.add(fps)



