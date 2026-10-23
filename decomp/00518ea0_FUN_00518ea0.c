// FUN_00518ea0 @ 518ea0 size=323

void __fastcall FUN_00518ea0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_4;
  
  FUN_004e9370(*(undefined4 *)((int)param_1 + 0x212));
  iVar2 = FUN_004ece90();
  if (iVar2 != 0) {
    uVar8 = *(undefined4 *)(param_1[0x92] + 6);
    FUN_004e9370(*(undefined4 *)((int)param_1 + 0x212));
    iVar2 = FUN_004ece90();
    FUN_004e9370(*(undefined4 *)(iVar2 + 0xc));
    cVar1 = FUN_0044b280(uVar8);
    if (cVar1 == '\0') {
      FUN_004e9370(*(undefined4 *)((int)param_1 + 0x212));
      iVar2 = FUN_004ece90();
      iVar2 = FUN_004e9370(*(undefined4 *)(iVar2 + 0xc));
      if (*(int *)(iVar2 + 0x3dc) != 0) {
        return;
      }
    }
  }
  iVar2 = 0;
  iVar6 = 0;
  local_4 = 99999.0;
  if (0 < DAT_00877690) {
    do {
      iVar3 = FUN_004e9370(iVar6);
      iVar4 = FUN_004ece90();
      if (((iVar4 != 0) && (*(int *)(iVar3 + 0x3dc) != 0)) &&
         (cVar1 = FUN_004a3020(iVar3,0), cVar1 != '\0')) {
        iVar5 = FUN_004ece90();
        iVar4 = param_1[3];
        if (*(int *)(iVar5 + 0xc) == iVar4) {
          local_4 = 0.0;
          iVar2 = iVar4;
        }
        else {
          uVar8 = *(undefined4 *)(iVar3 + 0x12);
          FUN_004e9370(iVar4,uVar8);
          fVar7 = (float10)FUN_004ed6d0(uVar8);
          if (fVar7 < (float10)local_4) {
            iVar2 = *(int *)(iVar3 + 0x12);
            local_4 = (float)fVar7;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_00877690);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x98))(iVar2);
    }
  }
  return;
}


