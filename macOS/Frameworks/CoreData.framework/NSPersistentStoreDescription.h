//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface NSPersistentStoreDescription : NSObject <NSCopying>
{
    NSMutableDictionary *_options;
    NSString *_type;
    NSString *_configuration;
    NSURL *_url;
}

+ (id)persistentStoreDescriptionWithURL:(id)arg1;
@property(copy) NSURL *URL; // @synthesize URL=_url;
@property(copy) NSString *configuration; // @synthesize configuration=_configuration;
@property(copy) NSString *type; // @synthesize type=_type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (id)init;
@property BOOL shouldInferMappingModelAutomatically;
@property BOOL shouldMigrateStoreAutomatically;
@property BOOL shouldAddStoreAsynchronously;
- (void)setValue:(id)arg1 forPragmaNamed:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *sqlitePragmas;
@property double timeout;
@property(getter=isReadOnly) BOOL readOnly;
- (void)setOption:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *options;

@end

