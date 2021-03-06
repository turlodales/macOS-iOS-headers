//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface SGTinyLinusMeData : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
    NSSet *_normalizedPhones;
    NSSet *_normalizedEmails;
    NSSet *_addresses;
}

+ (void)clearCache;
+ (id)fetchWithAddressBook:(id)arg1;
+ (id)fetch;
@property(readonly, nonatomic) NSSet *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) NSSet *normalizedEmails; // @synthesize normalizedEmails=_normalizedEmails;
@property(readonly, nonatomic) NSSet *normalizedPhones; // @synthesize normalizedPhones=_normalizedPhones;
@property(readonly, nonatomic) NSString *compositeName; // @synthesize compositeName=_compositeName;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;

@end

