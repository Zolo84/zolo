// FUN_00516d10 @ 516d10 size=36

undefined4 __fastcall FUN_00516d10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x26);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)puVar2[2];
    cVar3 = (**(code **)(*(int *)*puVar2 + 0x14))();
    puVar2 = puVar1;
  } while (cVar3 == '\0');
  return 1;
}


