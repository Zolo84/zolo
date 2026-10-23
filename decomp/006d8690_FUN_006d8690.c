// FUN_006d8690 @ 6d8690 size=91

undefined4 __fastcall FUN_006d8690(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2220e) + 8);
  while (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 8);
    iVar2 = ((undefined4 *)*piVar1)[2];
    FUN_00460b30(*(undefined4 *)*piVar1,1);
  }
  iVar2 = *(int *)(param_1 + 0x2220e);
  if (iVar2 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar2);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


