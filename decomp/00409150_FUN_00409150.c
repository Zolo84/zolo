// FUN_00409150 @ 409150 size=446

void __thiscall
FUN_00409150(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  int iVar5;
  
  uVar2 = (**(code **)(*param_2 + 4))(param_3,param_4);
  uVar3 = param_2[6] / param_2[3];
  if (*(int *)(param_1 + 0x24e) == 1) {
    iVar5 = *(int *)(param_1 + 0x242) + 0x904;
  }
  else if (*(int *)(param_1 + 0x24e) == 2) {
    iVar5 = *(int *)(param_1 + 0x242) + 0xd04;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x242) + 0x504;
  }
  param_6 = (uVar3 & 0xffff) * (param_6 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f));
  param_4 = (uVar3 & 0xffff) * param_4;
  switch(*(undefined4 *)(param_1 + 0x23e)) {
  case 1:
    uVar4 = 1;
    break;
  case 2:
    uVar4 = 3;
    break;
  case 3:
    uVar4 = 7;
    break;
  case 4:
    uVar4 = 0xf;
    break;
  case 5:
    uVar4 = 0x1f;
    break;
  default:
    uVar4 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x238);
  if (iVar1 == 3) {
    if (DAT_00857744 != 0) {
      FUN_00409950(uVar2,&param_3,uVar4,iVar5,uVar3);
      (**(code **)(*unaff_EBX + 0xc))();
      return;
    }
    FUN_00409550(uVar2,&param_3,uVar4,iVar5,uVar3);
    (**(code **)(*unaff_EBX + 0xc))();
    return;
  }
  if (iVar1 == 4) {
    if (DAT_00857744 != 0) {
      FUN_0040abd0(uVar2,&param_3,uVar4,iVar5,uVar3);
      (**(code **)(*unaff_EBX + 0xc))();
      return;
    }
    FUN_0040a590(uVar2,&param_3,uVar4,iVar5,uVar3);
    (**(code **)(*unaff_EBX + 0xc))();
    return;
  }
  if (iVar1 == 5) {
    if (DAT_00857744 != 0) {
      FUN_0040a170(uVar2,&param_3,uVar4,iVar5,uVar3);
      (**(code **)(*unaff_EBX + 0xc))();
      return;
    }
    FUN_00409d60(uVar2,&param_3,uVar4,iVar5,uVar3);
    (**(code **)(*unaff_EBX + 0xc))();
    return;
  }
  FUN_00409330(uVar2,&param_3,uVar4,iVar5,uVar3);
  (**(code **)(*unaff_EBX + 0xc))();
  return;
}


