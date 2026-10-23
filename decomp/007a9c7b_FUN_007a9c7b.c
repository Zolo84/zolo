// FUN_007a9c7b @ 7a9c7b size=34

undefined4 FUN_007a9c7b(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_007b36e8(param_1);
  *(undefined8 *)param_2 = uVar2;
  uVar1 = 0xffffffff;
  if ((*param_2 & param_2[1]) != 0xffffffff) {
    uVar1 = 0;
  }
  return uVar1;
}


