//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ECMessageFlagChange, ECMessageFlags, NSArray, NSData, NSDate, NSIndexSet, NSString;

@protocol ECIMAPServerInterface <NSObject>
@property(readonly, nonatomic) BOOL hasValidConnection;
- (BOOL)appendData:(NSData *)arg1 toMailboxNamed:(NSString *)arg2 flags:(ECMessageFlags *)arg3 dateReceived:(NSDate *)arg4 appendInfo:(id *)arg5 error:(id *)arg6;
- (BOOL)moveUIDs:(NSIndexSet *)arg1 toMailboxNamed:(NSString *)arg2 copyInfo:(id *)arg3 error:(id *)arg4;
- (BOOL)copyUIDs:(NSIndexSet *)arg1 toMailboxNamed:(NSString *)arg2 copyInfo:(id *)arg3 error:(id *)arg4;
- (BOOL)storeGmailLabels:(NSArray *)arg1 state:(BOOL)arg2 forUIDs:(NSIndexSet *)arg3;
- (BOOL)storeFlagChange:(ECMessageFlagChange *)arg1 forUIDs:(NSIndexSet *)arg2;
- (BOOL)expungeUIDs:(NSIndexSet *)arg1;
- (BOOL)expunge;
@end

