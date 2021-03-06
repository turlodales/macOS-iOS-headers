/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyXPCConnection : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

+ (id)instance;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)arg1;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)arg1;
+ (void)invokeXPCWithBlock:(id /* block */)arg1 synchronous:(bool)arg2;
+ (void)removeInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (void)setConnection:(id)arg1;

@end
