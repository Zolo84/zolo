// FUN_0052b100 @ 52b100 size=73

undefined4 FUN_0052b100(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  do {
    do {
      if (puVar3 == (undefined4 *)0x0) {
        return 1;
      }
      puVar1 = (undefined4 *)puVar3[2];
      piVar2 = (int *)*puVar3;
      cVar4 = (**(code **)(*piVar2 + 0x28))();
      puVar3 = puVar1;
    } while (cVar4 == '\0');
    uVar5 = (**(code **)(*piVar2 + 0x10))();
    cVar4 = FUN_0052b150(uVar5);
  } while (cVar4 != '\0');
  return 0;
}


