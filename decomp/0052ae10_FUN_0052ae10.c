// FUN_0052ae10 @ 52ae10 size=111

undefined4 __thiscall FUN_0052ae10(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  do {
    do {
      do {
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
        puVar1 = (undefined4 *)puVar3[2];
        piVar2 = (int *)*puVar3;
        cVar4 = (**(code **)(*piVar2 + 0x30))();
        puVar3 = puVar1;
      } while (cVar4 == '\0');
      (**(code **)(*piVar2 + 0x18))();
      iVar5 = FUN_004ef960();
      iVar6 = (**(code **)(*(int *)(param_2 + 0x22) + 4))();
    } while (iVar5 < iVar6);
    (**(code **)(*piVar2 + 0x18))();
    cVar4 = FUN_004f0aa0();
  } while (cVar4 == '\0');
  return 1;
}


