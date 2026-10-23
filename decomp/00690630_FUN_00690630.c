// FUN_00690630 @ 690630 size=474

void __fastcall FUN_00690630(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  FUN_006adf50(0x17);
  FUN_006adf50(0x16);
  FUN_006adf50(0x1a);
  FUN_006adf50(0x19);
  FUN_006a9850();
  (**(code **)(*(int *)((int)param_1 + 0x256) + 0x10))();
  puVar2 = *(undefined4 **)(*(int *)((int)param_1 + 10) + 0x4508);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    piVar6 = (int *)*puVar2;
    cVar3 = (**(code **)(*piVar6 + 0x30))();
    if (cVar3 != '\0') {
      (**(code **)(*piVar6 + 0x18))();
      piVar4 = (int *)FUN_004ef820();
      if (piVar4 != (int *)0x0) {
        iVar5 = FUN_0066ee70();
        if (iVar5 != 0) {
          piVar7 = piVar4;
          FUN_0066ee70(piVar4);
          FUN_004d1330(piVar7);
        }
        iVar5 = (**(code **)(*piVar4 + 0x218))();
        if (iVar5 != 0) {
          (**(code **)(*piVar4 + 0x218))();
          FUN_0066c200();
        }
        uVar8 = 1;
        (**(code **)*piVar4)(1);
        (**(code **)(*piVar6 + 0x18))(0);
        FUN_004ef810(uVar8);
      }
      (**(code **)(*piVar6 + 0x18))();
      piVar4 = (int *)FUN_004ef800();
      if (piVar4 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar4 + 0x218))();
        if (iVar5 != 0) {
          (**(code **)(*piVar4 + 0x218))();
          FUN_0066c200();
        }
        uVar8 = 1;
        (**(code **)*piVar4)(1);
        (**(code **)(*piVar6 + 0x18))(0);
        FUN_004ef7f0(uVar8);
      }
    }
    FUN_00524610(0);
    puVar2 = puVar1;
  }
  piVar6 = (int *)0x0;
  piVar4 = (int *)(**(code **)(*param_1 + 0x1a4))();
  (**(code **)(*piVar4 + 0x10))();
  piVar4 = (int *)(**(code **)(*param_1 + 0x1c4))();
  (**(code **)(*piVar4 + 0x10))();
  param_1[0x7d] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  piVar4 = (int *)param_1[0x17];
  while (piVar4 != (int *)0x0) {
    piVar6 = (int *)piVar4[2];
    FUN_00796cd8(*piVar4);
    FUN_00796cd8(piVar4);
    piVar4 = piVar6;
  }
  param_1[0x17] = (int)piVar6;
  param_1[0x18] = (int)piVar6;
  param_1[0x19] = (int)piVar6;
  piVar4 = (int *)param_1[0x9e];
  if (piVar4 != piVar6) {
    do {
      iVar5 = *piVar4;
      (**(code **)(param_1[0x9d] + 0x1c))(piVar4);
      if (*(char *)(iVar5 + 0x20) != '\0') {
        (**(code **)(*(int *)(iVar5 + 0x12) + 0xcc))();
      }
      piVar4 = (int *)param_1[0x9e];
    } while (piVar4 != (int *)0x0);
  }
  return;
}


