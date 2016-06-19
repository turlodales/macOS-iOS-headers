//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import "NSSecureCoding.h"

@class CKServerChangeToken, NSData, NSNumber;

@interface CKFetchRecordChangesOperationResult : CKOperationResult <NSSecureCoding>
{
    CKServerChangeToken *_serverChangeToken;
    NSData *_clientChangeTokenData;
    NSNumber *_status;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;

@end

