//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface MPSectionedIdentifierListEntryPositionKey : NSObject <NSSecureCoding>
{
    NSString *_deviceIdentifier;
    NSString *_generation;
}

+ (BOOL)supportsSecureCoding;
+ (id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *generation; // @synthesize generation=_generation;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compare:(id)arg1;

@end

