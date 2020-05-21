//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding>
{
    NSString *_address;
    NSString *_matchingID;
    NSString *_OID;
    NSString *_confirmationCode;
    NSString *_ICCID;
    NSString *_EID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *EID; // @synthesize EID=_EID;
@property(retain, nonatomic) NSString *ICCID; // @synthesize ICCID=_ICCID;
@property(retain, nonatomic) NSString *confirmationCode; // @synthesize confirmationCode=_confirmationCode;
@property(retain, nonatomic) NSString *OID; // @synthesize OID=_OID;
@property(retain, nonatomic) NSString *matchingID; // @synthesize matchingID=_matchingID;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)description;

@end

