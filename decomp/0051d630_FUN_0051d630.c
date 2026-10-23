// FUN_0051d630 @ 51d630 size=305

void __fastcall FUN_0051d630(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_4;
  
  iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(iVar3 + 0x3d4) != 0) {
    iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0xc));
    if (*(int *)(iVar3 + 0x3d4) != *(int *)(param_1 + 0x248)) {
      iVar3 = (&DAT_0089cad8)[*(int *)(param_1 + 0x146)];
      if ((&DAT_0089cad8)[*(int *)(param_1 + 0x146)] == 0) {
        iVar3 = *(int *)(param_1 + 0x248);
      }
      uVar1 = *(undefined4 *)(iVar3 + 6);
      FUN_004e9370(*(undefined4 *)(param_1 + 0xc));
      cVar2 = FUN_0044b300(uVar1);
      if (cVar2 == '\0') goto LAB_0051d6a4;
    }
    *(undefined4 *)(param_1 + 0x142) = *(undefined4 *)(param_1 + 0xc);
  }
LAB_0051d6a4:
  if (*(int *)(param_1 + 0x142) == 0) {
    iVar3 = FUN_0044e1b0();
    iVar5 = 0;
    local_4 = 1000000;
    if (0 < DAT_00877690) {
      do {
        iVar4 = FUN_004e9370(iVar5);
        if (*(int *)(iVar4 + 0x3d4) != 0) {
          if (*(int *)(iVar4 + 0x3d4) != *(int *)(param_1 + 0x248)) {
            iVar4 = (&DAT_0089cad8)[*(int *)(param_1 + 0x146)];
            if ((&DAT_0089cad8)[*(int *)(param_1 + 0x146)] == 0) {
              iVar4 = *(int *)(param_1 + 0x248);
            }
            cVar2 = FUN_0044b300(*(undefined4 *)(iVar4 + 6));
            if (cVar2 == '\0') goto LAB_0051d74c;
          }
          fVar6 = (float10)FUN_0044a9c0(*(undefined4 *)(param_1 + 0xc),iVar5);
          if (fVar6 < (float10)local_4) {
            local_4 = __ftol();
            iVar3 = iVar5;
          }
        }
LAB_0051d74c:
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_00877690);
    }
    *(int *)(param_1 + 0x142) = iVar3;
  }
  return;
}


