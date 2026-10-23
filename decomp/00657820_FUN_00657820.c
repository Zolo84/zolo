// FUN_00657820 @ 657820 size=559

void __thiscall FUN_00657820(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  switch(param_2) {
  case 0:
    iVar4 = FUN_0064ec20();
    if (iVar4 != 0) {
      bVar6 = false;
      iVar5 = 0;
      if (*(int *)(iVar4 + 0x6c) != 0) {
        iVar5 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
        if (iVar5 == 0) {
          (**(code **)(*param_1 + 0x49c))((short)*(undefined4 *)(iVar4 + 0x6c));
        }
        FUN_0064c090(5);
        iVar5 = *(int *)(iVar4 + 0x6c);
        iVar3 = (**(code **)(*(int *)(iVar5 + 0x22) + 4))();
        bVar6 = iVar3 == 1;
        if (*(int *)(iVar4 + 0x88) != 0) {
          FUN_0051b230();
        }
      }
      FUN_0045ec40(iVar4,0,1,0);
      if (bVar6) {
        FUN_00460000((short)iVar5);
        FUN_0064c090(0);
        return;
      }
    }
    break;
  case 1:
    iVar5 = 0;
    iVar4 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    if (iVar4 != 0) {
      uVar2 = (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)param_1 + 0x21e5a) + 4) + 0x10))
                        ();
      iVar5 = FUN_0045be80(uVar2);
    }
    FUN_0052ac00();
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x49c))((short)iVar5);
    }
    iVar4 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    if (0 < iVar4) {
      iVar4 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
      if (1 < iVar4) {
        FUN_0064c090(6);
        return;
      }
      FUN_0064c090(5);
      return;
    }
LAB_006579dc:
    FUN_0064c090(0);
    return;
  case 2:
    iVar4 = FUN_0064ec20();
    if (iVar4 != 0) {
      bVar6 = false;
      iVar5 = 0;
      if (*(int *)(iVar4 + 0x6c) != 0) {
        iVar5 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
        if (iVar5 == 0) {
          (**(code **)(*param_1 + 0x49c))((short)*(undefined4 *)(iVar4 + 0x6c));
        }
        FUN_0064c090(5);
        iVar5 = *(int *)(iVar4 + 0x6c);
        iVar3 = (**(code **)(*(int *)(iVar5 + 0x22) + 4))();
        bVar6 = iVar3 == 1;
        if (*(int *)(iVar4 + 0x88) != 0) {
          FUN_0051b230();
        }
      }
      FUN_0045edf0((short)iVar4);
      if (bVar6) {
        FUN_00460000((short)iVar5);
        goto LAB_006579dc;
      }
    }
    break;
  case 3:
    piVar1 = param_1 + 0x87a7;
    iVar4 = FUN_00428ee0((short)piVar1);
    if ((iVar4 != 0) && (iVar4 != 8)) {
      FUN_0045f140((short)*piVar1,(short)((uint)*(undefined4 *)((int)param_1 + 0x21e9e) >> 0x10));
      uStack_6 = (undefined2)DAT_0088f28e;
      uStack_4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
      *piVar1 = CONCAT22(uStack_6,DAT_0088f28c);
      *(undefined2 *)(param_1 + 0x87a8) = uStack_4;
    }
  }
  return;
}


