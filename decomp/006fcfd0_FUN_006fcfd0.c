// FUN_006fcfd0 @ 6fcfd0 size=686

undefined4 __thiscall FUN_006fcfd0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int local_18;
  int local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db41b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_00bd1500 != 0) && (ExceptionList = &pvStack_c, *(char *)(DAT_00bd1500 + 0x37b) != '\0'))
  {
    local_14[0] = DAT_00bd1500 + 0x3b0;
    local_18 = 0;
    ExceptionList = &pvStack_c;
    if (0 < *(int *)(param_1 + 0xa0)) {
      piVar7 = (int *)(param_1 + 0x10);
      iVar4 = DAT_00bd1500;
      ExceptionList = &pvStack_c;
      do {
        iVar8 = 0;
        if (0 < *(int *)(iVar4 + 0xb70)) {
          do {
            if (iVar8 != *(int *)(iVar4 + 900)) {
              piVar1 = (int *)*piVar7;
              if ((*(int *)(local_14[0] + 0x1c + iVar8 * 0x3e) == piVar1[0x2b]) &&
                 (*(int *)(*DAT_00d12b40 + 0x36e) == 0)) {
                if (*(char *)((int)piVar1 + 0xa2) != '\0') {
                  FUN_00433930();
                }
                (**(code **)(*piVar1 + 0x60))();
                *(undefined1 *)((int)piVar1 + 0x86) = 1;
                iVar8 = *(int *)(DAT_00bd1500 + 0xb70);
                iVar4 = DAT_00bd1500;
              }
              else {
                (**(code **)(*piVar1 + 0x50))();
                iVar4 = DAT_00bd1500;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(iVar4 + 0xb70));
        }
        local_18 = local_18 + 1;
        piVar7 = piVar7 + 1;
      } while (local_18 < *(int *)(param_1 + 0xa0));
    }
  }
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    piVar7 = (int *)(param_1 + 0x10);
    do {
      if (*(char *)(*piVar7 + 0x86) == '\0') {
        iVar4 = (**(code **)(*param_2 + 8))();
        if ((((iVar4 == 0xf) && (cVar3 = FUN_0042e980(), cVar3 != '\0')) &&
            (*(char *)(DAT_00d685a6 + 0x2ce8) != '\0')) &&
           (cVar3 = (**(code **)(*(int *)*piVar7 + 0x20))
                              (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)
                              ), cVar3 != '\0')) {
          puVar2 = *(undefined4 **)(param_1 + 0xac);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &PTR_FUN_007f8430;
            if ((undefined4 *)puVar2[5] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)puVar2[5])(1);
            }
            if ((undefined4 *)puVar2[6] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)puVar2[6])(1);
            }
            FUN_00796cd8(puVar2);
          }
          pvVar5 = operator_new(0x1c);
          uStack_4 = 0;
          if (pvVar5 == (void *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_006fbf40(*(undefined4 *)(*(int *)(param_1 + 0x10 + local_18 * 4) + 0xac),
                                 *(int *)(param_1 + 0xa4) + 0x564,param_1);
          }
          *(undefined4 *)(param_1 + 0xac) = uVar6;
          uStack_4 = 0xffffffff;
          piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x10 + local_18 * 4) + 0x28))(local_14);
          iVar4 = *(int *)(param_1 + 0xac);
          iVar8 = piVar7[1];
          *(int *)(iVar4 + 4) = *piVar7 + 0x18;
          *(int *)(iVar4 + 8) = iVar8 + 0x18;
          ExceptionList = pvStack_c;
          return 3;
        }
        iVar4 = (**(code **)(*(int *)*piVar7 + 4))(param_2);
        if (iVar4 != 0) {
          cVar3 = FUN_00433910();
          if (cVar3 != '\0') {
            iVar4 = 0;
            if (0 < *(int *)(param_1 + 0xa0)) {
              piVar7 = (int *)(param_1 + 0x10);
              do {
                if ((iVar4 != local_18) && (*(char *)(*piVar7 + 0x86) == '\0')) {
                  FUN_00433930();
                }
                iVar4 = iVar4 + 1;
                piVar7 = piVar7 + 1;
              } while (iVar4 < *(int *)(param_1 + 0xa0));
            }
            *(int *)(param_1 + 0x90) = local_18;
          }
          cVar3 = FUN_00433920();
          if (cVar3 != '\0') {
            *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
          }
          ExceptionList = pvStack_c;
          return 3;
        }
      }
      local_18 = local_18 + 1;
      piVar7 = piVar7 + 1;
    } while (local_18 < *(int *)(param_1 + 0xa0));
  }
  ExceptionList = pvStack_c;
  return 0;
}


