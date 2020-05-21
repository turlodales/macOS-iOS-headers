//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MXAudioObjectDescription, NSArray, NSMutableArray;

@interface MXChangedObject : NSObject
{
    MXAudioObjectDescription *mAudioObjectDescription;
    NSMutableArray *mChangedNamedProperties;
    NSMutableArray *mChangedCustomProperties;
    NSMutableArray *mCreatedChildren;
    NSMutableArray *mDestroyedChildren;
    NSMutableArray *mChangedChildren;
}

@property(readonly) NSArray *changedChildren; // @synthesize changedChildren=mChangedChildren;
@property(readonly) NSArray *destroyedChildren; // @synthesize destroyedChildren=mDestroyedChildren;
@property(readonly) NSArray *createdChildren; // @synthesize createdChildren=mCreatedChildren;
@property(readonly) NSArray *changedCustomProperties; // @synthesize changedCustomProperties=mChangedCustomProperties;
@property(readonly) NSArray *changedNamedProperties; // @synthesize changedNamedProperties=mChangedNamedProperties;
@property(readonly) MXAudioObjectDescription *audioObjectDescription; // @synthesize audioObjectDescription=mAudioObjectDescription;
- (id)createChangedObjectFromChildren:(vector_e9f4e6a1)arg1;
- (void)populateChangedObject:(struct ChangedObject)arg1;
- (void)createChangedCustomProperties:(vector_cc4db96f *)arg1;
- (void)createChangedNamedProperties:(vector_bfad48d9 *)arg1;
- (void)createDestroyedChildren:(vector_d60b2a1f *)arg1;
- (void)createCreatedChildren:(vector_d60b2a1f *)arg1;
- (id)init;

@end

