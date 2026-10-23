// FUN_006ea810 @ 6ea810 size=340

void FUN_006ea810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined *param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
  if (cVar1 != '\0') {
    iVar2 = param_1 * 0x1a;
    if ((&DAT_00d3635a)[iVar2] == '\0') {
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6,param_7);
    }
    else {
      DAT_00d40fd4 = param_7;
      DAT_00d40fd8 = param_4;
      (&DAT_00d3635a)[iVar2] = 0;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      if (*(int *)(&DAT_00d36350 + iVar2) == 0) {
        puVar3 = &DAT_00d3bfd4;
        uVar5 = param_4;
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_6);
      }
      else {
        puVar3 = param_5;
        uVar5 = param_6;
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6,param_7);
      }
      uVar4 = 0xffffffff;
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,puVar3,uVar5,uVar4);
      (&DAT_00d3635a)[iVar2] = 1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5,param_6,param_7);
    }
    uVar5 = 0xffffffff;
    FUN_00446d10(&DAT_0088f28c);
    FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,param_5,param_6,uVar5);
  }
  return;
}


