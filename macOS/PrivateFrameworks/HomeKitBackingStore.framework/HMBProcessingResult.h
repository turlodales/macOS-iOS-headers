//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMBProcessingOptions, NAFuture, NSArray;

@interface HMBProcessingResult : HMFObject
{
    HMBProcessingOptions *_options;
    NSArray *_actions;
    NAFuture *_mirrorOutputResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NAFuture *mirrorOutputResult; // @synthesize mirrorOutputResult=_mirrorOutputResult;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) HMBProcessingOptions *options; // @synthesize options=_options;
- (id)initWithOptions:(id)arg1 actions:(id)arg2 mirrorOutputResult:(id)arg3;

@end

