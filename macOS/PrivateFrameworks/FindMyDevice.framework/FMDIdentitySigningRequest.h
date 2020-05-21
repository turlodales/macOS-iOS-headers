//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding>
{
    BOOL _useSCRT;
    NSData *_dataToSign;
    long long _validityInMinutes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long validityInMinutes; // @synthesize validityInMinutes=_validityInMinutes;
@property(nonatomic) BOOL useSCRT; // @synthesize useSCRT=_useSCRT;
@property(retain, nonatomic) NSData *dataToSign; // @synthesize dataToSign=_dataToSign;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

