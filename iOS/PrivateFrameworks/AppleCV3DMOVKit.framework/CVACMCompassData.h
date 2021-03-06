/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

@interface CVACMCompassData : NSObject <NSSecureCoding> {
    CVACLMotionTypeVector3 * _fieldValues;
    unsigned long long  _syncTimestamp;
    float  _temperature;
    double  _timestamp;
}

@property (nonatomic, retain) CVACLMotionTypeVector3 *fieldValues;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldValues;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setFieldValues:(id)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)syncTimestamp;
- (float)temperature;
- (double)timestamp;

@end
