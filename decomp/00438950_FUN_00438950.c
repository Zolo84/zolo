// FUN_00438950 @ 438950 size=75

void __thiscall FUN_00438950(int param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = -1;
  pcVar4 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -6) {
    uVar2 = FUN_00584270(((byte)param_2[3] & 0xf) << 5,((byte)param_2[2] & 0xf) << 5,
                         ((byte)param_2[1] & 0xf) << 5);
    *(undefined2 *)(param_1 + 0x54) = uVar2;
  }
  return;
}


