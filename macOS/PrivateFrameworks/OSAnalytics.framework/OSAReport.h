//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface OSAReport : NSObject
{
    NSString *_incidentID;
    NSString *_logType;
    double _capture_time;
    NSMutableArray *_notes;
    NSMutableDictionary *_logWritingOptions;
    NSString *_logfile;
}

+ (id)bootArgs;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(BOOL)arg1;
+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *logfile; // @synthesize logfile=_logfile;
@property(readonly, nonatomic) NSArray *notes; // @synthesize notes=_notes;
- (int)streamContentAtLevel:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)saveWithOptions:(id)arg1;
- (BOOL)secondChanceToSylog;
- (void)symlink:(id)arg1;
- (void)generateLogAtLevel:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)additionalIPSMetadata;
- (BOOL)isActionable;
- (id)reportNamePrefix;
- (id)appleCareDetails;
- (double)captureTime;
- (id)incidentID;
- (BOOL)isAppleTV;
- (id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2;
- (id)problemType;
- (void)alignIncident:(id)arg1 at:(double)arg2;
- (id)init;

@end

