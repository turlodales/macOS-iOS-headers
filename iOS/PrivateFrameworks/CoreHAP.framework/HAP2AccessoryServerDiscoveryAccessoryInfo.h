/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject {
    HAPDeviceID * _deviceID;
    NSDictionary * _rawDiscoveryInfo;
}

@property (nonatomic, readonly) HAPDeviceID *deviceID;
@property (nonatomic, readonly) NSDictionary *rawDiscoveryInfo;

+ (id)new;

- (void).cxx_destruct;
- (id)deviceID;
- (id)init;
- (id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2;
- (id)rawDiscoveryInfo;

@end
