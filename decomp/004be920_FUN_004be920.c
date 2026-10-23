// FUN_004be920 @ 4be920 size=423

void __thiscall FUN_004be920(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_2 == (int *)0x0) {
    pcVar4 = s_Attacker_0083f45c;
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      pcVar4 = s_Defender_0083f450;
    }
    uVar5 = (**(code **)(*(int *)param_1[0x10] + 0xc))(pcVar4,param_3);
    FUN_00405ad0(s__s___s_retreats_to_Prov__d__0083f430,uVar5);
    if (*(char *)((int)param_1 + 0x3e) == '\x01') {
      uVar5 = (**(code **)(*(int *)param_1[0x10] + 0xc))
                        (param_3,*(undefined4 *)((int)param_1 + 0x3a));
      FUN_00405ad0(s__s__Got_a_retreat_request_to_Pro_0083f3e4,uVar5);
      uVar5 = (**(code **)(*(int *)param_1[0x10] + 0xc))();
      FUN_00405ad0(s__s__I_ll_just_change_to_the_new_o_0083f3bc,uVar5);
    }
    *(undefined1 *)((int)param_1 + 0x3e) = 1;
    *(int *)((int)param_1 + 0x3a) = param_3;
    iVar6 = (**(code **)(*param_1 + 0xc))();
    piVar2 = *(int **)(iVar6 + 4);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      iVar6 = *piVar2;
      piVar2 = piVar1;
      if (*(char *)(iVar6 + 0x17b) == '\0') {
        piVar1 = (int *)param_1[0x10];
        uVar5 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x248) + 0xe) + 0xc))();
        uVar5 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar6 + 0x1a),uVar5);
        FUN_00405ad0(s__s__Unit___d___s__goes_into_retr_0083f35c,uVar5);
        if (((*(char *)((int)param_1 + 0x4e) == '\0') ||
            (*(int *)(iVar6 + 0xc) == *(int *)(*(int *)(param_1[0x10] + 0x78) + 0x12))) ||
           (param_3 == *(int *)(iVar6 + 0xc))) {
          *(int *)((int)param_1 + 0x3a) = param_3;
          FUN_00522930(param_3);
          (**(code **)(*param_1 + 0x5c))(iVar6);
          FUN_00522930(param_3);
        }
        else {
          FUN_0051bd30();
        }
      }
      else {
        piVar1 = (int *)param_1[0x10];
        uVar5 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x248) + 0xe) + 0xc))();
        uVar5 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar6 + 0x1a),uVar5);
        FUN_00405ad0(s__s__Unit___d___s__was_already_in_0083f388,uVar5);
      }
    }
  }
  else {
    if (((*(char *)((int)param_1 + 0x4e) != '\0') &&
        (iVar6 = param_2[3], iVar6 != *(int *)(*(int *)(param_1[0x10] + 0x78) + 0x12))) &&
       (param_3 != iVar6)) {
      *(int *)((int)param_1 + 0x3a) = iVar6;
      FUN_0051bd30();
      return;
    }
    *(int *)((int)param_1 + 0x3a) = param_3;
    FUN_00522930(param_3);
    (**(code **)(*param_1 + 0x5c))(param_2);
    cVar3 = (**(code **)(*param_2 + 0x2c))();
    if (cVar3 != '\0') {
      FUN_00522930(param_3);
      return;
    }
  }
  return;
}


