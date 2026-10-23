// FUN_00407d40 @ 407d40 size=95

undefined4 __fastcall FUN_00407d40(int *param_1)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = 0x7e0;
  if (DAT_00857744 == 1) {
    sVar3 = 0x3e0;
  }
  if (param_1[3] == 2) {
    iVar4 = (param_1[6] * param_1[2]) / 2;
    psVar1 = (short *)(**(code **)(*param_1 + 8))();
    iVar2 = 0;
    if (0 < iVar4) {
      do {
        if (*psVar1 == sVar3) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (iVar2 < iVar4);
    }
    (**(code **)(*param_1 + 0xc))();
  }
  return 0;
}


