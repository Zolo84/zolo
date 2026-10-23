// FUN_004f0af0 @ 4f0af0 size=300

void __fastcall FUN_004f0af0(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  FUN_004e9370(*(undefined4 *)((int)param_1 + 0x212));
  iVar3 = FUN_004ece80();
  if (iVar3 != 0) {
    FUN_004e9370(*(undefined4 *)((int)param_1 + 0x212));
    iVar3 = FUN_004ece80();
    iVar3 = FUN_004e9370(*(undefined4 *)(iVar3 + 0xc));
    if (*(int *)(iVar3 + 0x3d8) != 0) {
      uVar1 = *(undefined4 *)(param_1[0x92] + 6);
      FUN_004e9370(*(undefined4 *)((int)param_1 + 0x212));
      iVar3 = FUN_004ece80();
      FUN_004e9370(*(undefined4 *)(iVar3 + 0xc));
      cVar2 = FUN_0044b280(uVar1);
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  iVar3 = 0;
  iVar7 = 99999;
  local_4 = 0;
  if (0 < DAT_00877690) {
    do {
      iVar4 = FUN_004e9370(local_4);
      iVar5 = FUN_004ece80();
      if ((iVar5 != 0) && (cVar2 = FUN_004a3020(iVar4,0), cVar2 != '\0')) {
        iVar6 = FUN_004ece80();
        iVar5 = param_1[3];
        if (*(int *)(iVar6 + 0xc) == iVar5) {
          iVar7 = 0;
          iVar3 = iVar5;
        }
        else {
          FUN_0044a9c0(iVar5,*(undefined4 *)(iVar4 + 0x12));
          iVar5 = __ftol();
          if (iVar5 < iVar7) {
            iVar3 = *(int *)(iVar4 + 0x12);
            iVar7 = iVar5;
          }
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < DAT_00877690);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x98))(iVar3);
    }
  }
  return;
}


