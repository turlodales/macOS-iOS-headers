//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHImportExceptionRecorder.h"

@class NSMutableArray, NSString;

@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder>
{
    BOOL _hasTerminalException;
    NSMutableArray *_exceptions;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasTerminalException; // @synthesize hasTerminalException=_hasTerminalException;
@property(readonly, nonatomic) NSMutableArray *exceptions; // @synthesize exceptions=_exceptions;
- (void)logErrors:(unsigned long long)arg1;
@property(readonly, nonatomic) NSMutableArray *criticalExceptions;
@property(readonly, nonatomic) NSMutableArray *terminalExceptions;
- (id)exceptionsWithMinimumImportance:(unsigned long long)arg1;
- (id)exceptionsOfImportance:(unsigned long long)arg1;
- (id)logForExceptionsOfMinImportance:(unsigned long long)arg1;
- (id)logForExceptionsOfImportance:(unsigned long long)arg1;
- (id)addExceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
- (void)addExceptions:(id)arg1;
- (void)addException:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

