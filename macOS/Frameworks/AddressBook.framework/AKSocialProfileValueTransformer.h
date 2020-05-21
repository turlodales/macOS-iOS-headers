//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class CNSocialProfile;

@interface AKSocialProfileValueTransformer : NSValueTransformer
{
    CNSocialProfile *_lastSocialProfile;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
- (void).cxx_destruct;
@property(retain, nonatomic) CNSocialProfile *lastSocialProfile; // @synthesize lastSocialProfile=_lastSocialProfile;
- (id)_serviceFromDisplayValue:(id)arg1;
- (id)_usernameFromDisplayValue:(id)arg1 service:(id)arg2;
- (id)_urlStringFromDisplayValue:(id)arg1 service:(id)arg2 username:(id)arg3;
- (id)_usernameFromProfile:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

