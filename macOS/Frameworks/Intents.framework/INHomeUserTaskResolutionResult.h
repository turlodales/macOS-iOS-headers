//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INHomeUserTaskResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithHomeUserTaskToConfirm:(id)arg1;
+ (id)disambiguationWithHomeUserTasksToDisambiguate:(id)arg1;
+ (id)successWithResolvedHomeUserTask:(id)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end

