// FUN_00428ca0 @ 428ca0 size=129

void __fastcall FUN_00428ca0(undefined4 *param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  *param_1 = &PTR_LAB_007e3c4c;
  if ((DAT_0088f2d0 != 0) &&
     (((psVar1 = (short *)(param_1 + 1), *(int *)((int)param_1 + 6) != DAT_0088f28e ||
       (*psVar1 != DAT_0088f28c)) && (*psVar1 != -2)))) {
    puVar2 = (undefined2 *)FUN_00428fa0();
    FUN_00429410(*puVar2,(short)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10));
    uStack_6 = (undefined2)DAT_0088f28e;
    uStack_4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
    *(uint *)psVar1 = CONCAT22(uStack_6,DAT_0088f28c);
    *(undefined2 *)(param_1 + 2) = uStack_4;
  }
  return;
}


