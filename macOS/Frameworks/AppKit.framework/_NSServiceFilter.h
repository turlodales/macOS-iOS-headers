//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, _NSServiceEntry;

@interface _NSServiceFilter : NSObject
{
    unsigned long long desiredFilterMask;
    unsigned int wordLimit;
    unsigned int characterLimit;
    _NSServiceEntry *entry;
    id bundleIdentifier;
    id textScript;
    id textLanguage;
    NSArray *linkSchemes;
    NSArray *nonstandardContentTypes;
    NSSet *menuLocations;
    struct {
        unsigned int contentTypeWebURL:1;
        unsigned int contentTypeAnyURL:1;
        unsigned int contentTypeDate:1;
        unsigned int contentTypeAddress:1;
        unsigned int contentTypeFilePath:1;
        unsigned int contentTypeRadar:1;
        unsigned int contentTypeEmail:1;
        unsigned int contentTypePhoneNumber:1;
        unsigned int contentTypeTransitInformation:1;
        unsigned int requiresCJKInputSource:1;
        unsigned int requiresAnyCharacterBeHalfWidth:1;
        unsigned int requiresAnyCharacterBeFullWidth:1;
        unsigned int requiresNonIdentityTraditionalToSimpleConversion:1;
        unsigned int requiresNonIdentitySimpleToTraditionalConversion:1;
        unsigned int disqualified:1;
        unsigned int sense:1;
        unsigned int reserved:16;
    } flags;
}

+ (BOOL)isCJKInputSourceEnabled;
- (void)dealloc;
- (void)_setMenuLocations:(id)arg1;
- (unsigned long long)serviceCategory;
- (id)dataDetectorTypes;
- (BOOL)isRequiredContext;
- (unsigned long long)desiredFilterMask;
- (BOOL)hasDataDetectorTypes;
- (id)description;
- (id)descriptionForTracking;
- (id)_descriptionInnards;
- (id)init;

@end

