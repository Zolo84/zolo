// FUN_00579fd0 @ 579fd0 size=215

undefined4 __thiscall FUN_00579fd0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  
  iVar3 = param_2;
  uVar1 = *(uint *)(param_2 + 0x68);
  if (((uVar1 & 0x40) == 0) || ((uVar1 & 0x800) != 0)) {
    uStack_c = 0;
    uStack_1c = 0x57a08c;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x1a) + 0x18))
                      (*(int **)(param_1 + 0x1a),param_2,&param_2);
    if (iVar3 != 0) {
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x49,iVar3);
      return 0;
    }
  }
  else {
    *(uint *)(param_2 + 0x68) = uVar1 | 0x4000;
    uStack_c = 0;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1a) + 0x18))
                      (*(int **)(param_1 + 0x1a),param_2,&param_2);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x526) =
           *(int *)(param_1 + 0x526) + *(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 8);
      return uStack_c;
    }
    uStack_1c = 0;
    *(uint *)(iVar3 + 0x68) = *(uint *)(iVar3 + 0x68) & 0xffffbfff | 0x800;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1a) + 0x18))
                      (*(int **)(param_1 + 0x1a),iVar3,&uStack_c);
    if (iVar2 != 0) {
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x3e,iVar2);
      return 0;
    }
    *(int *)(param_1 + 0x522) =
         *(int *)(param_1 + 0x522) + *(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 8);
  }
  return uStack_1c;
}


