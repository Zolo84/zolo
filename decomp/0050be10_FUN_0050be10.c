// FUN_0050be10 @ 50be10 size=590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050be10(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c17ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar3 = FUN_0042e980();
  if (cVar3 == '\0') {
    ExceptionList = local_c;
    return;
  }
  iVar4 = (**(code **)(param_2[0x47] + 4))();
  if (iVar4 != 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(char *)((int)param_2 + 0x17b) != '\0') {
    ExceptionList = local_c;
    return;
  }
  if (((int)(&DAT_00dc0fd4)[*(int *)(param_2[0x92] + 6)] < 1) ||
     (2 < (int)(&DAT_00dc0fd4)[*(int *)(param_2[0x92] + 6)])) {
switchD_0050be97_caseD_15:
    if ((*(int *)(param_1 + 4) == 4) ||
       (cVar3 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar3 != '\0')) {
      cVar3 = (**(code **)(*param_2 + 0x28))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_2 + 0x30))();
        if (cVar3 != '\0') {
          (**(code **)(*param_2 + 0x18))();
          FUN_0050f230();
        }
      }
      else {
        (**(code **)(*param_2 + 0x10))();
        FUN_0050c590();
      }
      cVar3 = (**(code **)(*param_2 + 0x2c))();
      if (cVar3 != '\0') {
        (**(code **)(*param_2 + 0x14))();
        FUN_0050cf00();
      }
    }
  }
  else {
    bVar2 = true;
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0x13:
    case 0x14:
      piVar5 = *(int **)((int)param_2 + 0x26);
      if (*(int **)((int)param_2 + 0x26) != (int *)0x0) {
        do {
          if (!bVar2) goto switchD_0050be97_caseD_15;
          piVar1 = piVar5 + 2;
          if (_DAT_007e3380 < *(float *)(*piVar5 + 0x2ec)) {
            bVar2 = false;
          }
          piVar5 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
LAB_0050bf42:
        if (!bVar2) goto switchD_0050be97_caseD_15;
      }
      break;
    default:
      goto switchD_0050be97_caseD_15;
    case 0x1b:
    case 0x1c:
      piVar5 = *(int **)((int)param_2 + 0x26);
      if (*(int **)((int)param_2 + 0x26) != (int *)0x0) {
        do {
          if (!bVar2) goto switchD_0050be97_caseD_15;
          piVar1 = piVar5 + 2;
          if (*(int *)(*piVar5 + 0x134) == 0x1e) {
            bVar2 = false;
          }
          piVar5 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
        goto LAB_0050bf42;
      }
      break;
    case 0x1e:
    case 0x1f:
      (**(code **)(*param_2 + 0x14))();
      cVar3 = FUN_00516d10();
      if (cVar3 != '\0') goto switchD_0050be97_caseD_15;
    }
    pvVar6 = operator_new(0xc);
    uStack_4 = 0;
    if (pvVar6 != (void *)0x0) {
      uVar7 = FUN_00447250();
      FUN_00449290(uVar7);
      uVar8 = 0x22;
      uVar7 = FUN_00447250(0x22);
      FUN_00516560(uVar7,uVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    cVar3 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
    if (cVar3 == '\0') {
      FUN_005bacbb();
    }
  }
  ExceptionList = local_c;
  return;
}


