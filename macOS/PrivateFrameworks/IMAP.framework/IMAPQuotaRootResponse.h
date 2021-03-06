//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSArray, NSString;

@interface IMAPQuotaRootResponse : IMAPResponse
{
    NSString *_mailboxName;
    NSArray *_quotaRootNames;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *quotaRootNames; // @synthesize quotaRootNames=_quotaRootNames;
@property(copy, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (id)description;

@end

