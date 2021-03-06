//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSLog/OSLogEntry.h>

#import <OSLog/OSLogEntryFromProcess-Protocol.h>

@class NSString;

@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess>
{
    int _processIdentifier;
    unsigned long long _activityIdentifier;
    NSString *_process;
    NSString *_sender;
    unsigned long long _threadIdentifier;
    unsigned long long _parentActivityIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long parentActivityIdentifier; // @synthesize parentActivityIdentifier=_parentActivityIdentifier;
@property(readonly, nonatomic) unsigned long long threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSString *process; // @synthesize process=_process;
@property(readonly, nonatomic) unsigned long long activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
- (id)initWithEventProxy:(id)arg1;

@end

