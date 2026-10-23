// FUN_0069b910 @ 69b910 size=210

int * __thiscall FUN_0069b910(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1a);
  do {
    do {
      do {
        if (puVar3 == (undefined4 *)0x0) {
          iVar7 = 0;
          piVar6 = (int *)(param_1 + 0x54);
          do {
            if (((int *)*piVar6 != (int *)0x0) &&
               (cVar4 = (**(code **)(*(int *)*piVar6 + 0x1ec))(), cVar4 != '\0')) {
              iVar2 = *(int *)(param_2 + 0x12);
              (**(code **)(*(int *)*piVar6 + 0x1f0))();
              iVar8 = FUN_006a6370();
              if (iVar8 == iVar2) {
                return *(int **)(param_1 + 0x54 + iVar7 * 4);
              }
            }
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar7 < 2);
          return (int *)0x0;
        }
        puVar1 = (undefined4 *)puVar3[2];
        piVar6 = (int *)*puVar3;
        cVar4 = (**(code **)(*piVar6 + 0xe8))();
        puVar3 = puVar1;
      } while (cVar4 == '\0');
      piVar5 = (int *)(**(code **)(*piVar6 + 0xec))();
      cVar4 = (**(code **)(*piVar5 + 0x1ec))();
    } while (cVar4 == '\0');
    piVar6 = (int *)(**(code **)(*piVar6 + 0xec))();
    piVar6 = (int *)(**(code **)(*piVar6 + 0x1f0))();
    iVar7 = (**(code **)(*piVar6 + 0x1e8))();
  } while ((iVar7 == 0xc) || (piVar6[0x23] != param_2));
  return piVar6;
}


