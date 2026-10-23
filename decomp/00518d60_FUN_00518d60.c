// FUN_00518d60 @ 518d60 size=308

bool __thiscall FUN_00518d60(int param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  iVar2 = (int)param_2;
  if (-1 < *(int *)((int)param_2 + 0x16a)) {
    uVar6 = *(undefined4 *)((int)param_2 + 0x12);
    FUN_004e9370(*(undefined4 *)(param_1 + 0x212),uVar6);
    fVar5 = (float10)FUN_004ed6d0(uVar6);
    fVar1 = (float)fVar5;
    iVar4 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
    if (iVar4 != 0) {
      uVar6 = *(undefined4 *)((int)param_2 + 0x12);
      FUN_0051b230(uVar6);
      cVar3 = FUN_004e7940(uVar6);
      if ((cVar3 != '\0') && (param_3 == 1)) {
        param_2 = 0.0;
        fVar1 = param_2;
      }
    }
    param_2 = fVar1;
    fVar5 = (float10)FUN_005172f0(param_3);
    if ((float10)param_2 <= fVar5) {
      FUN_004e9370(*(undefined4 *)(param_1 + 0x212));
      iVar4 = FUN_004ece90();
      if (iVar4 == 0) {
        return true;
      }
      iVar4 = FUN_0051b230();
      if (*(int *)(iVar4 + 0x288) < 0x1c6) {
        iVar4 = FUN_0051b230();
        iVar4 = *(int *)(iVar4 + 0x3dc);
      }
      else {
        iVar4 = *(int *)(param_1 + 0xc);
      }
      if (iVar4 < 1) {
        return true;
      }
      if (0x1c5 < *(int *)(iVar2 + 0x288)) {
        cVar3 = FUN_004ed600(*(undefined4 *)(param_1 + 0x248),iVar4);
        return cVar3 != '\0';
      }
      iVar2 = *(int *)(iVar2 + 0x3dc);
      if (iVar2 != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x248);
        FUN_004e9370(iVar2);
        cVar3 = FUN_004ed600(uVar6,iVar4);
        return cVar3 != '\0';
      }
    }
  }
  return false;
}


