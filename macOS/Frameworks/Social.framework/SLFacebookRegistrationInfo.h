//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface SLFacebookRegistrationInfo : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
    NSNumber *_phone;
    NSString *_password;
    NSString *_gender;
    NSDate *_birthday;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSNumber *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (id)debugDescription;
- (BOOL)hasAllRequiredValues;

@end

