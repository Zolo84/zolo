// FUN_0045b890 @ 45b890 size=121

void __thiscall
FUN_0045b890(int *param_1,int *param_2,int param_3,undefined4 param_4,undefined2 param_5,
            undefined4 param_6)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  
  while( true ) {
    if (param_3 == 0) {
      *param_2 = 0;
      return;
    }
    local_1c = param_4;
    local_18 = param_5;
    local_14 = param_6;
    iVar1 = *param_1;
    FUN_0045bb50(auStack_28);
    cVar2 = (**(code **)(iVar1 + 0xc))();
    if (cVar2 != '\0') break;
    param_3 = *(int *)(param_3 + 0x10);
  }
  *param_2 = param_3;
  return;
}


