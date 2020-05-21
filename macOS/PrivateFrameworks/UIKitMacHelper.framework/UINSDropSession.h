//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINSDropSession.h"

@class NSArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface UINSDropSession : NSObject <UINSDropSession>
{
    id <UINSDropSessionHandler> _handler;
    unsigned long long _lastDropOperation;
    NSObject<OS_dispatch_queue> *_dropQueueTargetingMainQueue;
    unsigned int _sessionID;
    NSArray *_items;
    unsigned long long _operationMask;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long operationMask; // @synthesize operationMask=_operationMask;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (void)sawDragEndEvent;
- (void)setHandler:(id)arg1;
- (void)takePotentialDropOperation:(unsigned long long)arg1;
- (void)takeHandler:(id)arg1;
- (void)draggingEnded:(id)arg1 sceneView:(id)arg2;
- (void)concludeDragOperation:(id)arg1 sceneView:(id)arg2;
- (BOOL)performDragOperation:(id)arg1 sceneView:(id)arg2;
- (BOOL)prepareForDragOperation:(id)arg1 sceneView:(id)arg2;
- (void)draggingExited:(id)arg1 sceneView:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 sceneView:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 sceneView:(id)arg2;
- (id)initWithDraggingInfo:(id)arg1 sessionID:(unsigned int)arg2 sceneView:(id)arg3;

@end

