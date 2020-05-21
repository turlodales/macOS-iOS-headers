//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface HMFWoBLEInfo : HMFObject <NSSecureCoding>
{
    NSData *_bleIdentifier;
}

+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *bleIdentifier; // @synthesize bleIdentifier=_bleIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBLEIdentifier:(id)arg1;

@end

