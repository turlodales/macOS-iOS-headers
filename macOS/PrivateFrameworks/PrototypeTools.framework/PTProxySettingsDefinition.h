//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, PTModule, PTSettingsClassStructure;

@interface PTProxySettingsDefinition : NSObject <NSSecureCoding>
{
    PTSettingsClassStructure *_structure;
    NSDictionary *_childDefinitions;
    NSDictionary *_defaultValueArchive;
    PTModule *_module;
}

+ (BOOL)supportsSecureCoding;
+ (id)definitionForSettingsClass:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PTModule *module; // @synthesize module=_module;
@property(retain, nonatomic) NSDictionary *defaultValueArchive; // @synthesize defaultValueArchive=_defaultValueArchive;
@property(retain, nonatomic) NSDictionary *childDefinitions; // @synthesize childDefinitions=_childDefinitions;
@property(retain, nonatomic) PTSettingsClassStructure *structure; // @synthesize structure=_structure;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)allSettingsClassesExistAndHaveCorrectVersion;
- (Class)settingsClass;

@end

