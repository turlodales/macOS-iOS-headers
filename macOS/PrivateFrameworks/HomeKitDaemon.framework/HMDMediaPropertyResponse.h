//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDMediaPropertyRequest, NSDate, NSError, NSNumber;

@interface HMDMediaPropertyResponse : HMFObject
{
    HMDMediaPropertyRequest *_request;
    id _value;
    NSError *_error;
    NSNumber *_stateNumber;
    NSDate *_valueUpdatedTime;
}

+ (id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4;
+ (id)responseWithRequest:(id)arg1 error:(id)arg2;
+ (id)responsesFromSerializedResponse:(id)arg1 requests:(id)arg2 home:(id)arg3;
+ (id)serializeResponses:(id)arg1;
+ (id)groupedProfileResponses:(id)arg1;
+ (id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMDMediaPropertyRequest *request; // @synthesize request=_request;
- (id)description;
- (id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end

