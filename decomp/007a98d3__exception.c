// ~exception @ 7a98d3 size=22

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_008005f8;
  if (*(int *)(this + 8) != 0) {
    FUN_00796cd8(*(undefined4 *)(this + 4));
  }
  return;
}


