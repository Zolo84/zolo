// FUN_004d26c0 @ 4d26c0 size=637

undefined4 __thiscall FUN_004d26c0(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf67b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  do {
    while( true ) {
      while( true ) {
        while (iVar1 = FUN_00535490(), iVar1 != 1) {
          piVar4 = (int *)FUN_00534391();
          if (*piVar4 == 4) {
            FUN_005343dc();
            FUN_00419440();
            iVar1 = *(int *)(param_1 + 0x30);
            FUN_00415be0();
            (**(code **)(iVar1 + 0x18))();
            ExceptionList = local_c;
            return 0;
          }
        }
        iVar1 = *(int *)(param_2 + 4);
        if (iVar1 < 0x16e) break;
        if (iVar1 < 0x1f2) {
          if (iVar1 == 0x1f1) {
            uVar3 = FUN_007a7b3c();
            *(undefined4 *)(param_1 + 0xd0) = uVar3;
          }
          else if (iVar1 == 0x1ab) {
            FUN_007a7b3c();
          }
          else {
            if (iVar1 != 0x1ac) goto switchD_004d2726_caseD_f3;
            FUN_007a7b3c();
          }
        }
        else if (iVar1 == 499) {
          uVar3 = FUN_007a7b3c();
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
        }
        else {
          if (iVar1 != 0x523) goto switchD_004d2726_caseD_f3;
          FUN_00427ed0();
          (**(code **)(*(int *)(param_1 + 8) + 4))();
        }
      }
      if (iVar1 == 0x16d) break;
      switch(iVar1) {
      case 0xf2:
        FUN_007a7b3c();
        FUN_004182e0();
        break;
      default:
switchD_004d2726_caseD_f3:
        FUN_005349b0();
        ExceptionList = local_c;
        return 0xfffffffe;
      case 0x10a:
        uVar3 = FUN_004af6b0();
        *(undefined4 *)(param_1 + 0xcc) = uVar3;
        break;
      case 0x13e:
        FUN_007a7b3c();
        FUN_00418140();
        break;
      case 0x156:
        FUN_0054f130();
        break;
      case 0x157:
        FUN_0054f130();
        pvVar2 = operator_new(0xc);
        local_4 = 0;
        if (pvVar2 != (void *)0x0) {
          uVar3 = FUN_00447250();
          FUN_00449290(uVar3);
          uVar3 = FUN_0048b960();
          FUN_00465bd0(uVar3);
          uVar3 = FUN_0044df10();
          FUN_00465100(0x8b,uVar3);
        }
        local_4 = 0xffffffff;
        FUN_00565af0();
      }
    }
    *(bool *)(param_1 + 0x1a) = *(int *)(param_2 + 0x40c) == 0x111;
  } while( true );
}


