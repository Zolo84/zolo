// FUN_006a2c70 @ 6a2c70 size=259

void __fastcall FUN_006a2c70(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined1 *)(param_1 + 0x24) = 1;
  uVar3 = (**(code **)(*(int *)(*(int *)((int)param_1 + 10) + 0xe) + 0xc))();
  uVar3 = (**(code **)(*param_1 + 0xf0))(*(undefined4 *)((int)param_1 + 6),uVar3);
  FUN_00458570(s__s___d___s__engages_in_battle__00868df0,uVar3);
  iVar7 = param_1[0x23];
  if ((*(int *)((int)param_1 + 0x9e) == 0) && (*(int *)((int)param_1 + 0x9a) != 0)) {
    iVar7 = *(int *)((int)param_1 + 0x9a);
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0x244))();
  iVar5 = (**(code **)(*piVar4 + 4))();
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*param_1 + 0x244))();
    FUN_006aa9c0(**(undefined4 **)(iVar5 + 4));
  }
  iVar5 = (**(code **)(*param_1 + 0x244))();
  piVar4 = *(int **)(iVar5 + 4);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar5 = *piVar4;
    cVar2 = (**(code **)(*(int *)(iVar5 + 0x22e) + 8))();
    piVar4 = piVar1;
    if ((((cVar2 != '\0') && (iVar6 = (**(code **)(*(int *)(iVar5 + 0x11c) + 4))(), iVar6 == 0)) &&
        (*(int *)(iVar5 + 0xc) != *(int *)(param_1[0x23] + 0x12))) &&
       ((*(int *)(iVar5 + 0xc) != *(int *)(iVar7 + 0x12) &&
        ((iVar6 = (**(code **)(*param_1 + 0xd0))(iVar5,iVar7,0), iVar6 == 2 || (iVar6 == 3)))))) {
      uVar3 = (**(code **)(*param_1 + 0xe0))(iVar5);
      FUN_006a9f80(uVar3,iVar5);
    }
  }
  return;
}


