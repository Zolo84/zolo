// FUN_0049ee40 @ 49ee40 size=488

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0049ee40(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int *piVar9;
  int *unaff_retaddr;
  
  cVar3 = (**(code **)(*param_3 + 0x24))(*(undefined4 *)((int)param_2 + 0x482));
  if (cVar3 == '\0') {
    FUN_0045a130(*(undefined4 *)((int)param_2 + 0x482));
    if (param_3 == (int *)0x0) {
      param_3 = param_1;
    }
    if ((int *)param_2[0xf6] != (int *)0x0) {
      piVar9 = param_2;
      if ((int *)param_2[0xf6] == param_1) {
        if (*(int *)((int)param_2 + 0x482) != 0) {
          iVar4 = FUN_0044e1d0();
          if (iVar4 != 0) {
            iVar4 = (**(code **)**(undefined4 **)((int)param_2 + 0x482))();
            iVar4 = *(int *)(iVar4 + 0x6c);
            puVar5 = (undefined4 *)FUN_0044e1d0();
            iVar6 = (**(code **)*puVar5)();
            if (iVar4 == *(int *)(iVar6 + 0x6c)) {
              iVar4 = FUN_0044e1b0();
              return iVar4;
            }
          }
          iVar4 = FUN_004e9370(*(undefined4 *)(*(int *)((int)param_2 + 0x482) + 0x52));
          if (param_3 == param_1) {
            piVar2 = *(int **)(*(int *)((int)param_2 + 0x482) + 0x2c);
            while (piVar2 != (int *)0x0) {
              piVar7 = piVar2 + 2;
              iVar6 = *piVar2;
              piVar2 = (int *)*piVar7;
              if ((((*(int *)(iVar6 + 0x46a) != 0) || (*(int *)(iVar4 + 0x46a) == 0)) ||
                  (*(int *)(iVar6 + 0x12) == *(int *)(iVar4 + 0x12))) &&
                 (_DAT_007e3380 < *(float *)(iVar6 + 0x270))) {
                return *(int *)(iVar6 + 0x12);
              }
            }
          }
          puVar5 = *(undefined4 **)(*(int *)((int)param_2 + 0x482) + 0x3e);
joined_r0x0049ef4e:
          do {
            do {
              param_1 = unaff_EBX;
              if (puVar5 == (undefined4 *)0x0) goto LAB_0049effd;
              puVar1 = (undefined4 *)puVar5[2];
              piVar2 = (int *)*puVar5;
              piVar7 = (int *)FUN_004c9f81();
              puVar5 = puVar1;
              piVar9 = unaff_retaddr;
            } while (((piVar7 == (int *)0x0) || (*(int *)(*piVar2 + 0x4c) != 0)) ||
                    (cVar3 = (**(code **)(*param_2 + 0x24))(*piVar2), cVar3 != '\0'));
            if (((param_3 == piVar7) || ((param_3[0xcd4] != 0 && (piVar7[0xcd4] == param_3[0xcd4])))
                ) || (*(int *)(*(int *)((int)piVar7 + 0x12da) + 0x3b30) ==
                      *(int *)((int)param_3 + 6))) {
              uVar8 = **(undefined4 **)(*piVar2 + 0x2c);
            }
            else {
              cVar3 = FUN_005861a0(*(undefined4 *)((int)piVar7 + 6));
              if (cVar3 == '\0') goto joined_r0x0049ef4e;
              uVar8 = **(undefined4 **)(*piVar2 + 0x2c);
              piVar7 = param_3;
            }
            iVar4 = FUN_0049ee40(uVar8,param_2,piVar7);
            if (0 < iVar4) {
              return iVar4;
            }
          } while( true );
        }
      }
      else {
LAB_0049effd:
        if (param_3 == param_1) {
          iVar4 = FUN_004e9370(*(undefined4 *)(*(int *)((int)piVar9 + 0x482) + 0x52));
          return *(int *)(iVar4 + 0x12);
        }
      }
    }
  }
  return 0;
}


