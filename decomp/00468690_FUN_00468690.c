// FUN_00468690 @ 468690 size=117

void __thiscall FUN_00468690(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  
  (**(code **)(*param_2 + 0x10))();
  piVar6 = &DAT_0089cad8;
  do {
    iVar5 = *piVar6;
    if (((iVar5 != 0) && (iVar5 != param_1)) &&
       (cVar4 = FUN_0044a690(*(undefined4 *)(param_1 + 6)), cVar4 != '\0')) {
      puVar3 = *(undefined4 **)(iVar5 + 0x4508);
      while (puVar3 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar3[2];
        piVar2 = (int *)*puVar3;
        cVar4 = (**(code **)(*piVar2 + 0x28))();
        puVar3 = puVar1;
        if ((cVar4 != '\0') && (iVar5 = FUN_00522770(), iVar5 == param_1)) {
          FUN_00459df0(piVar2);
        }
      }
    }
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < 0x89d038);
  return;
}


