// FUN_006eaf00 @ 6eaf00 size=295

void FUN_006eaf00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
  if (cVar1 != '\0') {
    if ((&DAT_00d3635a)[param_1 * 0x1a] == '\0') {
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6,param_7);
    }
    else {
      (&DAT_00d3635a)[param_1 * 0x1a] = 0;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      uVar4 = param_5;
      uVar2 = param_6;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6,param_7);
      uVar3 = 0xffffffff;
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_8,uVar4,uVar2,uVar3);
      (&DAT_00d3635a)[param_1 * 0x1a] = 1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5,param_6,param_7);
    }
    uVar4 = 0xffffffff;
    FUN_00446d10(&DAT_0088f28c);
    FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_8,param_5,param_6,uVar4);
  }
  return;
}


