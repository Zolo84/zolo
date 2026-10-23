// operator= @ 7a98b4 size=31

/* Library Function - Single Match
    public: class exception & __thiscall exception::operator=(class exception const &)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

exception * __thiscall exception::operator=(exception *this,exception *param_1)

{
  if (this != param_1) {
    ~exception(this);
    FUN_007a986a(param_1);
  }
  return this;
}


