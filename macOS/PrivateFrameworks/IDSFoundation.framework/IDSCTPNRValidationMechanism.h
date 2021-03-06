//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>
{
    long long _type;
    NSString *_context;
}

+ (id)SMSLessMechanism;
+ (id)SMSMechanismWithContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 context:(id)arg2;

@end

