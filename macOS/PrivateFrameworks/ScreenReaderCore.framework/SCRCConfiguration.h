//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCUserDefaultsBase.h>

#import "NSKeyedUnarchiverDelegate.h"
#import "SCRCConfigurationSpecifierFactoryProtocol.h"
#import "SCRCDictionarySpecifierFactoryProtocol.h"

@class NSDictionary, NSString;

@interface SCRCConfiguration : SCRCUserDefaultsBase <SCRCDictionarySpecifierFactoryProtocol, SCRCConfigurationSpecifierFactoryProtocol, NSKeyedUnarchiverDelegate>
{
    NSDictionary *_dictionary;
    struct __CFDictionary *_factories;
}

+ (id)configurationValueForClassKey:(id)arg1 withSpecifier:(id)arg2;
+ (id)immutableConfigDictionaryFromDictionary:(id)arg1;
+ (id)sharedConfiguration;
+ (void)initialize;
- (void).cxx_destruct;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)scrc_dictionaryValueForClassKey:(id)arg1 withSpecifier:(id)arg2;
- (void)registerFactory:(Class)arg1 forKey:(id)arg2;
- (id)_createConfigDictionary;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (void)loadConfiguration;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

