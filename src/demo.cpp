// A simple demo for jpgReader
// Reads and writes a jpg file

#include "jpgReader.h"
#include "laz_img.h"

main()
{
  jpgReader reader = jpgReader();
  laz_img img = reader.readJPG("test.jpg");
  reader.writeJPG(img, "test_copy.jpg");
  return 0;
}
