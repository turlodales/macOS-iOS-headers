//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString;

@interface PHImportException : NSObject
{
    NSString *_message;
    unsigned long long _importance;
    NSString *_path;
    NSString *_sourceCodeFile;
    unsigned long long _lineNumber;
    NSError *_nsError;
    NSDate *_createDate;
}

+ (id)logForAllExceptions:(id)arg1;
+ (id)logForTerminalExceptionsForRecorder:(id)arg1;
+ (id)logForMostImportantException:(id)arg1;
+ (id)mostImportantException:(id)arg1;
+ (id)exceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(readonly, nonatomic) NSError *nsError; // @synthesize nsError=_nsError;
@property(readonly, nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) NSString *sourceCodeFile; // @synthesize sourceCodeFile=_sourceCodeFile;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long importance; // @synthesize importance=_importance;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (id)logWithPrefix:(id)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL isTerminal;
- (BOOL)isCritical;
- (id)initWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;

@end

