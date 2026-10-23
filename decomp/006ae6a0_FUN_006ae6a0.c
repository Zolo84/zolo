// FUN_006ae6a0 @ 6ae6a0 size=499

void __thiscall FUN_006ae6a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_8 [8];
  
  if (0 < param_2) {
    do {
      FUN_00428eb0(&local_10);
      iVar6 = 0;
      iVar1 = _rand();
      switch(iVar1 % 0x14) {
      case 0:
        if (*(int *)(param_1 + 0x117e8) != 0) {
          iVar6 = DAT_00dbd67a;
        }
        break;
      case 1:
        if (*(int *)(param_1 + 0x117e8) != 0) {
          iVar6 = DAT_00dbd66a;
        }
        break;
      case 2:
        if (*(int *)(param_1 + 0x117e8) != 0) {
          iVar6 = DAT_00dbd666;
        }
        break;
      case 3:
      case 4:
        iVar6 = DAT_00dbd636;
        break;
      case 5:
      case 6:
        iVar6 = DAT_00dbd63a;
        break;
      case 7:
      case 8:
        iVar6 = DAT_00dbd616;
      }
      uVar2 = FUN_0044c450(iVar6);
      puVar9 = &DAT_0088ebf8;
      uVar8 = 0;
      iVar1 = iVar6;
      FUN_00449290(&local_10);
      FUN_0045e580(in_stack_ffffffc8,in_stack_ffffffcc,iVar1,uVar8,uVar2,puVar9);
      iVar1 = FUN_00428ee0(&local_10);
      if (iVar1 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(iVar1 + -8);
      }
      uVar2 = 0x6ae774;
      puVar3 = (undefined4 *)FUN_00428eb0(local_8);
      local_10 = *puVar3;
      local_c = *(undefined2 *)(puVar3 + 1);
      if (*(char *)((int)piVar5 + 0x15f) == '\0') {
        if (*(char *)((int)piVar5 + 0x161) == '\0') {
          if ((char)piVar5[0x58] != '\0') {
            puVar9 = &DAT_0088ebf8;
            uVar7 = 0x6ae84d;
            FUN_00446d10(&DAT_0088f28c);
            uVar4 = FUN_0044e1b0();
            FUN_00449290(&local_10);
            FUN_00461fb0(in_stack_ffffffc8,uVar7,uVar4,uVar8,uVar2,puVar9);
          }
        }
        else {
          if (iVar6 == 0x1a) {
            iVar6 = *piVar5;
            uVar4 = 0xffffffff;
            uVar2 = FUN_0044c4a0(0xe);
            uVar8 = 0xe;
            (**(code **)(iVar6 + 0x20))(0xe,uVar2,uVar4);
          }
          puVar9 = &DAT_0088ebf8;
          FUN_00446d10(&DAT_0088f28c);
          uVar4 = FUN_0044e1b0();
          iVar6 = param_1;
          FUN_0044e1d0(param_1,uVar4);
          in_stack_ffffffc8 = 0x6ae816;
          uVar4 = FUN_004cc4d5(iVar6,uVar4);
          FUN_00449290(&local_10);
          FUN_00462100(in_stack_ffffffc8,iVar6,uVar4,uVar8,uVar2,puVar9);
        }
      }
      else {
        puVar9 = &DAT_0088ebf8;
        uVar7 = 0x6ae7a4;
        FUN_00446d10(&DAT_0088f28c);
        uVar4 = FUN_0044e1b0();
        FUN_00449290(&local_10);
        FUN_00461e60(in_stack_ffffffc8,uVar7,uVar4,uVar8,uVar2,puVar9);
      }
      in_stack_ffffffcc = 0x6ae87b;
      FUN_00449290(&local_10);
      FUN_0045e6f0(uVar8,uVar2,piVar5);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


