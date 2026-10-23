// FUN_00427ed0 @ 427ed0 size=169

undefined4 __thiscall FUN_00427ed0(undefined2 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  do {
    while (iVar1 = FUN_00535490(), iVar1 == 1) {
      if (param_2[1] == 0x141) {
        iVar1 = FUN_007a7b3c(param_2 + 0x104);
        if (0x7ff8 < iVar1) {
          FUN_00429a50(s_Illegal_id_type__d_0083a470,iVar1);
        }
        *param_1 = (short)iVar1;
      }
      else {
        if (param_2[1] != 0x523) {
          FUN_00405ad0(s_unexpected_field__s_found_in_an_i_0083a438,param_2 + 2,
                       *(int *)(*param_2 + 0x212) + 1);
          return 0xfffffffe;
        }
        uVar2 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 1) = uVar2;
      }
    }
    piVar3 = (int *)FUN_00534391();
  } while (*piVar3 != 4);
  FUN_005343dc();
  return 0;
}


