/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMAnalyticsEvent : NSObject {
    NSMutableDictionary * __eventMap;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSMutableDictionary *_eventMap;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)_eventMap;
- (id)eventName;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (void)publish;
- (id)uuid;

@end
