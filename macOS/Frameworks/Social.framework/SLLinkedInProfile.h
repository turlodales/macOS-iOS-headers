//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSString;

@interface SLLinkedInProfile : NSObject <NSSecureCoding>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_headline;
}

+ (BOOL)supportsSecureCoding;
+ (id)profileWithDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *headline; // @synthesize headline=_headline;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithProifleRep:(id)arg1;

@end

