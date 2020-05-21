//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSString;

@interface CRKFetchUserImageRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_userIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

