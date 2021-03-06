//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isEnabled;
    long long _primaryEarbudSide;
    long long _primaryInEarStatus;
    long long _secondaryInEarStatus;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long secondaryInEarStatus; // @synthesize secondaryInEarStatus=_secondaryInEarStatus;
@property(readonly, nonatomic) long long primaryInEarStatus; // @synthesize primaryInEarStatus=_primaryInEarStatus;
@property(readonly, nonatomic) long long primaryEarbudSide; // @synthesize primaryEarbudSide=_primaryEarbudSide;
@property(readonly, nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithIsEnabled:(BOOL)arg1 primaryEarbudSide:(long long)arg2 primaryInEarStatus:(long long)arg3 secondaryInEarStatus:(long long)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

