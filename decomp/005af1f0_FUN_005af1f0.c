// FUN_005af1f0 @ 5af1f0 size=450

void FUN_005af1f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined **local_20;
  int *local_1c;
  int iStack_14;
  char local_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb8f0;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_005b0a90();
    local_e = '\0';
    local_20 = &PTR_FUN_007e80e4;
    local_4 = 0;
    cVar5 = FUN_0042e980();
    if (cVar5 != '\0') {
      FUN_005af3c0(&local_20);
      piVar4 = local_1c;
      while (piVar4 != (int *)0x0) {
        piVar1 = (int *)piVar4[2];
        piVar2 = (int *)*piVar4;
        cVar5 = (**(code **)(*piVar2 + 0x1c))();
        piVar4 = piVar1;
        if (cVar5 == '\0') {
          (**(code **)(*piVar2 + 0xc))();
          FUN_00405ad0(s_Server__Invalid_combat_detected__0085912c);
          (**(code **)(*piVar2 + 0x58))();
        }
      }
      *(undefined1 *)(param_1 + 0x4514) = 1;
      piVar4 = *(int **)(param_1 + 0x4508);
      while (piVar4 != (int *)0x0) {
        piVar1 = (int *)piVar4[2];
        iVar3 = *piVar4;
        piVar4 = piVar1;
        if (((*(char *)(iVar3 + 0x17d) == '\0') &&
            (iVar6 = (**(code **)(*(int *)(iVar3 + 0x11c) + 4))(), iVar6 == 0)) &&
           (*(char *)(iVar3 + 0x17b) == '\0')) {
          FUN_005afd90(iVar3);
        }
      }
      iVar3 = *(int *)(param_1 + 0x4508);
      *(undefined1 *)(param_1 + 0x4514) = 0;
      while (iVar3 != 0) {
        if (*(char *)(iVar3 + 0xc) == '\0') {
          iVar3 = *(int *)(iVar3 + 8);
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
          (**(code **)(*(int *)(param_1 + 0x4504) + 0x1c))();
        }
      }
    }
    (*(code *)local_20[4])();
    local_20 = &PTR_FUN_007e80e4;
    local_4 = 1;
    if (local_e != '\0') {
      while (iStack_14 != 0) {
        piVar4 = (int *)*local_1c;
        (**(code **)(*piVar4 + 0x3c))();
        if (piVar4 != (int *)0x0) {
          (**(code **)*piVar4)();
        }
        FUN_004eeac0();
      }
    }
    local_20 = &PTR_LAB_007e8b04;
    piVar4 = local_1c;
    while (piVar4 != (int *)0x0) {
      piVar4 = (int *)piVar4[2];
      FUN_00796cd8();
    }
  }
  ExceptionList = local_c;
  return;
}


