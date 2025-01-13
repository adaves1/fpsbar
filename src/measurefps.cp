embed "cplus.System";

for i in Display.TraceTest(1, Display.FPSTOTAL()) {
  float fps = 0;
  Byte.senddata(1);
  Byte.getdata(1);
  fps += 1;

