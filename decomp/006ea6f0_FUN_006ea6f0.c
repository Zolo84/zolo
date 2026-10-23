// FUN_006ea6f0 @ 6ea6f0 size=282

void FUN_006ea6f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
  if (cVar1 != '\0') {
    if ((&DAT_00d3635a)[param_1 * 0x1a] != '\0') {
      DAT_00d40fd4 = param_6;
      DAT_00d40fd8 = param_3;
      (&DAT_00d3635a)[param_1 * 0x1a] = 0;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      uVar4 = param_4;
      uVar2 = param_5;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5,param_6);
      uVar3 = 0xffffffff;
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,uVar4,uVar2,uVar3);
      (&DAT_00d3635a)[param_1 * 0x1a] = 1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
    }
    FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5,param_6);
    uVar4 = 0xffffffff;
    FUN_00446d10(&DAT_0088f28c);
    FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,param_4,param_5,uVar4);
  }
  return;
}


