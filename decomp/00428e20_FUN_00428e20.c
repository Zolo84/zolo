// FUN_00428e20 @ 428e20 size=132

uint __fastcall FUN_00428e20(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uVar4 = 0;
  if (DAT_0088f2d0 != 0) {
    uVar4 = *(uint *)(param_1 + 6);
    psVar1 = (short *)(param_1 + 4);
    if (((uVar4 != DAT_0088f28e) || (*psVar1 != DAT_0088f28c)) && (*psVar1 != -2)) {
      puVar3 = (undefined2 *)FUN_00428fa0();
      FUN_00429410(*puVar3,(short)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10));
      uStack_6 = (undefined2)DAT_0088f28e;
      uStack_4 = (undefined2)(DAT_0088f28e >> 0x10);
      uVar2 = CONCAT22(uStack_6,DAT_0088f28c);
      *(undefined4 *)psVar1 = uVar2;
      *(undefined2 *)(param_1 + 8) = uStack_4;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}


