


#include "HelperSubsystem.h"

#include "Kismet/GameplayStatics.h"


float UHelperSubsystem::GetAnimationLenght(
	UAnimSequence* sequence
	)
{
	{
		if( sequence != nullptr )
		{
			return sequence->SequenceLength;
		}

		return 0.0f;
	}
}
