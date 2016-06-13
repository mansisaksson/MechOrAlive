#include "MechOrAlive.h"
#include "Mech.h"

AMech::AMech()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMech::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMech::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMech::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	
}

