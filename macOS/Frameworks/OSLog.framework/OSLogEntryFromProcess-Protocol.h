//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol OSLogEntryFromProcess
@property(readonly, nonatomic) unsigned long long threadIdentifier;
@property(readonly, nonatomic) NSString *sender;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) NSString *process;
@property(readonly, nonatomic) unsigned long long activityIdentifier;
@end

