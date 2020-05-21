//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WFMDMVerifier : NSObject
{
    NSString *_actionName;
    NSArray *_contentSources;
}

+ (id)dataInfosFromContentSources:(id)arg1 withManagedLevel:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *contentSources; // @synthesize contentSources=_contentSources;
@property(readonly, copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (id)errorFromFailedVerificationContentSources:(id)arg1 targetDataInfo:(id)arg2 destinationManagedLevel:(unsigned long long)arg3;
- (BOOL)canSendDataToTargetDataInfo:(id)arg1 error:(id *)arg2;
- (id)initWithAction:(id)arg1;
- (id)initWithContentSources:(id)arg1 actionName:(id)arg2;

@end

