//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileCoordinator.h"

@class BRCAccountSession, NSObject<OS_dispatch_source>, NSURL;

@interface BRCFileCoordinator : NSFileCoordinator
{
    BRCAccountSession *_session;
    unsigned long long _startStamp;
    NSURL *_url1;
    NSURL *_url2;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _doneHandler;
    BOOL _cancelled;
    BOOL _isUpdateForReconnecting;
    BOOL _forRead;
}

+ (void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(BOOL)arg5;
+ (void)itemAtPath:(id)arg1 origLogicalName:(id)arg2 didBounceToNewLogicalName:(id)arg3;
+ (void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidChangeAtPath:(id)arg1 logicalFilename:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL forRead; // @synthesize forRead=_forRead;
@property(nonatomic) BOOL isUpdateForReconnecting; // @synthesize isUpdateForReconnecting=_isUpdateForReconnecting;
- (void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(BOOL)arg3 queue:(id)arg4 taskTracker:(id)arg5 accessor:(CDUnknownBlockType)arg6;
- (void)scheduleUpdateOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleDeleteOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleReadOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)_didObtainCoordination:(id)arg1 context:(id)arg2 url1:(id)arg3 url2:(id)arg4 handler:(CDUnknownBlockType)arg5 fcHandler:(CDUnknownBlockType)arg6 error:(id)arg7;
- (void)_willRequestCoordinationWithContext:(id)arg1 url1:(id)arg2 url2:(id)arg3;
- (void)cancelAfterDelay:(double)arg1;
- (void)cancel;
- (id)initWithSession:(id)arg1 forRead:(BOOL)arg2 doneHandler:(CDUnknownBlockType)arg3;

@end

