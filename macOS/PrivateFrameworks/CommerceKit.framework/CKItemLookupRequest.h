//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CKItemLookupRequest : NSObject
{
    NSArray *_bundleIdentifiers;
    NSArray *_adamIdentifiers;
    BOOL _platformOverride;
    NSString *_keyProfile;
    NSString *_preferredLanguage;
    CDUnknownBlockType _lookupCallbackBlock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage=_preferredLanguage;
@property BOOL platformOverride; // @synthesize platformOverride=_platformOverride;
- (id)parameters;
- (BOOL)start;
- (BOOL)startWithLookupBlock:(CDUnknownBlockType)arg1;
- (id)initWithBundleIdentifiers:(id)arg1 adamIDs:(id)arg2 keyProfile:(id)arg3;

@end

