// FUN_00481890 @ 481890 size=44

undefined4 FUN_00481890(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00428ee0(*(int *)(param_1 + 4) + 0x12);
  if ((iVar1 != 0) && (iVar1 != 8)) {
    *(int *)(iVar1 + 0x138ae) = *(int *)(iVar1 + 0x138ae) + 1;
  }
  return 3;
}


