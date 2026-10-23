// FUN_006e9f10 @ 6e9f10 size=164

void FUN_006e9f10(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = 0x6e9f25;
  iVar3 = param_1;
  cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
  if (cVar1 != '\0') {
    if ((&DAT_00d3635a)[param_1 * 0x1a] == '\x01') {
      (&DAT_00d3635a)[param_1 * 0x1a] = 0;
      uVar2 = 0x6e9f56;
      iVar3 = param_1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      uVar4 = 0xffffffff;
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3bfd4,0xffffffff,uVar2,iVar3,uVar4);
      (&DAT_00d3635a)[param_1 * 0x1a] = 1;
      uVar2 = 0x6e9f8c;
      iVar3 = param_1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
    }
    uVar4 = 0xffffffff;
    FUN_00446d10(&DAT_0088f28c);
    FUN_006ebb00(param_1,param_2,&DAT_00d3bfd4,0xffffffff,uVar2,iVar3,uVar4);
  }
  return;
}


