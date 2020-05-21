//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface NSNibExternalObjectPlaceholder : NSObject <NSCoding>
{
    NSString *_externalObjectPlaceholderIdentifier;
}

+ (void)removeMappingForCoder:(id)arg1 withIdentifier:(id)arg2;
+ (void)removeMappingsForCoder:(id)arg1;
+ (id)mappedEntryForCoder:(id)arg1 withIdentifier:(id)arg2;
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;
+ (void)addMappingFromIdentifier:(id)arg1 toEntry:(id)arg2 forCoder:(id)arg3;
+ (struct __CFDictionary *)placeholderDecodingMap;
@property(copy) NSString *externalObjectPlaceholderIdentifier; // @synthesize externalObjectPlaceholderIdentifier=_externalObjectPlaceholderIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

