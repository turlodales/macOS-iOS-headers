//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAddSecureElementPassConfiguration.h>

@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration
{
    NSString *_password;
    NSString *_appIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

