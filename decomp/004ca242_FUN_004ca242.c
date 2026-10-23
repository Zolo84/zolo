// FUN_004ca242 @ 4ca242 size=128

undefined4 __thiscall FUN_004ca242(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(param_1 + 0x3e);
  do {
    if (local_8 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)local_8[2];
    piVar2 = (int *)*local_8;
    local_8 = puVar1;
  } while ((*(int *)(*piVar2 + 0x4c) != 0) || (iVar3 = FUN_004c9f81(), iVar3 != param_2));
  return 1;
}


