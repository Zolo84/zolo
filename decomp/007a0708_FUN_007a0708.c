// FUN_007a0708 @ 7a0708 size=36

undefined2 __fastcall FUN_007a0708(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  uVar1 = *(uint *)param_1[7];
  if ((uVar1 != 0) && (uVar1 < uVar1 + *(int *)param_1[0xb] * 2)) {
    puVar3 = (undefined2 *)Gninc();
    return *puVar3;
  }
  uVar2 = (**(code **)(*param_1 + 0x14))();
  return uVar2;
}


