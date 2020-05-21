//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_lastSyncDownDate;
    long long _lastSyncDownStatus;
    CKServerChangeToken *_changeToken;
    unsigned long long _clientRequestID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(nonatomic) long long lastSyncDownStatus; // @synthesize lastSyncDownStatus=_lastSyncDownStatus;
@property(retain) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerSyncState:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)forgetClientRequestID;
- (void)forgetChangeTokens;
- (BOOL)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3;
@property(readonly, nonatomic) BOOL hasNeverSyncedDown;
- (id)description;
- (id)descriptionWithContext:(id)arg1;

@end

