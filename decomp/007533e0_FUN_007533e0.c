// FUN_007533e0 @ 7533e0 size=481

void __fastcall FUN_007533e0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfe5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00752ed0();
  if (cVar1 != '\0') {
    puVar2 = *(undefined4 **)(param_1 + 0x104);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_007f0c98;
    }
    FUN_006cd7d0(puVar2);
    FUN_006cd800();
    if (DAT_00bd1500 != (undefined4 *)0x0) {
      (**(code **)*DAT_00bd1500)(1);
    }
    DAT_00bd1500 = (undefined4 *)0x0;
    FUN_005820d0();
    FUN_00582270();
    puVar2 = *(undefined4 **)(param_1 + 0x104);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_007f0c98;
    }
    cVar1 = FUN_005821e0(1,0x10001,puVar2);
    if (cVar1 != '\0') {
      iVar4 = 100;
      do {
        FUN_00582420(0);
        FUN_005821d0();
        Sleep(100);
        if (iVar4 == 0) break;
        iVar3 = FUN_00582430();
        iVar4 = iVar4 + -1;
      } while (iVar3 == 0);
      iVar4 = FUN_00582430();
      if (iVar4 == 0) {
        if (DAT_00bd1500 != (undefined4 *)0x0) {
          FUN_0057be80();
        }
        iVar4 = *DAT_00d12b40 + 0x341;
        uVar5 = FUN_0042b6c9(s_FETCP_FAILTEXT_0086f980);
        FUN_007a630a(&DAT_00d4c25c,uVar5,iVar4);
        pvVar6 = operator_new(0x68);
        uStack_4 = 0;
        if (pvVar6 != (void *)0x0) {
          uVar8 = 4;
          puVar7 = &DAT_00d4c25c;
          uVar5 = FUN_0042b6c9(s_FETCP_FAIL_0086f960);
          FUN_0043dce0(uVar5,puVar7,uVar8);
          ExceptionList = local_c;
          return;
        }
      }
      else {
        iVar4 = FUN_00582190(*DAT_00d12b40 + 0x301,0);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x84) = 6;
          FUN_00750b30();
        }
        else if (DAT_00bd1500 != (undefined4 *)0x0) {
          FUN_0057be80();
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


