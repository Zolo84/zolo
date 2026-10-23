// FUN_00669c30 @ 669c30 size=251

float10 __fastcall FUN_00669c30(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_c;
  int local_8;
  float local_4;
  
  local_c = 0.0;
  iVar3 = FUN_00428ee0(param_1 + 4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -0x14;
  }
  piVar4 = *(int **)(iVar3 + 0x26);
  if (piVar4 == (int *)0x0) {
    return (float10)0.0;
  }
  do {
    piVar2 = (int *)*piVar4;
    iVar3 = FUN_00500d50();
    if (iVar3 != 0) {
      local_8 = *(int *)(iVar3 + 0x1e);
      local_4 = *(float *)(iVar3 + 0x1a);
      if ((float)piVar2[0xbc] <= (float)piVar2[0xbd]) {
        fVar1 = (float)piVar2[0xbc];
      }
      else {
        fVar1 = (float)piVar2[0xbd];
      }
      if (fVar1 < *(float *)(iVar3 + 0x1e)) {
        if ((float)piVar2[0xbc] <= (float)piVar2[0xbd]) {
          local_8 = piVar2[0xbc];
        }
        else {
          local_8 = piVar2[0xbd];
        }
      }
      fVar5 = (float10)(**(code **)(*piVar2 + 0x28))();
      if (fVar5 < (float10)*(float *)(iVar3 + 0x1a)) {
        fVar5 = (float10)(**(code **)(*piVar2 + 0x28))();
        local_4 = (float)fVar5;
      }
      fVar5 = (float10)(**(code **)(**(int **)(iVar3 + 4) + 0x1c))(piVar2,local_8,local_4);
      local_c = (float)(fVar5 + (float10)local_c);
    }
    piVar4 = (int *)piVar4[2];
  } while (piVar4 != (int *)0x0);
  return (float10)local_c;
}


