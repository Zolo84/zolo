// FUN_00565aa0 @ 565aa0 size=41

void FUN_00565aa0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0042e8c0();
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 2) = *puVar2;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar2 + 1);
  (**(code **)(*param_1 + 0x1c))();
  return;
}


