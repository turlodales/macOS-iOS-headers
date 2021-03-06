/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
 */

@interface HLHeartRateData : NSObject {
    double  _confidence;
    unsigned long long  _confidenceLevel;
    int  _context;
    double  _heartRate;
    unsigned long long  _mode;
    NSDate * _timestamp;
    NSUUID * _uuid;
}

@property (readonly) double confidence;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly) int context;
@property (nonatomic) double heartRate;
@property (readonly) unsigned long long mode;
@property (readonly) NSDate *timestamp;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (double)confidence;
- (unsigned long long)confidenceLevel;
- (int)context;
- (double)heartRate;
- (unsigned long long)mode;
- (void)setHeartRate:(double)arg1;
- (void)setUuid:(id)arg1;
- (id)timestamp;
- (id)uuid;

@end
