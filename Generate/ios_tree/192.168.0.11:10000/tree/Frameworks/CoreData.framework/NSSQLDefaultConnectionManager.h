/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager {
    NSArray * _allConnections;
    NSMutableArray * _availableConnections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    NSObject<OS_dispatch_semaphore> * _poolCounter;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

- (void)_checkinConnection:(id)arg1;
- (id)_checkoutConnectionOfType:(unsigned long long)arg1;
- (void)_initializeConnectionsWithSeed:(id)arg1;
- (void)dealloc;
- (void)disconnectAllConnections;
- (void)enumerateAvailableConnectionsWithBlock:(id /* block */)arg1;
- (bool)handleStoreRequest:(id)arg1;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (void)scheduleBarrierBlock:(id /* block */)arg1;
- (void)scheduleConnectionsBarrier:(id /* block */)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;

@end
