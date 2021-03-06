//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EMRemoteConnection;

@interface EMFetchController : NSObject
{
    EMRemoteConnection *_connection;
}

+ (id)remoteInterface;
- (void).cxx_destruct;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (id)diagnosticInformation;
- (void)setCurrentSuppressionContexts:(id)arg1 suppressedContexts:(id)arg2;
- (void)performFetchOfType:(int)arg1 accounts:(id)arg2;
- (void)performFetchOfType:(int)arg1 mailboxes:(id)arg2;
- (void)performFetchOfType:(int)arg1;
- (id)initWithRemoteConnection:(id)arg1;

@end

