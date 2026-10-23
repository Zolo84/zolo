// FUN_00690a00 @ 690a00 size=237

void __fastcall FUN_00690a00(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar3 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    piVar2 = (int *)*piVar3;
    piVar3 = piVar1;
    if (*(char *)((int)piVar2 + 0x17d) == '\0') {
      cVar4 = (**(code **)(*piVar2 + 0x28))();
      if ((cVar4 == '\0') || (piVar2[0x7d] != 0)) {
        cVar4 = (**(code **)(*piVar2 + 0x2c))();
        if ((cVar4 == '\0') ||
           (((int *)piVar2[0x7d] != (int *)0x0 && ((int *)piVar2[0x7d] != param_1)))) {
          cVar4 = (**(code **)(*piVar2 + 0x30))();
          if ((cVar4 != '\0') && (piVar2[0x7d] == 0)) {
            iVar6 = *param_1;
            uVar5 = (**(code **)(*piVar2 + 0x18))();
            (**(code **)(iVar6 + 0x1b8))(uVar5);
          }
        }
        else {
          (**(code **)(*piVar2 + 0x14))();
          iVar6 = FUN_00516cc0();
          if (iVar6 < 1) {
            iVar6 = *(int *)param_1[0x9a];
            uVar5 = (**(code **)(*piVar2 + 0x14))();
            (**(code **)(iVar6 + 0x1c8))(uVar5);
          }
          else {
            iVar6 = **(int **)((int)param_1 + 0x7e);
            uVar5 = (**(code **)(*piVar2 + 0x14))();
            (**(code **)(iVar6 + 0x1c8))(uVar5);
          }
        }
      }
      else {
        iVar6 = *param_1;
        uVar5 = (**(code **)(*piVar2 + 0x10))();
        (**(code **)(iVar6 + 0x1a8))(uVar5);
      }
    }
  }
  return;
}


