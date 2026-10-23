// FUN_004d1160 @ 4d1160 size=98

void __fastcall FUN_004d1160(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 local_8;
  undefined4 local_6;
  
  *(undefined4 *)(param_1 + 0x2e) = 0;
  puVar2 = *(undefined2 **)(param_1 + 0x20);
  while (puVar2 != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(puVar2 + 5);
    local_8 = *puVar2;
    local_6 = *(undefined4 *)(puVar2 + 1);
    iVar3 = FUN_00428ee0(&local_8);
    puVar2 = puVar1;
    if ((iVar3 != 0) && (iVar3 != 0x14)) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0xe) + 4))();
      *(float *)(param_1 + 0x2e) = (float)iVar3 + *(float *)(param_1 + 0x2e);
    }
  }
  return;
}


