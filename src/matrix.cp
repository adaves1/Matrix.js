// Used C+ because it is more flexible than typescript or javascript

embed "cplus.System";
embed "cplus.Utils";
embed "cplus.Services.Windows.Task";

if (%SYS == "win32") {
  Task32(
    "matrix.js",
    "NULL",
    "0",
    "Anthony Daves",
    "1.0.2501.17"
  );
}
else if (%SYS == "win64") {
  Task64(
    "matrix.js",
    "NULL",
  )
}

printf("matrix.js Copyright 2025 Anthony Daves\n\n");

Input("matrix> ") >> string *cmd;

*cmd = CMD;

string a = Arguments.Parse(CMD);

if (a[0] == "run") {
  if (a[1] == "--compile-js") {
    compilejs(a[2]);
  }
  else if (a[1] == "--nm") {
    interpret(a[2]);
  }
}
else if (a[0] == "exit") {
  Program.cur.exit(0);
}
