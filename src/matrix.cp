// Used C+ because it is more flexible than typescript or javascript

embed "cplus.System";
embed "cplus.Utils";
embed "cplus.Services.Internet.https";
embed "cplus.Services.Internet.https.content";
embed "RunUVSH" from internet.properties(Start:"nohttpswithslashx2") COM1 = "cplus.dev/modules/community/ggdev0/RunUVSH";

object sys = Device.CheckSys();

if sys == "win32" {
  internetservice win32Build = goto("https://github.com/adaves1/matrix.js/blob/master/src/Win32/build.uvsh");
  internetfilecontent win32BuildFile = runuvshscript("https://
}
