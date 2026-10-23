// FUN_0069b3e0 @ 69b3e0 size=385

void __fastcall FUN_0069b3e0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *local_4;
  
  cVar2 = FUN_006a8720();
  if (cVar2 != '\0') {
    return;
  }
  piVar7 = (int *)0x0;
  local_4 = (int *)0x0;
  puVar6 = *(undefined4 **)((int)param_1 + 0x1a);
  if (*(undefined4 **)((int)param_1 + 0x1a) != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar6[2];
      piVar3 = (int *)(**(code **)(*(int *)*puVar6 + 0xec))();
      iVar4 = (**(code **)(*piVar3 + 0x1e8))();
      if ((iVar4 != 0xc) &&
         ((piVar7 == (int *)0x0 || (*(float *)(piVar3[0x10] + 0x44) < (float)local_4)))) {
        piVar7 = piVar3;
        local_4 = (int *)*(float *)(piVar3[0x10] + 0x44);
      }
      puVar6 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    if (piVar7 != (int *)0x0) {
      local_4 = (int *)(**(code **)(*piVar7 + 0x1f0))();
      goto LAB_0069b464;
    }
  }
  local_4 = (int *)0x0;
LAB_0069b464:
  iVar4 = 0;
  if (0 < param_1[0x18]) {
    piVar7 = param_1 + 0x15;
    do {
      iVar5 = (**(code **)(*(int *)*piVar7 + 0x1e8))();
      if ((iVar5 != 0x10) || (iVar5 = (**(code **)(*param_1 + 0xe0))(), *(int *)(iVar5 + 0x86) < 4))
      {
        iVar5 = (**(code **)(*(int *)((int)param_1 + 0x16) + 4))();
        if (param_1[0x10] <= iVar5) {
          if ((local_4 != (int *)0x0) &&
             (*(float *)(local_4[0x10] + 0x44) <
              *(float *)(*(int *)(param_1[iVar4 + 0x15] + 0x40) + 0x44))) {
            (**(code **)(*param_1 + 0x108))(param_1[iVar4 + 0x15]);
            (**(code **)(*(int *)param_1[iVar4 + 0x15] + 0xc4))();
            param_1[iVar4 + 0x15] = 0;
          }
          break;
        }
        (**(code **)(*param_1 + 0x108))(*piVar7);
        (**(code **)(*(int *)*piVar7 + 0xc4))();
        *piVar7 = 0;
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar4 < param_1[0x18]);
  }
  iVar4 = 0;
  if (0 < param_1[0x18]) {
    piVar7 = param_1 + 0x15;
    do {
      if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar7)(1);
        *piVar7 = 0;
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar4 < param_1[0x18]);
  }
  param_1[0x18] = 0;
  iVar4 = (**(code **)(*(int *)((int)param_1 + 0x16) + 4))();
  if (param_1[0x10] < iVar4) {
    (**(code **)(*local_4 + 0xcc))();
  }
  return;
}


