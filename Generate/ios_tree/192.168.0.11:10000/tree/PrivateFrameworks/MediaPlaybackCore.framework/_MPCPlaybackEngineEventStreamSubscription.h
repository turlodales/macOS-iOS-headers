/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlaybackEngineEventStreamSubscription : NSObject <MPCPlaybackEngineEventStreamSubscription> {
    <MPCPlaybackEngineEventConsumer> * _consumer;
    NSMutableDictionary * _eventHandlers;
    MPCPlaybackEngineEventStream * _eventStream;
    NSMutableDictionary * _immediateEventHandlers;
    unsigned long long  _lastEventSuccessTimestamp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _mutatingEventHandlers;
}

@property (nonatomic, readonly) <MPCPlaybackEngineEventConsumer> *consumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *eventHandlers;
@property (nonatomic, readonly) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *immediateEventHandlers;
@property (nonatomic) unsigned long long lastEventSuccessTimestamp;
@property (nonatomic, readonly) NSMutableDictionary *mutatingEventHandlers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_onQueue_flush;
- (void)cancelSubscription;
- (id)consumer;
- (id)debugDescription;
- (id)eventHandlers;
- (id)eventStream;
- (void)flushEventsWithCompletion:(id /* block */)arg1;
- (id)immediateEventHandlers;
- (id)initWithConsumer:(id)arg1 eventStream:(id)arg2;
- (unsigned long long)lastEventSuccessTimestamp;
- (id)mutatingEventHandlers;
- (void)setLastEventSuccessTimestamp:(unsigned long long)arg1;
- (void)subscribeToEventType:(id)arg1 handler:(id /* block */)arg2;
- (void)subscribeToEventType:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;

@end
