#include "Items/Fragments/Inv_ItemFragment.h"

void FInv_HealthPotionFragment::OnConsume(APlayerController* PC)
{
	// Get a stats component from the pc or the pc->getpawn
	// or get the gas and apply gameplay effect
	// or call an interface function for Healing
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Health Potion consumed! Healing by: %f"), HealthAmount));
}

void FInv_ManaPotionFragment::OnConsume(APlayerController* PC)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Mana Potion consumed! Mana replenished by: %f"), ManaAmount));
}
