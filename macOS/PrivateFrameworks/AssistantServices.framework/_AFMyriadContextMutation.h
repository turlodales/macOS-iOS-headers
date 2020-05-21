//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFMyriadContextMutating.h"

@class AFMyriadContext, AFMyriadPerceptualAudioHash, NSString;

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating>
{
    AFMyriadContext *_baseModel;
    unsigned long long _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasPerceptualAudioHash:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setPerceptualAudioHash:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

