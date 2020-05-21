//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSNumber, NSUUID;

@interface STAskForTimeResponse : NSObject <NSSecureCoding>
{
    NSUUID *_associatedRequestIdentifier;
    long long _answer;
    NSNumber *_respondingUserDSID;
    NSNumber *_amountGranted;
    NSDate *_timeStamp;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSNumber *amountGranted; // @synthesize amountGranted=_amountGranted;
@property(retain, nonatomic) NSNumber *respondingUserDSID; // @synthesize respondingUserDSID=_respondingUserDSID;
@property(nonatomic) long long answer; // @synthesize answer=_answer;
@property(retain, nonatomic) NSUUID *associatedRequestIdentifier; // @synthesize associatedRequestIdentifier=_associatedRequestIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPayload:(id)arg1;

@end

