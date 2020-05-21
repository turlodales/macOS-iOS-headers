//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface BridgeOSSoftwareUpdateController : NSObject
{
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSObject<OS_xpc_object> *_updateProxy;
    CDUnknownBlockType _stateQueryCompletion;
    CDUnknownBlockType _macOSLogFetchCompletion;
    CDUnknownBlockType _bridgeOSLogFetchCompletion;
    id <BridgeOSSoftwareUpdateControllerDelegate> delegate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType bridgeOSLogFetchCompletion; // @synthesize bridgeOSLogFetchCompletion=_bridgeOSLogFetchCompletion;
@property(copy, nonatomic) CDUnknownBlockType macOSLogFetchCompletion; // @synthesize macOSLogFetchCompletion=_macOSLogFetchCompletion;
@property(copy, nonatomic) CDUnknownBlockType stateQueryCompletion; // @synthesize stateQueryCompletion=_stateQueryCompletion;
@property(nonatomic) __weak id <BridgeOSSoftwareUpdateControllerDelegate> delegate; // @synthesize delegate;
- (void)fetchMacOSLogs:(id)arg1 sinceDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchBridgeOSLogs:(id)arg1 sinceDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)purgeUpdate:(id)arg1;
- (id)cancelPendingUpdate:(id)arg1;
- (id)applyUpdate:(id)arg1;
- (id)prepareUpdate:(id)arg1;
- (id)preflightUpdate:(id)arg1;
- (id)transferUpdateBundle:(id)arg1 options:(id)arg2;
- (id)transferUpdateBrain:(id)arg1 options:(id)arg2;
- (id)releaseUpdateControl;
- (id)requestUpdateControl:(id)arg1;
- (void)queryUpdateState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)processOptions:(id)arg1;
- (id)sendProxyMessageAsync:(const char *)arg1 mergeDict:(id)arg2 options:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)sendProxyMessageAsync:(const char *)arg1 options:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_handleEvent:(id)arg1;
- (void)_cancelUpdateProxyConnection;
- (id)_updateProxy;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

