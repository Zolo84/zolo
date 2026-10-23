// FUN_0072a1e0 @ 72a1e0 size=38

undefined4 __thiscall FUN_0072a1e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1272);
  iVar2 = 0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (iVar2 == param_2) break;
    puVar1 = (undefined4 *)puVar1[2];
    iVar2 = iVar2 + 1;
  }
  return *puVar1;
}


