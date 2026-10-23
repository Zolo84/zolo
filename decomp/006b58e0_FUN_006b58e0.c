// FUN_006b58e0 @ 6b58e0 size=1018

undefined4 __thiscall FUN_006b58e0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
LAB_006b58ef:
  while( true ) {
    while (iVar3 = FUN_00535490(), iVar3 != 1) {
      piVar4 = (int *)FUN_00534391();
      if (*piVar4 == 4) {
        FUN_005343dc();
        return 0;
      }
    }
    iVar3 = param_2[1];
    if (0x2c1 < iVar3) break;
    if (iVar3 == 0x2c1) {
      iVar3 = FUN_007a7b3c(param_2 + 0x104);
      *(float *)(param_1 + 0x10) = (float)iVar3;
    }
    else if (iVar3 < 700) {
      if (iVar3 == 699) {
        (**(code **)(*(int *)(param_1 + 0x80) + 0x10))();
        FUN_005359b0(0x11,param_1 + 0x80);
        if (DAT_00dc4b5e != '\0') {
          uStack_30 = 0;
          uStack_2e = 0;
          uStack_2c = 0;
          puVar2 = *(undefined4 **)(param_1 + 0x84);
          while (puVar2 != (undefined4 *)0x0) {
            puVar1 = *(undefined4 **)((int)puVar2 + 10);
            uStack_18 = *(undefined2 *)puVar2;
            uStack_16 = (undefined2)*(undefined4 *)((int)puVar2 + 2);
            uStack_14 = (undefined2)((uint)*(undefined4 *)((int)puVar2 + 2) >> 0x10);
            uStack_30 = (undefined2)*puVar2;
            uStack_2e = (undefined2)((uint)*puVar2 >> 0x10);
            uStack_2c = uStack_14;
            iVar3 = FUN_00428460(&uStack_30);
            puVar2 = puVar1;
            if ((iVar3 == 0) || (iVar3 == 8)) {
              FUN_00429a00(s_ERROR___Invalid_Tech_ID___d__fou_00869b8c,CONCAT22(uStack_2c,uStack_2e)
                           ,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
        }
      }
      else if (iVar3 == 0x8b) {
        iVar3 = FUN_007a7b3c(param_2 + 0x104);
        *(float *)(param_1 + 4) = (float)iVar3;
      }
      else if (iVar3 == 0xa7) {
        iVar3 = FUN_007a7b3c(param_2 + 0x104);
        *(float *)(param_1 + 8) = (float)iVar3;
      }
      else {
        if (iVar3 != 0x146) goto LAB_006b5cac;
        iVar3 = FUN_007a7b3c(param_2 + 0x104);
        *(float *)(param_1 + 0xc) = (float)iVar3;
      }
    }
    else if (iVar3 == 700) {
      (**(code **)(*(int *)(param_1 + 0x92) + 0x10))();
      FUN_005359b0(0x11,param_1 + 0x92);
      if (DAT_00dc4b5e != '\0') {
        uStack_28 = 0;
        uStack_26 = 0;
        uStack_24 = 0;
        puVar2 = *(undefined4 **)(param_1 + 0x96);
        while (puVar2 != (undefined4 *)0x0) {
          puVar1 = *(undefined4 **)((int)puVar2 + 10);
          uStack_10 = *(undefined2 *)puVar2;
          uStack_e = (undefined2)*(undefined4 *)((int)puVar2 + 2);
          uStack_c = (undefined2)((uint)*(undefined4 *)((int)puVar2 + 2) >> 0x10);
          uStack_28 = (undefined2)*puVar2;
          uStack_26 = (undefined2)((uint)*puVar2 >> 0x10);
          uStack_24 = uStack_c;
          iVar3 = FUN_00428460(&uStack_28);
          puVar2 = puVar1;
          if ((iVar3 == 0) || (iVar3 == 8)) {
            FUN_00429a00(s_ERROR___Invalid_Tech_ID___d__fou_00869b3c,CONCAT22(uStack_24,uStack_26),
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
    }
    else {
      if (iVar3 != 0x2c0) goto LAB_006b5cac;
      iVar3 = FUN_007a7b3c(param_2 + 0x104);
      *(float *)(param_1 + 0x14) = (float)iVar3;
    }
  }
  if (iVar3 < 0x335) {
    if (iVar3 == 0x334) {
      iVar3 = FUN_007a7b3c(param_2 + 0x104);
      *(float *)(param_1 + 0x20) = (float)iVar3;
      goto LAB_006b58ef;
    }
    if (iVar3 == 0x332) {
      iVar3 = FUN_007a7b3c(param_2 + 0x104);
      *(float *)(param_1 + 0x18) = (float)iVar3;
      goto LAB_006b58ef;
    }
    if (iVar3 == 0x333) {
      iVar3 = FUN_007a7b3c(param_2 + 0x104);
      *(float *)(param_1 + 0x24) = (float)iVar3;
      goto LAB_006b58ef;
    }
  }
  else {
    if (iVar3 == 0x335) {
      iVar3 = FUN_007a7b3c(param_2 + 0x104);
      *(float *)(param_1 + 0x1c) = (float)iVar3;
      goto LAB_006b58ef;
    }
    if (iVar3 == 0x4ab) {
      (**(code **)(*(int *)(param_1 + 0xa4) + 0x10))();
      FUN_005359b0(0x11,param_1 + 0xa4);
      if (DAT_00dc4b5e != '\0') {
        uStack_20 = 0;
        uStack_1e = 0;
        uStack_1c = 0;
        puVar2 = *(undefined4 **)(param_1 + 0xa8);
        while (puVar2 != (undefined4 *)0x0) {
          puVar1 = *(undefined4 **)((int)puVar2 + 10);
          uStack_8 = *(undefined2 *)puVar2;
          uStack_6 = (undefined2)*(undefined4 *)((int)puVar2 + 2);
          uStack_4 = (undefined2)((uint)*(undefined4 *)((int)puVar2 + 2) >> 0x10);
          uStack_20 = (undefined2)*puVar2;
          uStack_1e = (undefined2)((uint)*puVar2 >> 0x10);
          uStack_1c = uStack_4;
          iVar3 = FUN_00428460(&uStack_20);
          puVar2 = puVar1;
          if ((iVar3 == 0) || (iVar3 == 8)) {
            FUN_00429a00(s_ERROR___Invalid_Tech_ID___d__fou_00869af0,CONCAT22(uStack_1c,uStack_1e),
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
      goto LAB_006b58ef;
    }
  }
LAB_006b5cac:
  FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
  return 0xfffffffe;
}


