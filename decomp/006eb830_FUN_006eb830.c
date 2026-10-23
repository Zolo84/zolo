// FUN_006eb830 @ 6eb830 size=309

void FUN_006eb830(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 local_4;
  
  local_4 = param_5;
  if (((param_1 == 0xab) || (param_1 == 0xa7)) || (uVar2 = param_4, param_1 == 0xa9)) {
    local_4 = param_4;
    uVar2 = param_5;
  }
  cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
  if (cVar1 != '\0') {
    if ((&DAT_00d3635a)[param_1 * 0x1a] == '\0') {
      param_3 = &DAT_00d3bfd4;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,uVar2,local_4);
      param_4 = uVar2;
    }
    else {
      (&DAT_00d3635a)[param_1 * 0x1a] = 0;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      puVar3 = &DAT_00d3bfd4;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,uVar2,local_4);
      uVar4 = param_8;
      FUN_00446d10(&param_6);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,puVar3,uVar2,uVar4);
      (&DAT_00d3635a)[param_1 * 0x1a] = 1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5);
    }
    uVar2 = param_8;
    FUN_00446d10(&param_6);
    FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,param_3,param_4,uVar2);
  }
  return;
}


