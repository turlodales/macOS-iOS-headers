//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFIMAPSingleClientOperation.h>

@class NSString;

@interface ICNFIMAPClientMailboxOperation : ICNFIMAPSingleClientOperation
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
- (id)debugCommandString;
- (BOOL)shouldSendAgainOnError;
- (id)init;
- (id)initWithMailboxName:(id)arg1;

@end

