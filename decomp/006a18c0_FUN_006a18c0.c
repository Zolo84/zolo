// FUN_006a18c0 @ 6a18c0 size=144

undefined4 __fastcall FUN_006a18c0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float local_8;
  
  piVar7 = *(int **)(param_1 + 200);
  iVar6 = 0;
  local_8 = -10000.0;
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      iVar2 = *piVar7;
      iVar4 = FUN_00516cc0();
      if ((0 < iVar4) && (cVar3 = (**(code **)(*(int *)(iVar2 + 0x22e) + 8))(), cVar3 != '\0')) {
        iVar4 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))();
        iVar5 = FUN_00516cc0();
        if (local_8 < (float)(iVar5 / iVar4)) {
          iVar6 = iVar2;
          local_8 = (float)(iVar5 / iVar4);
        }
      }
      piVar7 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (iVar6 != 0) {
      return *(undefined4 *)(iVar6 + 0xc);
    }
  }
  return 0;
}


