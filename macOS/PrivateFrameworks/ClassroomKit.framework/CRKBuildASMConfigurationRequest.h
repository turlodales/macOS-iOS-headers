//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSDictionary;

@interface CRKBuildASMConfigurationRequest : CATTaskRequest
{
    NSDictionary *_existingASMConfiguration;
    DMFControlGroupIdentifier *_courseIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
@property(copy, nonatomic) NSDictionary *existingASMConfiguration; // @synthesize existingASMConfiguration=_existingASMConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

