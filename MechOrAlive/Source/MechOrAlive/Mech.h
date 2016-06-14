#pragma once

#include "GameFramework/Character.h"
#include "Mech.generated.h"

UCLASS()
class MECHORALIVE_API AMech : public ACharacter
{
	GENERATED_BODY()

public:
	AMech();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
protected:
	virtual void MoveSideways(float Value);

};
