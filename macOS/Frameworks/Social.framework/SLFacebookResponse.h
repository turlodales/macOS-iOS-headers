//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSDictionary, NSHTTPURLResponse;

@interface SLFacebookResponse : NSObject <NSCoding>
{
    NSData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    id _untypedResponseParameters;
    long long _httpErrorCode;
}

@property(readonly) long long httpErrorCode; // @synthesize httpErrorCode=_httpErrorCode;
- (void).cxx_destruct;
- (id)failedRequestIDs;
@property(readonly) NSDictionary *responseParameters;
- (id)untypedResponseParameters;
- (BOOL)isBatchResponse;
- (id)checkpointURL;
- (BOOL)hasMissingTokenOrAppID;
- (BOOL)hasBadTokenError;
- (BOOL)hasHTTPStatusOK;
- (BOOL)hasError;
@property(readonly) int APIresponseErrorCode;
- (long long)httpStatusCode;
@property(readonly) NSHTTPURLResponse *urlResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseData:(id)arg1 urlResponse:(id)arg2;

@end

