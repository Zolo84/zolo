// FUN_004965e0 @ 4965e0 size=377

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004965e0(int param_1,int param_2,char param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_c;
  
  local_c = 0.0;
  iVar5 = FUN_0044c3d0(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (iVar5 != 0) {
    local_c = (float)*(int *)(iVar5 + 0x10) * *(float *)(iVar5 + 0xc);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x13c)) {
    puVar7 = (undefined4 *)(param_1 + 0x88);
    do {
      iVar6 = FUN_0044c5b0(*puVar7,puVar7[5]);
      if (iVar6 != 0) {
        local_c = (float)*(int *)(iVar6 + 0x10) * *(float *)(iVar6 + 0xc) + local_c;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x13c));
  }
  if (((param_3 != '\0') && (*(int *)(param_1 + 0x6c) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0x6c) + 0x187) != '\0')) {
    local_c = local_c + local_c;
  }
  fVar1 = *(float *)(param_1 + 0xec);
  fVar2 = *(float *)(param_1 + 0x100);
  fVar4 = (float)*(int *)(param_1 + 0x138) + _DAT_007e3374;
  iVar5 = FUN_0044c450(*(undefined4 *)(param_1 + 0x130));
  local_c = local_c * _DAT_007e543c *
            (fVar1 * _DAT_007e543c + _DAT_007e3374) *
            (fVar2 * _DAT_007e543c + _DAT_007e3374) *
            (fVar4 / ((float)iVar5 + _DAT_007e3374) + _DAT_007e3374) + local_c;
  *(float *)(param_1 + 0xe8) = local_c;
  piVar3 = *(int **)(param_2 + 4);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      FUN_0046a350(param_1);
      return;
    }
    if (*(float *)(*piVar3 + 0xe8) < local_c) break;
    piVar3 = (int *)piVar3[2];
  }
  FUN_00473950(param_1,piVar3);
  return;
}


