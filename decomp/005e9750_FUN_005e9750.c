// FUN_005e9750 @ 5e9750 size=365

undefined4 * __thiscall
FUN_005e9750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int *piVar6;
  int *unaff_EBX;
  float10 fVar7;
  double dVar8;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x20))(param_3,param_4);
  if ((cVar2 != '\0') && (*(int *)((int)unaff_EBX + 0x46) != 0)) {
    puVar3 = (undefined4 *)FUN_0050a610();
    return puVar3;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))(param_3,param_4);
  if ((cVar2 != '\0') && (iVar1 = *(int *)((int)unaff_EBX + 0x46), iVar1 != 0)) {
    if (DAT_00dc191a == '\0') {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(*(int *)(iVar1 + 0x62) + 0xe) + 0xc))();
      return puVar3;
    }
    iVar1 = *(int *)(iVar1 + 0x62);
    (**(code **)(*unaff_EBX + 0xc))();
    uVar4 = FUN_0052b510();
    puVar5 = (undefined *)(**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar4);
LAB_005e9846:
    FUN_007a630a(&DAT_00cdd758,s__s_____________________________s_0085ab84,puVar5,uVar4);
    return &DAT_00cdd758;
  }
  piVar6 = (int *)(**(code **)(*unaff_EBX + 0xc))();
  (**(code **)(*piVar6 + 4))();
  cVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))(param_3,param_4);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x20))(param_3,param_4);
    if (cVar2 == '\0') {
      return (undefined4 *)0x0;
    }
    (**(code **)(*unaff_EBX + 0xc))();
    fVar7 = (float10)FUN_005277e0();
    dVar8 = (double)fVar7;
    uVar4 = FUN_0042b6c9(s_UIW_ORG_0085b104);
    FUN_007a630a(&DAT_00cdd358,s__s_____0f_0085cc40,uVar4,dVar8);
  }
  else {
    (**(code **)(*unaff_EBX + 0xc))();
    fVar7 = (float10)FUN_00527840();
    dVar8 = (double)fVar7;
    uVar4 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00cdd358,s__s_____0f_0085cc40,uVar4,dVar8);
    if (DAT_00dc191a != '\0') {
      (**(code **)(*unaff_EBX + 0xc))();
      uVar4 = FUN_0052b510();
      puVar5 = &DAT_00cdd358;
      goto LAB_005e9846;
    }
  }
  return (undefined4 *)&DAT_00cdd358;
}


