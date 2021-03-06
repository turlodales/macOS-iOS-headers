//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class CKContextClient, PPTextToTopicTransform;

@interface SGTopicDissector : SGPipelineDissector
{
    unsigned long long _blacklistHash;
    CKContextClient *_contextClient;
    PPTextToTopicTransform *_transform;
    BOOL _significanceCheckEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_registerContextBlacklistCheck;
- (unsigned long long)_hashForBlacklist:(id)arg1;
- (void)_collectHighLevelTopicsWithText:(id)arg1 bundleId:(id)arg2 addTopic:(CDUnknownBlockType)arg3 weight:(double)arg4;
- (void)_collectTopicsFromContextKitWithText:(id)arg1 isPlainText:(BOOL)arg2 bundleId:(id)arg3 addTopic:(CDUnknownBlockType)arg4 weight:(double)arg5;
- (id)topicsInText:(id)arg1 isPlainText:(BOOL)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 algorithms:(id)arg5 weight:(double)arg6;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (void)checkBlacklist;
- (id)extractionsFromContextKitWithText:(id)arg1 isPlainText:(BOOL)arg2 bundleId:(id)arg3 weight:(double)arg4;
- (id)init;
- (id)initWithSignificanceCheckEnabled:(BOOL)arg1;
- (id)initWithContextClient:(id)arg1 significanceCheckEnabled:(BOOL)arg2;

@end

