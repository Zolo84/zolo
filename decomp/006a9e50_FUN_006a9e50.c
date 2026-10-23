// FUN_006a9e50 @ 6a9e50 size=157

undefined4 __thiscall FUN_006a9e50(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0xad) {
    uVar2 = FUN_006adf70(param_2);
    uVar3 = (**(code **)(*param_2 + 8))();
    uVar3 = FUN_00566aa0(uVar3);
    FUN_00402500(0,s_CAIAgent_doesn_t_recognize_the_e_008695bc,uVar3);
    return uVar2;
  }
  FUN_00402500(0,s_Shouldn_t_get_here__This_is_done_0086957c);
  iVar1 = param_2[1];
  puVar4 = (undefined4 *)FUN_00428460(iVar1 + 0xe);
  uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe) + 0xc))(*(undefined4 *)(iVar1 + 0x10))
  ;
  FUN_00402500(0,s_The_King_of__s_can_t_find_its_pe_00869548,uVar2);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  return 3;
}


