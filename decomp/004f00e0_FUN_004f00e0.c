// FUN_004f00e0 @ 4f00e0 size=417

void __thiscall FUN_004f00e0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iStack_4;
  
  iVar6 = DAT_00ab27b4 + param_2 * 0x4b2;
  iStack_4 = param_1;
  if (param_2 == 0) {
    if (param_3 == (int *)0x0) goto LAB_004f0203;
LAB_004f021d:
    if (*(int *)(param_1 + 0xc) != 0) {
      cVar2 = FUN_005173e0(param_1);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0xc);
        FUN_00517410(param_1);
        cVar2 = FUN_0042e980();
        if (cVar2 != '\0') {
          FUN_006ad5c0(2,&LAB_004f0d60,param_1);
        }
        FUN_0050bd90(0,*(undefined4 *)(param_1 + 0xc));
        return;
      }
      goto LAB_004f0203;
    }
    *(int *)(param_1 + 0x240) = param_3[3];
  }
  else {
    if (param_3 != (int *)0x0) goto LAB_004f021d;
    iVar3 = *(int *)(iVar6 + 0x254);
    if ((((iVar3 == 8) || (iVar3 == 9)) &&
        (iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))(), 0 < iVar3)) &&
       (iVar3 = (**(code **)(*(int *)(param_1 + 0x22e) + 4))(), iVar3 == 0)) {
      iVar3 = *(int *)(param_1 + 0x26);
      do {
        if (iVar3 == 0) goto LAB_004f018f;
        puVar4 = (undefined4 *)FUN_00499730(&iStack_4,0);
      } while (*(int *)(*(int *)*puVar4 + 0x134) == 0xe);
      cVar2 = FUN_00523990();
      if (cVar2 == '\0') {
LAB_004f018f:
        piVar5 = *(int **)(*(int *)(iVar6 + 0x1c2) + 4);
        if (piVar5 != (int *)0x0) {
          do {
            if (param_3 != (int *)0x0) goto LAB_004f021d;
            piVar1 = (int *)piVar5[2];
            piVar5 = (int *)*piVar5;
            if ((piVar5[0x92] == *(int *)(param_1 + 0x248)) &&
               (cVar2 = (**(code **)(*piVar5 + 0x2c))(), cVar2 != '\0')) {
              iVar6 = param_1;
              (**(code **)(*piVar5 + 0x14))(param_1);
              cVar2 = FUN_005173e0(iVar6);
              if (cVar2 != '\0') {
                param_3 = piVar5;
              }
            }
            piVar5 = piVar1;
          } while (piVar1 != (int *)0x0);
          if (param_3 != (int *)0x0) goto LAB_004f021d;
        }
      }
    }
    if ((*(int *)(param_1 + 0xc) != 0) || (*(int *)(param_1 + 0x2a6) == 0)) goto LAB_004f0203;
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(*(int *)(param_1 + 0x2a6) + 0xc);
  }
  FUN_005174c0(param_1);
LAB_004f0203:
  FUN_0051b240(param_2);
  return;
}


