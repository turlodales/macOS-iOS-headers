//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>
{
    BOOL _answered;
    BOOL _answeredOnThisDevice;
    unsigned long long _type;
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL answeredOnThisDevice; // @synthesize answeredOnThisDevice=_answeredOnThisDevice;
@property(nonatomic) BOOL answered; // @synthesize answered=_answered;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqualToQuestion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSArray *allowedAnswers;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

