/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) BKSHIDEventDisplay *display;
@property (nonatomic, copy) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic) int pid;
@property (nonatomic, copy) BKSHIDEventDeferringToken *token;
@property (nonatomic) long long versionedPID;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setToken:(id)arg1;
- (void)setVersionedPID:(long long)arg1;

@end
