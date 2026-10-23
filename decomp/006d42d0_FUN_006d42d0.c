// FUN_006d42d0 @ 6d42d0 size=65

undefined4 __thiscall FUN_006d42d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1a);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)puVar3[1];
    piVar2 = (int *)*puVar3;
    cVar4 = FUN_00442250(*param_2,param_2[1]);
    puVar3 = puVar1;
  } while (cVar4 == '\0');
  uVar5 = (**(code **)(*piVar2 + 0x18))(param_2);
  return uVar5;
}


