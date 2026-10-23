// FUN_007a0753 @ 7a0753 size=31

undefined4 __fastcall FUN_007a0753(int *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined2 **)param_1[7];
  if ((puVar1 != (undefined2 *)0x0) && (puVar1 < puVar1 + *(int *)param_1[0xb])) {
    return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
  }
  uVar2 = (**(code **)(*param_1 + 0x10))();
  return uVar2;
}


