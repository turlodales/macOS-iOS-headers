//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXDeviceProblemsStateMutating.h"

@class NSString, SVXDeviceProblemsState;

@interface _SVXDeviceProblemsStateMutation : NSObject <SVXDeviceProblemsStateMutating>
{
    SVXDeviceProblemsState *_baseModel;
    BOOL _isFixingProblems;
    unsigned long long _problems;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsFixingProblems:1;
        unsigned int hasProblems:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setProblems:(unsigned long long)arg1;
- (void)setIsFixingProblems:(BOOL)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

