// FUN_0068e7f0 @ 68e7f0 size=309

void __thiscall FUN_0068e7f0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_8 [8];
  
  if (param_4 != 0) {
    while ((0 < param_2 && (iVar3 = FUN_0068e930(param_3,param_4), iVar3 != 0))) {
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x22) + 4))();
      if (param_2 < iVar4) {
        iVar4 = *(int *)((int)param_1 + 10);
        iVar5 = FUN_00522770();
        if (iVar5 != iVar4) {
          FUN_00459df0(iVar3);
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x22) + 4))();
          goto LAB_0068e911;
        }
        FUN_00428eb0(auStack_8);
        FUN_00446d10(&DAT_0088f28c);
        FUN_00516300();
        FUN_00449290(auStack_8);
        FUN_00667670();
        FUN_00461e60();
        iVar4 = FUN_00428ee0(auStack_8);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar4 + -0x14;
        }
        (**(code **)(*param_1 + 0x1a8))(iVar4);
        puVar2 = *(undefined4 **)(iVar3 + 0x26);
        for (; (puVar2 != (undefined4 *)0x0 && (0 < param_2)); param_2 = param_2 + -1) {
          puVar1 = (undefined4 *)puVar2[2];
          FUN_0045e6c0(iVar4,*puVar2);
          puVar2 = puVar1;
        }
        FUN_00459df0(iVar4);
      }
      else {
        FUN_00459df0(iVar3);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x22) + 4))();
LAB_0068e911:
        param_2 = param_2 - iVar3;
      }
    }
  }
  return;
}


