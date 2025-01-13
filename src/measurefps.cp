embed "cplus.System";

function fps(*FPS) {
  for i in Display.TraceTest(1, Display.FPSTOTAL()) {
    float FPS = 0;
    Byte.senddata(1);
    Byte.getdata(1);
    FPS += 1;
  }
}

