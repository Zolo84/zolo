// FUN_00669940 @ 669940 size=272

void __fastcall FUN_00669940(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float local_8;
  float local_4;
  
  if ((((*(char *)(param_1 + 0xf) != *(char *)(DAT_00893530 + 0x15)) ||
       (*(char *)(param_1 + 0x10) != *(char *)(DAT_00893530 + 0x16))) ||
      (*(short *)(param_1 + 0x12) != *(short *)(DAT_00893530 + 0x18))) ||
     (*(char *)(param_1 + 0xe) != *(char *)(DAT_00893530 + 0x14))) {
    local_8 = 999999.9;
    local_4 = 999999.9;
    iVar4 = FUN_00428ee0(param_1 + 4);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + -0x14;
    }
    for (piVar2 = *(int **)(iVar4 + 0x26); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      piVar3 = (int *)*piVar2;
      if ((float)piVar3[0xbc] <= (float)piVar3[0xbd]) {
        fVar1 = (float)piVar3[0xbc];
      }
      else {
        fVar1 = (float)piVar3[0xbd];
      }
      if (fVar1 < local_8) {
        if ((float)piVar3[0xbc] <= (float)piVar3[0xbd]) {
          local_8 = (float)piVar3[0xbc];
        }
        else {
          local_8 = (float)piVar3[0xbd];
        }
      }
      fVar5 = (float10)(**(code **)(*piVar3 + 0x28))();
      if (fVar5 < (float10)local_4) {
        fVar5 = (float10)(**(code **)(*piVar3 + 0x28))();
        local_4 = (float)fVar5;
      }
    }
    *(float *)(param_1 + 0x14) = local_8;
    *(float *)(param_1 + 0x18) = local_4;
    iVar4 = DAT_00893530;
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(iVar4 + 0x18);
  }
  return;
}


