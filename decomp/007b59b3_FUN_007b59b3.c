// FUN_007b59b3 @ 7b59b3 size=53

uint FUN_007b59b3(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_007b5a29();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_007b5abb(uVar1);
  return uVar1;
}


