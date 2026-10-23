// FUN_0068ee00 @ 68ee00 size=67

undefined4 FUN_0068ee00(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00525720();
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_0050bca0(param_1);
  (**(code **)(*param_1 + 0x74))();
  FUN_006a9d50();
  FUN_006aa000(param_1);
  return 1;
}


