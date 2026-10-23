// FUN_00436130 @ 436130 size=99

void __fastcall FUN_00436130(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  for (puVar3 = *(undefined4 **)(param_1 + 4); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)puVar3[2]) {
    (**(code **)(*(int *)*puVar3 + 0x18))();
  }
  iVar1 = __ftol();
  if ((0 < iVar1) && (puVar3 = *(undefined4 **)(param_1 + 4), puVar3 != (undefined4 *)0x0)) {
    while( true ) {
      iVar2 = (**(code **)(*(int *)*puVar3 + 0x18))();
      iVar1 = iVar1 - iVar2;
      if (iVar1 < 0) break;
      puVar3 = (undefined4 *)puVar3[2];
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
    }
    *(undefined4 **)(param_1 + 0x3e) = puVar3;
  }
  return;
}


