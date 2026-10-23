// FUN_00483c60 @ 483c60 size=508

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483c60(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  fVar5 = _DAT_007e4090;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x187) != '\0') {
      fVar5 = _DAT_007e6c60;
    }
    if (iVar1 != 0) goto LAB_00483c9b;
  }
  if (*(char *)(param_1 + 0x15a) != '\0') {
    fVar5 = fVar5 + _DAT_007e68c8;
  }
LAB_00483c9b:
  if (param_3 == '\0') {
    fVar5 = fVar5 + *(float *)(param_1 + 0x100);
    fVar6 = _DAT_007e6818;
    if ((*(char *)(param_1 + 0x15f) != '\0') ||
       (fVar6 = _DAT_007e4088, *(char *)(param_1 + 0x160) != '\0')) {
      fVar5 = fVar5 + fVar6;
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
      uVar9 = 0;
      FUN_0051b230(0);
      cVar8 = FUN_004ed260(uVar9);
      if (cVar8 != '\0') {
        fVar5 = fVar5 + _DAT_007e681c;
      }
    }
    iVar1 = *(int *)(param_1 + 0x134);
    if (iVar1 == 5) {
      fVar5 = fVar5 + _DAT_007e681c;
    }
    else if (iVar1 == 3) {
      fVar5 = fVar5 + _DAT_007e685c;
    }
    else if ((iVar1 == 0xb) || (iVar1 == 9)) {
      fVar5 = fVar5 - _DAT_007e6c5c;
    }
  }
  iVar1 = *(int *)(param_1 + 0x138);
  piVar2 = *(int **)(param_2 + 4);
  do {
    if (piVar2 == (int *)0x0) {
      FUN_0046a350(param_1);
      return;
    }
    iVar3 = *piVar2;
    iVar4 = *(int *)(iVar3 + 0x6c);
    fVar6 = _DAT_007e4090;
    if (iVar4 == 0) {
LAB_00483d72:
      if (*(char *)(iVar3 + 0x15a) != '\0') {
        fVar6 = fVar6 + _DAT_007e68c8;
      }
    }
    else {
      if (*(char *)(iVar4 + 0x187) != '\0') {
        fVar6 = _DAT_007e6c60;
      }
      if (iVar4 == 0) goto LAB_00483d72;
    }
    if (param_3 == '\0') {
      fVar6 = fVar6 + *(float *)(iVar3 + 0x100);
      fVar7 = _DAT_007e6818;
      if ((*(char *)(iVar3 + 0x15f) != '\0') ||
         (fVar7 = _DAT_007e4088, *(char *)(iVar3 + 0x160) != '\0')) {
        fVar6 = fVar6 + fVar7;
      }
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
        uVar9 = 0;
        FUN_0051b230(0);
        cVar8 = FUN_004ed260(uVar9);
        if (cVar8 != '\0') {
          fVar6 = fVar6 + _DAT_007e681c;
        }
      }
      iVar4 = *(int *)(iVar3 + 0x134);
      if (iVar4 == 5) {
        fVar6 = fVar6 + _DAT_007e681c;
      }
      else if (iVar4 == 3) {
        fVar6 = fVar6 + _DAT_007e685c;
      }
      else if ((iVar4 == 0xb) || (iVar4 == 9)) {
        fVar6 = fVar6 - _DAT_007e6c5c;
      }
    }
    if (fVar6 - (float)*(int *)(iVar3 + 0x138) < fVar5 - (float)iVar1) {
      FUN_00473950(param_1,piVar2);
      return;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}


