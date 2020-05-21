//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FCWidget : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)installedWidgets;
+ (id)widgetWithDictionary:(id)arg1;
+ (id)widgetWithPath:(id)arg1;
- (long long)compare:(id)arg1;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setPath:(id)arg1;
- (id)path;
- (id)description;
- (id)plistRepresentation;
- (id)initWithPath:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

