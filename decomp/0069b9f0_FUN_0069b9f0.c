// FUN_0069b9f0 @ 69b9f0 size=124

int * __thiscall FUN_0069b9f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1a);
  do {
    do {
      do {
        if (puVar2 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        puVar1 = (undefined4 *)puVar2[2];
        piVar5 = (int *)*puVar2;
        cVar3 = (**(code **)(*piVar5 + 0xe8))();
        puVar2 = puVar1;
      } while (cVar3 == '\0');
      piVar4 = (int *)(**(code **)(*piVar5 + 0xec))();
      cVar3 = (**(code **)(*piVar4 + 0x1ec))();
    } while (cVar3 == '\0');
    piVar5 = (int *)(**(code **)(*piVar5 + 0xec))();
    piVar5 = (int *)(**(code **)(*piVar5 + 0x1f0))();
    iVar6 = (**(code **)(*piVar5 + 0x1e8))();
  } while ((iVar6 != 0x10) || (piVar5[0x23] != param_2));
  return piVar5;
}


