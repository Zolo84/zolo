// FUN_00798d1b @ 798d1b size=61

void FUN_00798d1b(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_007fffb4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00674910(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


