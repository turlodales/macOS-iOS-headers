/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathEvent : NSObject {
    NSString * _bundleID;
    long long  _type;
}

@property (readonly) NSString *bundleID;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithType:(long long)arg1 bundleID:(id)arg2;
- (long long)type;

@end
