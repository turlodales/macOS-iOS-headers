//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProgress, WFTaskIdentifier;

@interface WFTask : NSObject
{
    BOOL _requiresResponse;
    WFTaskIdentifier *_identifier;
    NSProgress *_progress;
}

+ (id)sharedServiceConnection;
- (void).cxx_destruct;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) BOOL requiresResponse; // @synthesize requiresResponse=_requiresResponse;
@property(readonly, nonatomic) WFTaskIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)cancel;
@property(readonly, nonatomic) BOOL isCancelled;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (void)executeSynchronously;
- (void)start;
- (id)initWithResponseRequired:(BOOL)arg1;
- (id)init;

@end

