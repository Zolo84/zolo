// FUN_00667060 @ 667060 size=163

void __fastcall FUN_00667060(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = (**(code **)(*(int *)((int)param_1 + 0xde) + 4))();
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*param_1 + 0x1c4))();
    piVar3 = *(int **)(iVar5 + 4);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      piVar2 = (int *)*piVar3;
      cVar4 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))();
      piVar3 = piVar1;
      if (cVar4 != '\0') {
        iVar5 = FUN_0051b230();
        if ((((*(int *)(iVar5 + 0x254) != 8) && (*(int *)(iVar5 + 0x254) != 9)) &&
            (*(int *)(iVar5 + 0x3d8) != 0)) && (cVar4 = FUN_005216c0(iVar5), cVar4 == '\0')) {
          uVar7 = 0;
          uVar6 = (**(code **)(*piVar2 + 0x14))(0);
          iVar5 = FUN_00664880(uVar6,uVar7);
          if (iVar5 != 0) {
            uVar7 = 0;
            uVar6 = FUN_004e9370(iVar5,0);
            FUN_006aaff0(piVar2,uVar6,uVar7);
          }
        }
      }
    }
  }
  return;
}


