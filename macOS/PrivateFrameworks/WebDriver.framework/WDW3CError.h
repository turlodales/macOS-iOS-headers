//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WDW3CError : NSObject
{
    long long _errorCode;
    NSString *_message;
    NSDictionary *_errorData;
}

+ (id)errorFromSessionError:(id)arg1;
+ (id)errorWithCode:(long long)arg1 data:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *errorData; // @synthesize errorData=_errorData;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy, nonatomic) NSString *errorName;
@property(readonly, nonatomic) long long httpStatusCode;
- (id)initWithErrorCode:(long long)arg1 message:(id)arg2 data:(id)arg3;

@end

