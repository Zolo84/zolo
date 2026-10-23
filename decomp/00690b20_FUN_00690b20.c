// FUN_00690b20 @ 690b20 size=356

void __thiscall FUN_00690b20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d536b;
  local_c = ExceptionList;
  piVar4 = *(int **)((int)param_1 + 0x25a);
  do {
    if (piVar4 == (int *)0x0) goto LAB_00690b67;
    iVar1 = *piVar4;
    piVar4 = (int *)piVar4[2];
  } while (*(int *)(iVar1 + 0x48) != param_2);
  if (iVar1 == 0) {
LAB_00690b67:
    ExceptionList = &local_c;
    piVar4 = operator_new(0x7a);
    local_4 = 0;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_0069ae50(param_1);
      *(undefined4 *)((int)piVar4 + 0x6a) = 0;
      *(undefined4 *)((int)piVar4 + 0x6e) = 0;
      *(undefined4 *)((int)piVar4 + 0x72) = 0;
      *(undefined1 *)((int)piVar4 + 0x76) = 0;
      *(undefined ***)((int)piVar4 + 0x66) = &PTR_FUN_007e7a0c;
      *piVar4 = (int)&PTR_FUN_007f405c;
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar4 + 0xb4))(param_1);
    (**(code **)(*param_1 + 0x108))(piVar4);
    cVar3 = FUN_004ca41f();
    if (cVar3 == '\0') {
      iVar1 = *(int *)((int)param_1 + 0x25e);
      puVar5 = operator_new(0xe);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = piVar4;
        puVar5[1] = iVar1;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar2 = *(int *)((int)param_1 + 0x262);
      *(undefined4 **)((int)param_1 + 0x25e) = puVar5;
      *(int *)((int)param_1 + 0x262) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)((int)param_1 + 0x25a) = puVar5;
      }
      else {
        *(undefined4 **)(iVar1 + 8) = puVar5;
      }
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x25a);
      puVar5 = operator_new(0xe);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = piVar4;
        puVar5[1] = 0;
        puVar5[2] = iVar1;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar2 = *(int *)((int)param_1 + 0x262);
      *(undefined4 **)((int)param_1 + 0x25a) = puVar5;
      *(int *)((int)param_1 + 0x262) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)((int)param_1 + 0x25e) = puVar5;
      }
      else {
        *(undefined4 **)(iVar1 + 4) = puVar5;
      }
    }
    (**(code **)(*piVar4 + 0x218))(local_4);
  }
  ExceptionList = local_c;
  return;
}


