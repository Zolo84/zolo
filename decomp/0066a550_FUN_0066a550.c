// FUN_0066a550 @ 66a550 size=36

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0066a550(int param_1,int *param_2)

{
  float fVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  float10 fVar5;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  float fStack_8;
  
  uStack_10 = (undefined2)unaff_EDI;
  uStack_e = (undefined2)((uint)unaff_EDI >> 0x10);
  uStack_14 = 0xa55f;
  uStack_12 = 0x66;
  iVar3 = (**(code **)(*(int *)(param_1 + 8) + 4))();
  if (iVar3 < DAT_00dc1614) {
    uStack_14 = (undefined2)unaff_EBX;
    uStack_12 = (undefined2)((uint)unaff_EBX >> 0x10);
    iStack_c = *(int *)(param_1 + 0x1e);
    fStack_8 = *(float *)(param_1 + 0x1a);
    if ((float)param_2[0xbc] <= (float)param_2[0xbd]) {
      fVar1 = (float)param_2[0xbc];
    }
    else {
      fVar1 = (float)param_2[0xbd];
    }
    if (fVar1 < *(float *)(param_1 + 0x1e)) {
      if ((float)param_2[0xbc] <= (float)param_2[0xbd]) {
        iStack_c = param_2[0xbc];
      }
      else {
        iStack_c = param_2[0xbd];
      }
    }
    fVar5 = (float10)(**(code **)(*param_2 + 0x28))();
    if (fVar5 < (float10)*(float *)(param_1 + 0x1a)) {
      fVar5 = (float10)(**(code **)(*param_2 + 0x28))();
      fStack_8 = (float)fVar5;
    }
    fVar1 = fStack_8;
    iVar3 = iStack_c;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x1c))(param_2,iStack_c,fStack_8);
    for (puVar2 = *(undefined2 **)(param_1 + 0xc); fStack_8 = (float)fVar5,
        puVar2 != (undefined2 *)0x0; puVar2 = *(undefined2 **)(puVar2 + 5)) {
      uStack_14 = *puVar2;
      uStack_12 = (undefined2)*(undefined4 *)(puVar2 + 1);
      uStack_10 = (undefined2)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10);
      iVar4 = FUN_00428ee0(&uStack_14);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + -8;
      }
      fVar5 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x1c))(iVar4,iVar3,fVar1);
      fVar5 = fVar5 + (float10)fStack_8;
    }
    return (float10)fStack_8;
  }
  return (float10)_DAT_007f0c34;
}


