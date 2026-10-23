// FUN_0052b320 @ 52b320 size=55

undefined4 __thiscall FUN_0052b320(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 1;
    }
    puVar1 = (undefined4 *)puVar2[2];
    uVar4 = param_2;
    (**(code **)(*(int *)*puVar2 + 0x14))(param_2);
    cVar3 = FUN_00517740(uVar4);
    puVar2 = puVar1;
  } while (cVar3 != '\0');
  return 0;
}


