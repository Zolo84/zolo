// FUN_00690910 @ 690910 size=57

void __thiscall FUN_00690910(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x5c);
  if (puVar3 != (undefined4 *)0x0) {
    while( true ) {
      piVar1 = puVar3 + 2;
      piVar2 = (int *)*puVar3;
      if (*piVar2 == param_2) break;
      puVar3 = (undefined4 *)*piVar1;
      if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x58) + 0x18))(piVar2);
    FUN_00796cd8(piVar2);
  }
  return;
}


