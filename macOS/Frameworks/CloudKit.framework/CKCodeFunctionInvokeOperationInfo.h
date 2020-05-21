//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding.h"

@class NSArray, NSData, NSString, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _local;
    BOOL _shouldFetchAssetContentInMemory;
    NSString *_serviceName;
    NSString *_functionName;
    NSArray *_requestLocalSerializations;
    NSArray *_requestLocalEnvelopes;
    NSData *_permittedRemoteMeasurement;
    NSURL *_explicitBaseURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) BOOL local; // @synthesize local=_local;
@property(copy, nonatomic) NSURL *explicitBaseURL; // @synthesize explicitBaseURL=_explicitBaseURL;
@property(copy, nonatomic) NSData *permittedRemoteMeasurement; // @synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement;
@property(copy, nonatomic) NSArray *requestLocalEnvelopes; // @synthesize requestLocalEnvelopes=_requestLocalEnvelopes;
@property(copy, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

