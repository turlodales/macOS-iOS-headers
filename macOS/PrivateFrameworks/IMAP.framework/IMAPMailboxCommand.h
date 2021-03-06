//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSString;

@interface IMAPMailboxCommand : IMAPSingleCommand
{
    NSString *_mailboxName;
    NSString *_mailboxArgumentName;
}

- (void).cxx_destruct;
@property(copy) NSString *mailboxArgumentName; // @synthesize mailboxArgumentName=_mailboxArgumentName;
@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)simpleDescriptionString;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)debugCommandStringWithAccount:(id)arg1;
- (BOOL)shouldSendAgainOnError;
- (id)init;
- (id)initWithMailboxName:(id)arg1;

@end

