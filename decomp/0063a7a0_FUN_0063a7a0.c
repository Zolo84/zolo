// FUN_0063a7a0 @ 63a7a0 size=68

undefined4 __thiscall FUN_0063a7a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 0x32);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)puVar3[2];
    piVar2 = (int *)*puVar3;
    cVar4 = (**(code **)(*piVar2 + 0x20))(param_2,param_3);
    puVar3 = puVar1;
  } while (cVar4 == '\0');
  uVar5 = (**(code **)(*piVar2 + 0x48))(param_2,param_3);
  return uVar5;
}


