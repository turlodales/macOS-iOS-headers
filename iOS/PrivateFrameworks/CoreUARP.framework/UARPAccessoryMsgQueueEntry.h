/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPAccessoryMsgQueueEntry : NSObject {
    NSData * _msg;
    bool  _needsResponse;
    NSDate * _queueTime;
}

@property (readonly) NSData *msg;
@property (readonly) bool needsResponse;
@property (readonly) NSDate *queueTime;

- (void).cxx_destruct;
- (id)initWithMsg:(id)arg1 needsResponse:(bool)arg2;
- (id)msg;
- (bool)needsResponse;
- (id)queueTime;

@end
