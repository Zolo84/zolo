// FUN_004a2450 @ 4a2450 size=141

uint __thiscall FUN_004a2450(int param_1,int param_2)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  iVar7 = param_2;
  if ((param_2 != 0) &&
     (in_EAX = param_2 * 5 + 5,
     *(char *)(*(int *)(param_1 + 0x12da) + (param_2 + 1 + in_EAX * 2) * 4) != '\0')) {
    uVar8 = (undefined2)param_2;
    iVar2 = FUN_005862f0(uVar8);
    in_EAX = 0;
    if (iVar2 != 0) {
      uVar6 = *(undefined4 *)(iVar2 + 0x22);
      param_2 = *(undefined4 *)(iVar2 + 0x26);
      cVar1 = FUN_00584e20(uVar8);
      if (cVar1 == '\x01') {
        param_2 = *(undefined4 *)(iVar2 + 0x22);
        uVar6 = *(undefined4 *)(iVar2 + 0x26);
      }
      puVar3 = (undefined2 *)FUN_00447250();
      uVar8 = *puVar3;
      uVar9 = (undefined2)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10);
      uVar4 = FUN_00458280(iVar7,uVar6,param_2,uVar8,uVar9);
      uVar5 = FUN_004a2b60(uVar4,iVar7,uVar6,param_2,uVar8,uVar9);
      return uVar5;
    }
  }
  return in_EAX & 0xffffff00;
}


