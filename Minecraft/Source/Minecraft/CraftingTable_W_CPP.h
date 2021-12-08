// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CraftingTable_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UCraftingTable_W_CPP : public UUserWidget
{
	GENERATED_BODY()
	
public:
  UFUNCTION(BlueprintCallable)
    void SetOwnerPlayer(class AMinecraftCharacter* _player);
  UFUNCTION(BlueprintCallable)
    void UpdateItems();
  UFUNCTION(BlueprintCallable)
    bool AddItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    bool SubstractItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    bool AddSlotItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 _index, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    bool SubstractSlotItemC(uint8 _count, uint8 _index, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    bool UpdateSlotItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 _index, uint8& _oCount);



  UPROPERTY(BlueprintReadWrite)
    TArray<class UItemFrame_W_CPP*> Slots;
  UPROPERTY(BlueprintReadOnly)
    class AMinecraftCharacter* Player;
	
};
