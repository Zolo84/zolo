// FUN_004ec380 @ 4ec380 size=294

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ec380(int param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  float10 fVar5;
  char local_14;
  char cStack_13;
  char cStack_12;
  undefined1 uStack_11;
  short local_10;
  int local_8;
  
  local_10 = param_3;
  local_14 = (char)param_2;
  cVar2 = local_14;
  uStack_11 = (undefined1)((uint)param_2 >> 0x18);
  _local_14 = CONCAT12(2,CONCAT11(0x13,local_14));
  cVar3 = FUN_0042ddd0(&local_14);
  if (cVar3 == '\0') {
    local_10 = param_3 + -1;
  }
  local_8 = (((((int)param_3 - (int)local_10) * 0xc - (int)cStack_12) + (int)param_2._2_1_) * 0x1e -
            (int)cStack_13) + (int)(char)((uint)param_2 >> 8);
  if (local_8 < 0x10f) {
    if (0x5a < local_8) {
      local_8 = 0xb4 - local_8;
    }
  }
  else {
    local_8 = local_8 + -0x168;
  }
  bVar4 = local_8 < 0;
  if (bVar4) {
    local_8 = -local_8;
  }
  fVar5 = (float10)fsin(((float10)((int)cVar2 << 1) * (float10)_DAT_007e8130 -
                        (float10)_DAT_007e3408) +
                        (float10)*(int *)(param_1 + 0x3fa) * (float10)_DAT_007e8128);
  fVar5 = ((float10)_DAT_007e8138 - (float10)local_8 * (float10)_DAT_007e813c) * fVar5;
  if (!bVar4) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3fe) >> 8),
                    (int)ROUND((float)((float10)_DAT_007e8120 - fVar5)) <= *(int *)(param_1 + 0x3fe)
                   );
  }
  iVar1 = (int)ROUND((float)(fVar5 + (float10)_DAT_007e8120));
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_1 + 0x3fe) < iVar1);
}


