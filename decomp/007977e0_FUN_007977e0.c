// FUN_007977e0 @ 7977e0 size=175

void __thiscall
FUN_007977e0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_3;
  local_c = param_5;
  local_8 = param_6;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_007a9c9d(*(int *)(param_1 + 0x50),&local_c);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        iVar2 = FUN_007a8307(*(undefined4 *)(param_1 + 0x50),iVar2,1);
        if (iVar2 != 0) goto LAB_00797873;
      }
      iVar2 = FUN_007a9c7b(*(undefined4 *)(param_1 + 0x50),&local_c);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x44) != 0) {
          *(undefined4 *)(param_1 + 0x40) = param_7;
          FUN_00742780(0,DAT_007f33d8);
        }
        param_3 = 0;
        param_5 = local_c;
        param_6 = local_8;
        param_7 = *(undefined4 *)(param_1 + 0x40);
        puVar3 = &param_3;
        goto LAB_00797882;
      }
    }
  }
LAB_00797873:
  puVar3 = (undefined4 *)FUN_007979fe(0xffffffff);
LAB_00797882:
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


