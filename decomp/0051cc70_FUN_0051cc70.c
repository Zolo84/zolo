// FUN_0051cc70 @ 51cc70 size=295

undefined4 __fastcall FUN_0051cc70(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puStack_4;
  
  if (DAT_00893750 != 0) {
    cVar3 = FUN_0042e980();
    if (cVar3 != '\0') {
      iVar4 = FUN_004e9370(param_1[3]);
      cVar3 = FUN_004e46e0();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 0x2c))();
        if (((cVar3 == '\0') || (*(int *)(iVar4 + 0x254) == 8)) || (*(int *)(iVar4 + 0x254) == 9)) {
          puStack_4 = *(undefined4 **)(*(int *)(iVar4 + 0x1c2) + 4);
        }
        else {
          puStack_4 = *(undefined4 **)(*(int *)(iVar4 + 0x46a) + 0x34);
        }
        iVar4 = 0;
        if (puStack_4 != (undefined4 *)0x0) {
          do {
            puVar1 = (undefined4 *)puStack_4[2];
            piVar2 = (int *)*puStack_4;
            cVar3 = (**(code **)(*param_1 + 0x28))();
            if (cVar3 == '\0') {
LAB_0051cd14:
              cVar3 = (**(code **)(*param_1 + 0x2c))();
              if (cVar3 != '\0') {
                cVar3 = (**(code **)(*piVar2 + 0x2c))();
                if (cVar3 != '\0') goto LAB_0051cd40;
              }
              cVar3 = (**(code **)(*param_1 + 0x30))();
              if (cVar3 != '\0') {
                cVar3 = (**(code **)(*piVar2 + 0x30))();
                if (cVar3 != '\0') goto LAB_0051cd40;
              }
            }
            else {
              cVar3 = (**(code **)(*piVar2 + 0x28))();
              if (cVar3 == '\0') goto LAB_0051cd14;
LAB_0051cd40:
              if (piVar2 != param_1) {
                cVar3 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))();
                if ((cVar3 != '\0') && (piVar2[0x92] == param_1[0x92])) {
                  iVar4 = iVar4 + 1;
                }
              }
            }
            puStack_4 = puVar1;
          } while (puVar1 != (undefined4 *)0x0);
          if (0 < iVar4) {
            (**(code **)(*param_1 + 0xc4))(iVar4);
            FUN_00460000(param_1);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


